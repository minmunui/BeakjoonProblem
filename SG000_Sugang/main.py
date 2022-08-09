import datetime
from selenium.webdriver.common.by import By


def lineAfterComments(infile):    # Ignore lines beginning with '#'
    line = infile.readline()      # and then return the first line
    while line[0] == '#':         # with no '#'
        line = infile.readline()
    return line

def printData(data):
    print('Thank you for using it.')
    print('User Info | ID : {id} | Password : {password}'.format(id=data['id'], password=data['password']))
    print('Class registration start time : {date}'.format(date = data['time']))
    for subject in data['subjects']:
        print('CODE : {sub}\t CLASS : {num}'.format(sub = subject[0], num = subject[1]))

def readTxt(fileName):
    data = dict()
    try:
        options = open('suganginfo.txt', 'r')
    except:
        options = open('suganginfo.txt', 'w')
        options.write("""# '#' means that this line is ignored
# if you want to apply subjects from hoped subjects : 1
# by using subject codes : 2
1
#2
#
#
#
# Enter the ID and password that are separated by line change.
# ex) 
# 201824469
# password123
201824469
chan1823.pus
# Below, enter the time when the course registration starts.
2022-02-09 08:00:00
# 
# ex) Enter the subject code and class number of the lecture you want to apply with a blank between them.
# AA10110 001
# BB11000 001 ...
!End""")
    line = lineAfterComments(options)
    data['method'] = line[:-1]
    line = lineAfterComments(options)
    data['id'] = line[:-1]
    line = lineAfterComments(options)
    data['password'] = line[:-1]
    line = lineAfterComments(options)
    data['time'] = line[:-1]
    data['subjects'] = []

    line = lineAfterComments(options)
    while line != "!End":
        data['subjects'].append(line[:-1].split(' '))
        line = lineAfterComments(options)

    d = datetime.date(int(data['time'].split(' ')[0].split('-')[0]), int(data['time'].split(' ')[0].split('-')[1]), int(data['time'].split(' ')[0].split('-')[2]))
    t = datetime.time(int(data['time'].split(' ')[1].split(':')[0]), int(data['time'].split(' ')[1].split(':')[1]), int(float(data['time'].split(' ')[1].split(':')[2])))

    dt = datetime.datetime.combine(d, t)
    data['time'] = dt
    return data

data = readTxt('suganginfo.txt')
printData(data)


from datetime import date, datetime
from selenium import webdriver

browser = webdriver.Chrome()
browser.maximize_window()
# browser.get('http://61.97.189.241/login/') ### === modified ===
browser.get('https://sugang.pusan.ac.kr/sugang/login.aspx')
# browser.switch_to.frame('FRAMENAME') ### === if other frame is exist
browser.find_element(By.ID, 'txtid').send_keys(data['id']) ### === xpath needed ===
browser.find_element(By.ID, 'txtpassword').send_keys(data['password']) ### === password needed ===

import time
while (datetime.now()-data['time']).seconds > 0 :
    time.sleep(0.01)

print('Login')
browser.save_screenshot('loginTime.png')
browser.find_element(By.ID, 'btnlogin').click()

from selenium.webdriver.common.alert import Alert

try :
    browser.switch_to.alert.accept()
    print('Alert accept')
except:
    print('There is no alert')

# browser.switch_to_alert().accept()

from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC



# try:
#     elem = WebDriverWait(browser, 100).until(EC.presence_of_all_elements_located((By.XPATH, 'dgBasket_List$ctl02$bt신청'))) # 10초 동안 기다림 특정 elem이 존재할 때까지.
#     print(elem.text)
# except:
#     print('Failed!')


# if ( int(data['method']) == 1 ):
#     for subject in data['subjects']:
#         browser.find_elements_by_name('txtCode')[0].send_keys(subject[0])
#         browser.find_elements_by_name('txtCode')[1].send_keys(subject[1])
#         browser.find_element_by_name('수강신청(직접) Register').click()
# else :
#     subjectNum = 0
#     for button in browser.find_elements(By.NAME, 'dgBasket_List$ctl02$bt신청'):
#         browser.find_elements_by_name('dgBasket_List$ctl02$bt신청')[subjectNum].click()
#         # time.sleep(1)
#         browser.save_screenshot('subjectButton'+str(subjectNum)+'.png')
#         subjectNum+=1
#         print(str(subjectNum) + " complete!")
#         # try:
#         #     WebDriverWait(browser, 100).until(EC.presence_of_all_elements_located((By.XPATH, 'dgBasket_List$ctl02$bt신청'))) # 10초 동안 기다림 특정 elem이 존재할 때까지.
#         #     button.click()
#         #     browser.save_screenshot('subjectButton'+str(subjectNum)+'.png')
#         #     time.sleep(0.5)
#         #     subjectNum+=1
#         #     print(str(subjectNum) + " complete!")
#         # except:
#         #     print('Failed!')
import pyautogui

found = False
while not found:
    foundLocation = pyautogui.locateOnScreen("color.png")
    if foundLocation:
        pyautogui.click(foundLocation)
        for i in range(13):
            pyautogui.move(0, 36)
            pyautogui.click()
        found = True

print('Finished')