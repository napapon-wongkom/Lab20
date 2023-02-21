#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B){
	double delta_x = abs(A.x - B.x);
	double overlap_area;
	bool check_x = ((delta_x > A.w) || (delta_x > B.w)) ;
	if(check_x==true){
		return overlap_area =0;
	}else{
		double max_x = max(A.x,B.x);
		double min_x = min(A.x + A.w,B.x + B.w);
		double min_y = min(A.y,B.y);
		double max_y = max(A.y - A.h,B.y - B.h);
		double w_overlab = max_x - min_x;
		double h_overlab = max_y - min_y;

		return overlap_area = w_overlab * h_overlab;
	}


}

