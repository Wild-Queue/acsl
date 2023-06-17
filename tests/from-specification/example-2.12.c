//@ type point = struct { real x; real y; };
//@ type triangle = point[3];
//@ logic point origin = { .x = 0.0 , .y = 0.0 };
/*@ logic triangle t_iso = { [0] = origin,
@ [1] = { .y = 2.0 , .x = 0.0 }
@ [2] = { .x = 2.0 , .y = 0.0 }};
@*/
/*@ logic point centroid(triangle t) = {
@ .x = mean3(t[0].x,t[1].x,t[2].x);
@ .y = mean3(t[0].y,t[1].y,t[2].y);
@ };
@*/
//@ type polygon = point[];
/*@ logic perimeter(polygon p) =
@ \sum(0,\length(p)-1,\lambda integer i;d(p[i],p[(i+1) % \length(p)])) ;
@*/