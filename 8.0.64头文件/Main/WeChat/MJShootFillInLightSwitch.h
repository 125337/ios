@interface MJShootFillInLightSwitch : MMUIView <MJShootBubbleSwitchDelegate>
{
    id <MJShootFillInLightSwitchDelegate> _delegate; // +0x8
    unsigned long long _mode; // +0x10
    MJShootBubbleSwitch * _bubbleSwitch; // +0x18
    NSArray * _switchItems; // +0x20
}
- (id)initWithMode:(unsigned long long)arg1;
- (void)setupViews;
- (id)bubbleSwitch;
- (id)switchItems;
- (void)bubbleSwitch:(id)arg1 didSwitchToIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void)setBubbleSwitch:(id)arg1;
- (void)setSwitchItems:(id)arg1;
- (void).cxx_destruct;
@end
