@interface MMEasterEggRedEnvelopeCoverActivity : NSObject <MMEasterEggActivity>
{
    NSString * _activityId; // +0x8
    id <MMEasterEggActivityDelegate> _delegate; // +0x10
    MMEasterEggRedEnvelopeCoverActivityInfo * _activityInfo; // +0x18
    WCCgiBlockHelper * _cgiBlockHelper; // +0x20
    NSString * _URLString; // +0x28
}
- (id)initWithActivityInfo:(id)arg1;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggEnd;
- (void)showRedEnvelopeCoverBag;
- (BOOL)shouldTriggerRequest;
- (double)triggerProbability;
- (id)description;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (id)cgiBlockHelper;
- (void)setCgiBlockHelper:(id)arg1;
- (id)URLString;
- (void)setURLString:(id)arg1;
- (void).cxx_destruct;
@end
