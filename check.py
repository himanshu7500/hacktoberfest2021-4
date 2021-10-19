from twilio.rest import Client

# Your Account SID from twilio.com/console
account_sid = "AC8ae6636cf9110f3032018e2a8ea13362"
# Your Auth Token from twilio.com/console
auth_token  = "066eca336d870336a6a3d672cd9f2dd6"

client = Client(account_sid, auth_token)

message = client.messages.create(
    to="+917414894422", 
    from_="+19138284518",
    body="Hello from Ankit!")

print(message.sid)

