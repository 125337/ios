@interface VOIPStatHelper : NSObject
+ (id)GenNewDialLog:(void *)arg1 androidReport:(AndroidReport_t *)arg2;
+ (id)GenAVQualityLog:(tagAVQualityReportInfo *)arg1 extAVReport:(NewAVExtReport_t *)arg2 androidReport:(AndroidReport_t *)arg3;
+ (id)GetChannelTcpLog:(RelayTcpReport *)arg1 tcpSwitchCnt:(unsigned int)arg2 withDialReport:(void *)arg3 withRelayReportV2:(NewRelayReport *)arg4 withDirectReportV2:(NewDirectReport *)arg5;
+ (id)GetChannelLog:(NewDirectReport *)arg1 withRelayReportV2:(NewRelayReport *)arg2 withDialReport:(void *)arg3;
+ (id)GenAVQualityExtLog:(tagAVQualityReportInfo *)arg1 extAVReport:(NewAVExtReport_t *)arg2;
+ (id)Gen12805Log:(id)arg1 extAVReport:(NewAVExtReport_t *)arg2;
+ (id)Gen11123Log:(id)arg1 extAVReport:(NewAVExtReport_t *)arg2;
+ (void)reportDoubleLinkToast:(long long)arg1 scene:(long long)arg2 expose:(BOOL)arg3 click:(BOOL)arg4;
@end

