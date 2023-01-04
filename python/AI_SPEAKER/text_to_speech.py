from gtts import gTTS
from playsound import playsound

# text = """
# Imagine that you have just arrived at a hotel after 
# a tiring 7-hour overnight flight. At the front desk, 
# the staff person welcomes you, gives you a warm smile, 
# confirms your reservation quickly and hands you your room key. 
# They tell you the complimentary breakfast is still being served in the dining room."""
# file_name = "sample.mp3"
# tts_en = gTTS(text=text, lang="en")
# tts_en.save(file_name)

# text = "동해물과 백두산이 마르고 닳도록 하느님이 보우하사 우리나라 만세"
# file_name = "sample.mp3"
# tts_ko = gTTS(text=text, lang="ko")
# tts_ko.save(file_name)

with open("sample.txt", "r") as f : 
    text = f.read()

file_name = "sample.mp3"
tts_ko = gTTS(text=text, lang="ko")
tts_ko.save(file_name)

playsound(file_name)