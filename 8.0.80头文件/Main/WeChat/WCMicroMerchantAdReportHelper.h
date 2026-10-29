@interface WCMicroMerchantAdReportHelper : NSObject <PBMessageObserverDelegate>
- (void)reportClick:(id)arg1 clickPos:(long long)arg2;
- (void)reportOriginExposure:(id)arg1;
- (void)reportEffectiveExposure:(id)arg1;
- (void)reportFeedbackWithReasonList:(id)arg1 adInfo:(id)arg2;
- (id)createBaseBodyWrap:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)commonReportAdChannel:(id)arg1 actType:(int)arg2 actValue:(long long)arg3 actCount:(int)arg4;
@end
