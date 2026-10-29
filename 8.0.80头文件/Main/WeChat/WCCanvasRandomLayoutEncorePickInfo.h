@interface WCCanvasRandomLayoutEncorePickInfo : MMObject <NSCoding>
{
    NSString * _titleIconUrl; // +0x8
    NSString * _titlePrefix; // +0x10
    NSString * _titleSuffix; // +0x18
    NSString * _buttonIconUrl; // +0x20
    NSString * _buttonTitle; // +0x28
    NSString * _buttonTitleColor; // +0x30
    NSString * _buttonBgColor; // +0x38
    double _buttonCornerRadius; // +0x40
    NSString * _doneTitle; // +0x48
    NSString * _doneButtonTitle; // +0x50
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)titleIconUrl;
- (void)setTitleIconUrl:(id)arg1;
- (id)titlePrefix;
- (void)setTitlePrefix:(id)arg1;
- (id)titleSuffix;
- (void)setTitleSuffix:(id)arg1;
- (id)buttonIconUrl;
- (void)setButtonIconUrl:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)buttonTitleColor;
- (void)setButtonTitleColor:(id)arg1;
- (id)buttonBgColor;
- (void)setButtonBgColor:(id)arg1;
- (double)buttonCornerRadius;
- (void)setButtonCornerRadius:(double)arg1;
- (id)doneTitle;
- (void)setDoneTitle:(id)arg1;
- (id)doneButtonTitle;
- (void)setDoneButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end
