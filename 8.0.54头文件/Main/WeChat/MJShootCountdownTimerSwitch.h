@interface MJShootCountdownTimerSwitch : MMUIView <MJShootBubbleSwitchDelegate>
{
    id <MJShootCountdownTimerSwitchDelegate> _delegate; // +0x8
    unsigned long long _selectedMode; // +0x10
    NSArray * _switchItems; // +0x18
    MJShootBubbleSwitch * _bubbleSwitch; // +0x20
}
- (id)initWithMode:(unsigned long long)arg1;
- (void)setupViews;
- (void)bubbleSwitch:(id)arg1 didSwitchToIndex:(long long)arg2;
- (id)bubbleSwitch;
- (id)switchItems;
- (long long)indexForMode:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)selectedMode;
- (void)setSelectedMode:(unsigned long long)arg1;
- (void)setSwitchItems:(id)arg1;
- (void)setBubbleSwitch:(id)arg1;
- (void).cxx_destruct;
@end

