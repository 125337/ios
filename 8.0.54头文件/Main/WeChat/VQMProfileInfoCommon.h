@interface VQMProfileInfoCommon : WXPBGeneratedMessage
+ (id)instanceFromMetricsInfo:(id)arg1;
+ (id)instanceFromMetricsInfoInTheBeginning;
+ (id)instanceFromMetricsInfoInTheCurrent;
+ (id)instanceFromAppStatusInTheCurrent;
+ (id)instanceFromAppStatusInTheBeginning;
+ (id)instanceFromEnvironmentInTheCurrent;
+ (id)instanceFromEnvironmentInTheBeginning;
+ (void)initialize;
- (int)infoBits;
- (unsigned long long)timestampUnixWithTimestampStready:(unsigned long long)arg1;
- (id)report28331Content;
- (id)instanceAfterCaculatingHardwareAverage;
@end

