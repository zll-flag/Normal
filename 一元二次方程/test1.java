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
				throw new NotQuadraticEquationException("��һԪ���η��̣����̵Ľ⣺"+(-b/c));
			else {
			
			if((b*b-4*a*c)<0)
				throw new NoRealResultException("�÷�����ʵ����");
			else
				E.Answer();
			}
		}
		catch(NotQuadraticEquationException e) {
			System.out.println("�����쳣��" + e);
		}
		catch(NoRealResultException e) {
			System.out.println("�����쳣��" + e);
		}
		catch(Exception e) {
			System.out.println("�����쳣" + e);
		}
	}

}
