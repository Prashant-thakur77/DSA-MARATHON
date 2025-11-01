import smtplib, requests
from email.mime.text import MIMEText

# Send Email
def send_email():
    msg = MIMEText("Hello! This is a test email sent using Python.")
    msg['Subject'] = "Python Email"
    msg['From'], msg['To'] = "prashant101007@gmail.com", "prashant101007@gmail.com"
    with smtplib.SMTP('smtp.gmail.com', 587) as s:
        s.starttls()
        s.login("prashant101007@gmail.com", "Prashant@2730")
        s.send_message(msg)
    print("✅ Email sent!")

# Read News (using NewsAPI)
def read_news():
    url = "https://newsapi.org/v2/top-headlines?country=in&apiKey=YOUR_API_KEY"
    news = requests.get(url).json()
    for a in news['articles'][:5]:
        print("📰", a['title'])

# Access Web Page
def access_web():
    r = requests.get("https://www.example.com")
    print("🌐 Page Title:", r.text.split("<title>")[1].split("</title>")[0])

# Main
send_email()
read_news()
access_web()
