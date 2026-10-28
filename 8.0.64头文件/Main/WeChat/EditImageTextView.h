@interface EditImageTextView : MMTextView
{
    unsigned long long _textStyle; // +0x38
    UIColor * _mainColor; // +0x40
    double _scale; // +0x48
    double _cornerRadius; // +0x50
    EditImageTextBgView * _textBgView; // +0x58
    WCEditVideoColorConfig * _colorConfig; // +0x60
    UIEdgeInsets _minimumContentInsets; // +0x68
}
- (void)layoutSubviews;
- (void)recenter;
- (void)setupEmotionColorConfig;
- (id)initWithFrame:(CGRect)arg1;
- (void)setScale:(double)arg1;
- (void)setMainColor:(id)arg1;
- (void)setMinimumContentInsets:(UIEdgeInsets)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)drawRect:(CGRect)arg1;
- (void)setTextStyle:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (double)highlightAlpha;
- (void)setHighlightAlpha:(double)arg1;
- (void)textChanged:(id)arg1;
- (void)updateBackgroundRects;
- (unsigned long long)textStyle;
- (id)mainColor;
- (double)scale;
- (double)cornerRadius;
- (UIEdgeInsets)minimumContentInsets;
- (id)textBgView;
- (void)setTextBgView:(id)arg1;
- (id)colorConfig;
- (void)setColorConfig:(id)arg1;
- (void).cxx_destruct;
@end
