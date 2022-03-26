<html > 
  
<head> 
  <title>Form To Insert Data Into Database</title>
<style>
body {
  font-family: Arial, Helvetica, sans-serif;
  background-color:aqua;
}


/* Add padding to containers */
.container {
  padding: 16px;
  background-color: white;
}

/* Full-width input fields */
input[type=text],select{
  width: 100%;
  padding: 15px;
  margin: 5px 0 22px 0;
  display: inline-block;
  border: none;
  background: #f1f1f1;
}

input[type=text]:focus {
  background-color: #ddd;
  outline: none;
}

/* Overwrite default styles of hr */
hr {
  border: 1px solid #f1f1f1;
  margin-bottom: 25px;
}

/* Set a style for the submit button */
.submitbtn {
  background-color: #4CAF50;
  color: white;
  padding: 16px 20px;
  margin: 8px 0;
  border: none;
  cursor: pointer;
  width: 100%;
  opacity: 0.9;
}

.submitbtn:hover {
  opacity: 1;
}

/* Add a blue text color to links */

/* Set a grey background color and center the text of the "sign in" section */

</style>
  
<body> 
  
        <h1>Storing Form data in Database</h1> 
          <hr>
  
        <form action="insert.php" method="post"> 
               <div class="container">
          
                <label for="Name">Name:</label> 
                <input type="text" name="Name" id="Name" placeholder="Enter Name" required> 
               
           

  
              
              
           
                <label for="Email">Email Address:</label> 
                <input type="text" name="Email" id="Email" placeholder="Enter Email" required> 
          
              

         
                <label for="Address">Country:</label> 
                <select name="Country" id="Country">
                <option value=" ">Select Your Country</option>    
  <option value="Nepal">Nepal</option>
  <option value="India">India</option>
  <option value="Canada">Canada</option>
 
</select>

              
             <hr>
            <input type="submit" value="Submit" class="submitbtn"> 
        </form> 
    </div>
   
</body> 
  
</html>


