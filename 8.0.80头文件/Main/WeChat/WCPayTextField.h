@interface WCPayTextField : UITextField
{
    BOOL _clearBackground; // +0x8
    BOOL _hasFocus; // +0x9
    unsigned int _showBit; // +0xc
    double _tipsOffsetY; // +0x10
    double _tipsOffsetX; // +0x18
    unsigned long long _scene; // +0x20
    UIView * _largeAmountTips; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)textFieldDidChange;
- (void)showBitView;
- (CGRect)caretRectForPosition:(id)arg1;
- (unsigned long long)getAmount;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (unsigned int)showBit;
- (void)setShowBit:(unsigned int)arg1;
- (double)tipsOffsetY;
- (void)setTipsOffsetY:(double)arg1;
- (double)tipsOffsetX;
- (void)setTipsOffsetX:(double)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)clearBackground;
- (void)setClearBackground:(BOOL)arg1;
- (id)largeAmountTips;
- (void)setLargeAmountTips:(id)arg1;
- (BOOL)hasFocus;
- (void)setHasFocus:(BOOL)arg1;
- (void).cxx_destruct;
@end
