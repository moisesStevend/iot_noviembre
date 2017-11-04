import requests

last=10

get_data = requests.get("https://api.thingspeak.com/channels/358733/fields/2.json?results="+str(last))

data_feeds = get_data.json()["feeds"]

for i in data_feeds:
	print i