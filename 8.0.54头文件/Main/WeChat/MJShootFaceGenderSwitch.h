@interface MJShootFaceGenderSwitch : MMUIView <MJShootBubbleSwitchDelegate>
{
    id <MJShootFaceGenderSwitchDelegate> _delegate; // +0x8
    long long _selectedFaceGender; // +0x10
    NSArray * _switchItems; // +0x18
    MJShootBubbleSwitch * _bubbleSwitch; // +0x20
}
- (id)initWithFaceGender:(long long)arg1;
- (void)setupViews;
- (void)bubbleSwitch:(id)arg1 didSwitchToIndex:(long long)arg2;
- (id)bubbleSwitch;
- (id)switchItems;
- (long long)indexForFaceGender:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selectedFaceGender;
- (void)setSelectedFaceGender:(long long)arg1;
- (void)setSwitchItems:(id)arg1;
- (void)setBubbleSwitch:(id)arg1;
- (void).cxx_destruct;
@end

