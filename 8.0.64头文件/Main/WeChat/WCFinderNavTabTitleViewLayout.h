@interface WCFinderNavTabTitleViewLayout : NSObject
{
    NSArray * _defines; // +0x8
    long long _selectedIdx; // +0x10
    double _expectPadding; // +0x18
    double _navTabPaddingButton; // +0x20
}
- (id)init;
- (id)defines;
- (void)setDefines:(id)arg1;
- (long long)selectedIdx;
- (void)setSelectedIdx:(long long)arg1;
- (double)expectPadding;
- (void)setExpectPadding:(double)arg1;
- (double)navTabPaddingButton;
- (void)setNavTabPaddingButton:(double)arg1;
- (void).cxx_destruct;
@end
