@interface CameraScanCombineUtil : MMObject
+ (id)pathOfCamCombineDir;
+ (BOOL)hasReportCalDisableForCrashed;
+ (void)setCalDisableForCrashedForCurVer;
+ (BOOL)isEnableScanCombineTab;
+ (unsigned long long)frameCountPerCombineGoodDetect;
+ (BOOL)enableFrameGenCVMemoryProtection;
+ (unsigned long long)imageDataInUploadFormatType;
+ (double)localDetectUploadImageExpandRatio;
+ (BOOL)isEnableRemoteDetect;
+ (BOOL)enableReportEngineFrameInfo;
+ (double)motionDetectThreshold;
+ (unsigned long long)barcodeFailBlockTime;
@end
