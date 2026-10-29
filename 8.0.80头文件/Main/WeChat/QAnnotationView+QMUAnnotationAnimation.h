@interface QAnnotationView (QMUAnnotationAnimation) <CAAnimationDelegate>
- (id)tb_constructKeyframeAnimationWithCoordinates:(CLLocationCoordinate2D *)arg1 coordinateCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)tb_executeAnimation:(id)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 completion:(id /* block */)arg3;
- (void)animationWithDuration:(double)arg1 coordinates:(CLLocationCoordinate2D *)arg2 coordinatesCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)animationWithDuration:(double)arg1 coordinate:(CLLocationCoordinate2D)arg2 completion:(id /* block */)arg3;
- (void)setMediator:(id)arg1;
- (id)mediator;
@end
