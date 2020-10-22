#aim=to find the hours and minutes os the seconds inputed
ts=float(input("enter the seconds->"))
hr=ts//3600
mins=(ts%3600)//60
sec=(ts%3600)%60
print(ts,"seconds= ",hr,"hours",mins,"minutes",sec,"seconds")
