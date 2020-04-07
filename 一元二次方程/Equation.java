package normal1;

class NotQuadraticEquationException extends Exception{
	public NotQuadraticEquationException(String e) {
		super(e);
	}
}
class NoRealResultException extends Exception{
	public NoRealResultException(String e) {
		super(e);
	}
}
public class Equation {
	private double a,b,c;
	public Equation(double A,double B,double C) throws NotQuadraticEquationException {
		a = A ;
		b = B ;
		c = C ;
	}
	public void Answer() throws NoRealResultException {
		double m,n1,n2;
		m = b*b-4*a*c;
		n1 = (-b+Math.sqrt(m))/(-2*a);
		n2 = (-b-Math.sqrt(m))/(-2*a);
		System.out.println("方程的解："+"x1 = "+n1+"   x1 = "+n2);
	}
}
