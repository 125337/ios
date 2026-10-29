@interface QMUAnnotationAnimationTools : NSObject
+ (id)createTranslateAnimationWithLocations:(id)arg1 duration:(double)arg2;
+ (id)createRotateAnimationWithLocations:(id)arg1 initialRotation:(double)arg2 duration:(double)arg3 distance:(double)arg4;
+ (id)validateLocationData:(id)arg1;
+ (id)compressLocationData:(id)arg1;
+ (double)annotationViewRotation:(id)arg1;
+ (double)getTranslateTotalDistance:(id)arg1;
+ (BOOL)checkPointOnSegment:(CLLocationCoordinate2D)arg1 withStartPoint:(CLLocationCoordinate2D)arg2 andEndPoint:(CLLocationCoordinate2D)arg3;
@end

