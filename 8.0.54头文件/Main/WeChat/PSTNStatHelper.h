@interface PSTNStatHelper : NSObject
+ (id)GenPSTNClientLog:(CommonReport_t *)arg1 clientRepo:(ClientReport_t *)arg2 androidReport:(PstnAndroidReport_t *)arg3;
+ (id)GenPSTNChannelLog:(CommonReport_t *)arg1 newRelayRepo:(NewRelayReport *)arg2;
+ (id)GenPSTNEngineLog:(CommonReport_t *)arg1 avQualityLog:(tagAVQualityReportInfo *)arg2;
@end

