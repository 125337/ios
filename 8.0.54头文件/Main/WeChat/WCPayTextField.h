@interface WCPayTextField : UITextField
{
    BOOL _clearBackground; // +0x8
    unsigned int _showBit; // +0xc
    double _tipsOffsetY; // +0x10
    double _tipsOffsetX; // +0x18
    UIView * _largeAmountTips; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)textFieldDidChange;
- (void)showBitView;
- (CGRect)caretRectForPosition:(id)arg1;
- (unsigned long long)getAmount;
- (unsigned int)showBit;
- (void)setShowBit:(unsigned int)arg1;
- (double)tipsOffsetY;
- (void)setTipsOffsetY:(double)arg1;
- (double)tipsOffsetX;
- (void)setTipsOffsetX:(double)arg1;
- (BOOL)clearBackground;
- (void)setClearBackground:(BOOL)arg1;
- (id)largeAmountTips;
- (void)setLargeAmountTips:(id)arg1;
- (void).cxx_destruct;
@end

