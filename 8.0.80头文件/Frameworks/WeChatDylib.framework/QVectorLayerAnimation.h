@interface QVectorLayerAnimation : NSObject
+ (id)createTranslateAnimationWithLocations:(id)arg1 duration:(double)arg2 animKey:(id)arg3 withMode:(id)arg4;
+ (id)createRotateAnimationWithLocations:(id)arg1 initialRotation:(double)arg2 offsetRotate:(double)arg3 duration:(double)arg4 withKey:(id)arg5;
+ (id)validateLocationData:(id)arg1;
+ (id)compressLocationData:(id)arg1;
@end
