import requests

#url="http://192.168.1.24/temperature_client"

send_data = raw_input("ingrese valor: ")

url="http://192.168.1.24/led_client?params=hola"+send_data

data_get = requests.get(url)

data_json = data_get.json()

if data_json["return_value"]==1:
	print "envio exitoso"