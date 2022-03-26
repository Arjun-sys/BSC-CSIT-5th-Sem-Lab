<?php 
  
        // servername => localhost 
        // username => root 
        // password => empty 
        // database name => staff 
        $conn = mysqli_connect("localhost", "root", "", "labsheet6db"); 
          
        // Check connection 
        if($conn === false){ 
            die("ERROR: Could not connect. " 
                . mysqli_connect_error()); 
        } 
           $Name = $_REQUEST['Name'];
    $Email = $_REQUEST['Email'];
    $Country=$_REQUEST['Country'];

        // Taking all 5 values from the form data(input) 
       
        // Performing insert query execution 
        // here our table name is college 
        $sql = "INSERT INTO formtable VALUES ('$Name','$Email','$Country')"; 
          
        if(mysqli_query($conn, $sql)){ 
            echo "<h3>Data stored in a database successfully</h3>" ;
               
            echo nl2br("\n$Name\n $Email\n$Country"); 
        } else{ 
            echo "ERROR: Opps! Sorry $sql. " 
                . mysqli_error($conn); 
        } 
          
        // Close connection 
        mysqli_close($conn); 
        ?> 

