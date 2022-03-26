<script>
function check()
		{

			//checking of name
			var condition=/^[A-Za-z0-1]{5,13}$/;//space is placed at the last of [] in /^[A-Za-z ]+$/
			var v_name=document.getElementById("uname").value;
			var result=v_name.match(condition);
			if(v_name=="")
			{
				alert("Please enter Username");
				return false;
			}
			else if(v_name!=result){
				alert("Enter the valid name");
				return false;
			 }

			 //checking of password
	
			 var cond=/^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@$!%*?&])[A-Za-z0-9@$!%*?&]{8,10}$/;
			 var pass=document.getElementById("psw").value;
			 var res=pass.match(cond);
			 if(pass=="")
			 {
			 	alert("Please enter password");
			 	return false;
			 }
			 else if(!res)
			 {
			 	alert("Enter valid password");
			 	return false;
			 }

		}
	</script>