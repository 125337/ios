@interface VoiceRecordAnimationUtility : NSObject
+ (id)getBasicAnimation:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4 timingFuction:(id)arg5;
+ (id)getPathAnimationWithFromPath:(id)arg1 toPath:(id)arg2 duration:(double)arg3 timingFunction:(id)arg4;
+ (id)getOpacityAnimationFromValue:(double)arg1 toValue:(double)arg2 duration:(double)arg3 timingFunction:(id)arg4;
+ (id)getPositionAnimationFromValue:(CGPoint)arg1 toValue:(CGPoint)arg2 duration:(double)arg3 timingFunction:(id)arg4;
+ (id)getAnimationGroupFromAnimations:(id)arg1 duration:(double)arg2;
@end

