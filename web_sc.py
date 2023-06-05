import requests
from bs4 import BeautifulSoup
import pandas as pd
import random

def extractrev(review_url):
    resp = requests.get(review_url)
    soup = BeautifulSoup(resp.text, 'html.parser')
    reviews = soup.findAll('div', {'data-hook': 'review'})
    for rev in reviews:
        print(rev.find('span', {'class': 'a-profile-name'}).text.strip())
        print(rev.find('span', {'class': 'a-icon-alt'}).text.strip()[0:3])


rl = []
pg = 1
product_url = 'https://www.amazon.in/Amazon-Brand-Stretchable-IK20-SS-57A_Medium-Blue_30W/dp/B083D99RRV'
review_url = product_url.replace('dp', 'product-reviews')+f"?pageNumber={pg}"
resp = requests.get(review_url)
soup = BeautifulSoup(resp.text, 'html.parser')
txt=soup.find('div',{'data-hook':'cr-filter-info-review-rating-count'}).text.strip()
tmp=txt.find(', ')
pgno=int(txt[tmp+1:tmp+3])//10
while(pg<=pgno):
    review_url = product_url.replace('dp', 'product-reviews')+f"?pageNumber={pg}"
    extractrev(review_url)
    pg+=1



    
