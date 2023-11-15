function isvalidEmail(email)
{
const emailRedex=[/^[^\s@+@[^\s@]+\.[^\s@]+s/];
return emailRedex.test(email);
}
const email=["examle@example.com"];
if(isvaliEmail(email))
{
console.log("Email is valid");
}
else
{
console.log("Email is invalid");
}

