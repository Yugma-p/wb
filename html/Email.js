function validateForm() 
{
    var name = document.myForm.phone.value;
    var mobile = /^[6-9]\d{10}$/; 
    if (name == "" || name == null) {
        alert("Enter Mobile Number");
        return false;
    } 
    else if (!mobile.test(name)) {  
        alert("Enter valid Mobile Number");
        return false;
    }
    var email = document.myForm.email.value;
    var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/; 
    if (email === "" || email === null) {
        alert("Enter Email !!")
        return false;
    } 
    else if (!emailRegex.test(email)) {
        alert("Enter Valid Email !!")
        return false;
    }
    
    alert("Registration successful!");
    return true;
 }
