@interface MMEasterEggNativeWeAppActivity : NSObject <MMEasterEggActivity>
{
    unsigned int _probability; // +0x8
    NSString * _activityId; // +0x10
    id <MMEasterEggActivityDelegate> _delegate; // +0x18
    MMEasterEggNativeWeAppActivityInfo * _activityInfo; // +0x20
    WCCgiBlockHelper * _cgiBlockHelper; // +0x28
    NSDictionary * _prizeDict; // +0x30
}
- (id)initWithActivityInfo:(id)arg1;
- (void)showNewYearBag;
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
- (id)cgiBlockHelper;
- (void)setCgiBlockHelper:(id)arg1;
- (id)prizeDict;
- (void)setPrizeDict:(id)arg1;
- (unsigned int)probability;
- (void)setProbability:(unsigned int)arg1;
- (void).cxx_destruct;
@end
