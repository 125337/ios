@interface WCMpEditorReportServiceProxy : NSObject <IMpReportService>
+ (void)logFeatureExtIDkey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(BOOL)arg4;
+ (void)logFeatureExtIDkey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(BOOL)arg4 isIgnoreFreqCheck:(BOOL)arg5;
+ (void)logFeature:(unsigned int)arg1 isReportNow:(BOOL)arg2 isKeyLog:(BOOL)arg3;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4;
@end
