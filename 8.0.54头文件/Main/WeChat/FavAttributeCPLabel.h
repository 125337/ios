@interface FavAttributeCPLabel : MMCPLabel
{
    UIFont * m_font; // +0x8
    UIColor * m_textColor; // +0x10
    double _lineSpace; // +0x18
    UIColor * _highlightColor; // +0x20
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setLineSpace:(double)arg1;
- (void)formAttributedString;
- (void)internalSetText;
- (void)internalSetLineSpace;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (double)lineSpace;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (void).cxx_destruct;
@end

