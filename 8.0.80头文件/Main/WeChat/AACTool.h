@interface AACTool : NSObject
+ (BOOL)isSupport3DTouch;
+ (BOOL)supportsHaptics;
+ (BOOL)applicationIsActive;
+ (BOOL)isJsonString:(id)arg1;
+ (BOOL)judgeFileExist:(id)arg1 type:(id)arg2;
+ (id)convertToJsonData:(id)arg1;
+ (id)HeModel2AHAP:(id)arg1;
+ (id)He2Model2AHAP:(id)arg1;
+ (id)HeDicAry2SystemVibrationAry:(id)arg1 measureRatio:(float)arg2;
+ (void)baseHeModelToAHAPPattern:(id)arg1 :(long long)arg2 :(id)arg3;
+ (id)parameterConversion2AHAP:(int)arg1 :(int)arg2;
+ (id)AHAPModelToDic:(id)arg1 error:(id)arg2;
+ (BOOL)containTransientAndContinuous:(id)arg1;
+ (id)splitArray:(id)arg1 withSubSize:(int)arg2;
+ (double)getHE2ModelDuration:(id)arg1;
+ (double)getAHAPModelDuration:(id)arg1;
+ (double)getDuration:(long long)arg1;
+ (id)replyDataAndTime;
+ (id)resumeSystemVibrationAtTime:(int)arg1 model:(id)arg2;
+ (id)resumeAtTime:(int)arg1 model:(id)arg2;
+ (id)hapticQueue;
@end
