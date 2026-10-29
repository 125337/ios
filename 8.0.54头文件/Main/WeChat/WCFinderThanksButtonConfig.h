@interface WCFinderThanksButtonConfig : NSObject
{
    int _iconType; // +0x8
    UIFont * _buttonFont; // +0x10
    double _buttonHeight; // +0x18
    UIColor * _backgroundColor; // +0x20
    CGSize _iconSize; // +0x28
    UIEdgeInsets _buttonContentInsets; // +0x38
}
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)buttonFont;
- (void)setButtonFont:(id)arg1;
- (UIEdgeInsets)buttonContentInsets;
- (void)setButtonContentInsets:(UIEdgeInsets)arg1;
- (double)buttonHeight;
- (void)setButtonHeight:(double)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (int)iconType;
- (void)setIconType:(int)arg1;
- (void).cxx_destruct;
@end

