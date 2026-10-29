@interface BrandFansGreetBoxReporter : NSObject
+ (long long)_serviceTypeFromBizType:(int)arg1;
+ (void)_reportExposeClick:(unsigned int)arg1 sessionId:(id)arg2 authorBizuin:(id)arg3 serviceType:(long long)arg4;
+ (void)reportExposureWithSessionId:(id)arg1 authorBizuin:(id)arg2 serviceType:(long long)arg3;
+ (void)reportClickWithSessionId:(id)arg1 authorBizuin:(id)arg2 serviceType:(long long)arg3;
+ (void)reportOutBoxWithSession:(id)arg1 triggerMessage:(id)arg2;
@end
