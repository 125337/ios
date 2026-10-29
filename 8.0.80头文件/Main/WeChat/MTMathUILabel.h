@interface MTMathUILabel : UIView
{
    UILabel * _errorLabel; // +0x8
    BOOL _displayErrorInline; // +0x10
    unsigned int _labelMode; // +0x14
    unsigned int _textAlignment; // +0x18
    MTMathList * _mathList; // +0x20
    NSString * _latex; // +0x28
    NSError * _error; // +0x30
    MTFont * _font; // +0x38
    double _fontSize; // +0x40
    UIColor * _textColor; // +0x48
    MTMathListDisplay * _displayList; // +0x50
    UIEdgeInsets _contentInsets; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initCommon;
- (void)setFont:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)setMathList:(id)arg1;
- (void)setLatex:(id)arg1;
- (void)setLabelMode:(unsigned int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextAlignment:(unsigned int)arg1;
- (unsigned int)currentStyle;
- (void)drawRect:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (id)mathList;
- (id)latex;
- (id)error;
- (BOOL)displayErrorInline;
- (void)setDisplayErrorInline:(BOOL)arg1;
- (id)font;
- (double)fontSize;
- (id)textColor;
- (UIEdgeInsets)contentInsets;
- (unsigned int)labelMode;
- (unsigned int)textAlignment;
- (id)displayList;
- (void).cxx_destruct;
@end
