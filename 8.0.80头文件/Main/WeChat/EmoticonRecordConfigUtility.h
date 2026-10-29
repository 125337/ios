@interface EmoticonRecordConfigUtility : NSObject
+ (id)getCameraPreset;
+ (CGSize)getCameraPresetSize;
+ (CGSize)getCameraVisibleSize;
+ (long long)getVideoFrameRate;
+ (long long)getAnimationFrameRate;
+ (CGSize)getPreviewVisibleSize;
+ (CGSize)getRecordVideoSize;
+ (double)getCameraTopOffset;
+ (double)getPreviewTopOffset;
+ (BOOL)isLowPerformanceDevice;
@end
