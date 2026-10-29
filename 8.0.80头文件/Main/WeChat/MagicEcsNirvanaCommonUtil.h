@interface MagicEcsNirvanaCommonUtil : NSObject
+ (BOOL)isSupportFirstFrameCallback:(id)arg1;
+ (BOOL)isSupportCanvasStatusCallback:(id)arg1;
+ (BOOL)isSupportKeepAlive:(id)arg1;
+ (BOOL)isSupportSkwasm:(id)arg1;
+ (double)getAutoDestroyTime:(int)arg1;
+ (double)getFinalAutoDestroyTime:(id)arg1 autoDestroyTime:(int)arg2;
+ (BOOL)checkUdrFeatureSupported:(id)arg1 feature:(struct)arg2 logTag:(id)arg3;
@end
