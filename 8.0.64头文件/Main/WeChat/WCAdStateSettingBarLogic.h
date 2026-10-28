@interface WCAdStateSettingBarLogic : WCAdvertiseOperationLogicBase
{
    BOOL _timerStarted; // +0x8
    unsigned long long _barStyle; // +0x10
    NSString * _tid; // +0x18
    WCAdStateSettingBarInfo * _barInfo; // +0x20
}
+ (id)getStateSettingBarLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)startTimerIfNeed;
- (void)updateStateSettingBarStyleWithAnimation;
- (void)dealloc;
- (unsigned long long)barStyle;
- (void)setBarStyle:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)barInfo;
- (void)setBarInfo:(id)arg1;
- (BOOL)timerStarted;
- (void)setTimerStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
