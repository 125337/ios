@interface MAVMtlUtil : NSObject
+ (__CVBuffer *)getTextureFromPixelBuffer:(__CVBuffer *)arg1 Context:(id)arg2;
+ (struct)getMatrixCenterInsideFromRatio:(float)arg1 ToRatio:(float)arg2;
+ (struct)getMatrixCenterCropFromRatio:(float)arg1 ToRatio:(float)arg2;
@end
