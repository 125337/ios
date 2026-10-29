@interface MMEasterEggGameActivity : NSObject <MMEasterEggActivity>
{
    NSString * _activityId; // +0x8
    id <MMEasterEggActivityDelegate> _delegate; // +0x10
    MMEasterEggGameActivityInfo * _activityInfo; // +0x18
}
- (id)initWithActivityInfo:(id)arg1;
- (void)showGameBag;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggEnd;
- (id)description;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (void).cxx_destruct;
@end

