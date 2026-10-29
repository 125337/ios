@interface FavAttributeCPLabel : MMCPLabel
{
    UIFont * m_font; // +0x8
    UIColor * m_textColor; // +0x10
    BOOL _showWemoji; // +0x18
    double _lineSpace; // +0x20
    UIColor * _highlightColor; // +0x28
    long long _wemojiSequence; // +0x30
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
- (BOOL)showWemoji;
- (void)setShowWemoji:(BOOL)arg1;
- (long long)wemojiSequence;
- (void)setWemojiSequence:(long long)arg1;
- (void).cxx_destruct;
@end
