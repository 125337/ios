@interface WCFinderThanksButtonConfig : NSObject
{
    int _iconType; // +0x8
    UIFont * _buttonFont; // +0x10
    double _buttonHeight; // +0x18
    UIColor * _backgroundColor; // +0x20
    UIColor * _titleLabelColor; // +0x28
    UIColor * _thankedTitleLabelColor; // +0x30
    NSString * _defaultTitleStr; // +0x38
    NSString * _hadThankString; // +0x40
    UIImage * _defaultThankImg; // +0x48
    CGSize _iconSize; // +0x50
    UIEdgeInsets _buttonContentInsets; // +0x60
}
- (id)titleLabelColor;
- (id)thankedTitleLabelColor;
- (id)defaultTitleStr;
- (id)defaultThankImg;
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
- (void)setTitleLabelColor:(id)arg1;
- (void)setThankedTitleLabelColor:(id)arg1;
- (void)setDefaultTitleStr:(id)arg1;
- (id)hadThankString;
- (void)setHadThankString:(id)arg1;
- (void)setDefaultThankImg:(id)arg1;
- (int)iconType;
- (void)setIconType:(int)arg1;
- (void).cxx_destruct;
@end
