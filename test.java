import java.util.Scanner;

abstract class Person{
	private  String username,password;
	public abstract boolean Login(String name , String pass);
}
class Teacher extends Person{
	private  String username,password;
	public Teacher(String name , String pass) {
		username = name ;
		password = pass ;
	}
	@Override
	public boolean Login(String name , String pass) {
		// TODO Auto-generated method stub
		if(name.equals(username)&&pass.equals(password)) {
			System.out.println("Teacher login success!");
			return true;
		}
		else
		{
			return false;
		}
	}	
}
class Student extends Person{
	private  String username,password;
	public Student(String name , String pass) {
		username = name ;
		password = pass ;
	}
	@Override
	public boolean Login(String name , String pass) {
		// TODO Auto-generated method stub
		if(name.equals(username)&&pass.equals(password)) {
			System.out.println("Student login successfully!");
			return true;
		}
		else
		{
			return false;
		}
	}	
}
class Admin extends Person{
	private  String username,password;
	public Admin(String name , String pass) {
		username = name ;
		password = pass ;
	}
	@Override
	public boolean Login(String name , String pass) {
		// TODO Auto-generated method stub
		if(name.equals(username)&&pass.equals(password)) {
			System.out.println("Admin login successfully!");
			return true;
		}
		else
		{
			return false;
		}
	}	
}
public class test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person  Per[] = new Person[6];
		Per[0] = new Teacher("zhang","zhang");
		Per[1] = new Teacher("li","zhang");
		Per[2] = new Student("wang","zhang");
		Per[3] = new Student("zheng","zhang");
		Per[4] = new Admin("admin","zhang");
		Per[5] = new Student ("wu","zhang");
		String username,pass;
		Scanner Sc = new Scanner(System.in);
		username =  Sc.nextLine();
		pass = Sc.nextLine();
		for(int i=0 ; i<6 ; i++)
		{
		   if(Per[i].Login(username,pass))
		   {
			   System.out.println("Login success£¡");
			   break;
		   }
		   if(i>=5)
		   {
			   System.out.println("Login failure!");
		   }
		}
	}

}
