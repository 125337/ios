@interface WCGestureManager : NSObject
+ (double)cosDistanceWithSourceVec:(id)arg1 andTargetVec:(id)arg2;
+ (double)recognizeGestureSourceSet:(id)arg1 targetSet:(id)arg2;
+ (id)standardizeSet:(id)arg1;
+ (id)convertGesturePointsFromStringToArray:(id)arg1;
+ (BOOL)isPassedTemplatePoints:(id)arg1 userPathPoints:(id)arg2 radius:(long long)arg3;
+ (id)convertGesturePointsFromStringToSet:(id)arg1;
+ (id)convertGesturePoints:(id)arg1 realWidth:(double)arg2 realHeight:(double)arg3 basicWidth:(double)arg4 basicHeight:(double)arg5;
@end
