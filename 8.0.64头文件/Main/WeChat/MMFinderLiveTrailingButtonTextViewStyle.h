@interface MMFinderLiveTrailingButtonTextViewStyle : NSObject
{
    UIFont * _textFont; // +0x8
    UIFont * _buttonFont; // +0x10
    UIColor * _textColor; // +0x18
    UIColor * _buttonColor; // +0x20
    NSString * _buttonTitle; // +0x28
    unsigned long long _lineLimit; // +0x30
}
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (id)buttonFont;
- (void)setButtonFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)buttonColor;
- (void)setButtonColor:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (unsigned long long)lineLimit;
- (void)setLineLimit:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
