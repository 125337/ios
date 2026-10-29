@interface TSKOffsetDetector : NSObject
+ (TSKDetectParams_)defaultDetectParams;
+ (BOOL)detectOffsetBetweenPath:(id)arg1 andPath:(id)arg2 sampleRate:(int)arg3 channels:(int)arg4 params:(TSKDetectParams_ *)arg5 offsetMs:(int *)arg6;
@end

