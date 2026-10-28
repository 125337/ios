@interface MMEasterEggNewYearActivity : NSObject <MMEasterEggNewYearActivityViewControllerDelegate, MMEasterEggActivity>
{
    NSString * _activityId; // +0x8
    id <MMEasterEggActivityDelegate> _delegate; // +0x10
    MMEasterEggNewYearActivityInfo * _activityInfo; // +0x18
    NSString * _keyword; // +0x20
    NSString * _traceId; // +0x28
    WCCgiBlockHelper * _prepareCgiBlockHelper; // +0x30
}
- (id)initWithActivityInfo:(id)arg1;
- (void)showLuckyBag;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggEnd;
- (double)materialCgiTotalTimeout;
- (id)description;
- (id)getTraceId;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)prepareCgiBlockHelper;
- (void)setPrepareCgiBlockHelper:(id)arg1;
- (void).cxx_destruct;
@end
