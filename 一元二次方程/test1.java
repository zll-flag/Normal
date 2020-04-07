package normal1;

import java.util.Scanner;

public class test1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double a,b,c;
		Scanner sc = new Scanner (System.in);
		a = sc.nextDouble();
		b = sc.nextDouble();
		c = sc.nextDouble();
		try {
			Equation E = new Equation(a,b,c);
			if(a == 0)
				throw new NotQuadraticEquationException("非一元二次方程！方程的解："+(-b/c));
			else {
			
			if((b*b-4*a*c)<0)
				throw new NoRealResultException("该方程无实根！");
			else
				E.Answer();
			}
		}
		catch(NotQuadraticEquationException e) {
			System.out.println("发生异常：" + e);
		}
		catch(NoRealResultException e) {
			System.out.println("发生异常：" + e);
		}
		catch(Exception e) {
			System.out.println("其他异常" + e);
		}
	}

}
