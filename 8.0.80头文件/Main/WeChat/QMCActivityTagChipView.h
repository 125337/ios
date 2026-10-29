@interface QMCActivityTagChipView : UIView
{
    NSLayoutConstraint * _textLeading; // +0x8
    NSLayoutConstraint * _textTrailing; // +0x10
    NSLayoutConstraint * _textTop; // +0x18
    NSLayoutConstraint * _textBottom; // +0x20
    UILabel * _textLabel; // +0x28
    double _configuredFontSize; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithItem:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (double)configuredFontSize;
- (void)setConfiguredFontSize:(double)arg1;
- (void).cxx_destruct;
@end
