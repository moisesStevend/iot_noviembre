import requests

#url="http://192.168.1.24/temperature_client"
url="http://192.168.1.24/pres_client"

data_get = requests.get(url)

data_json = data_get.json()

print data_json['variables']["pre_client"]

