@interface WALogStatProxy : NSObject <IWALogStatService>
+ (void)logFeature:(unsigned int)arg1 isReportNow:(BOOL)arg2 isKeyLog:(BOOL)arg3;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4;
+ (void)addLocationMgrUse:(unsigned long long)arg1 isLocation:(BOOL)arg2;
+ (void)delLocationMgrUse:(unsigned long long)arg1;
+ (void)clickStreamViewDidAppear:(id)arg1;
+ (void)clickStreamViewDidDisappear:(id)arg1;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4 ignoreFreqCheck:(BOOL)arg5;
@end
