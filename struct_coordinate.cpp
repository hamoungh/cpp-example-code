struct coordinate{
	int x; 
	int y; 
};
coordinate coords[100];
coordinate circularMotion(double t){
	coordinate c;
	c.x=t;
	c.y=2;
	return c; 
}
void circularMotionByRef(double t,int& x, int& y){
	coordinate c;
	x=t;
	y=2;
}