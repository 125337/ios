@interface WXGClickableLabel : UILabel
{
    NSMutableArray * _clickableRanges; // +0x8
    NSMutableAttributedString * _attrStr; // +0x10
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)commonInit;
- (void)addClickHandlerForRange:(_NSRange)arg1 withBlock:(id /* block */)arg2;
- (void)clearAllClickRange;
- (void)handleTap:(id)arg1;
- (long long)characterIndexAtPoint:(CGPoint)arg1;
- (void)handleClickAtCharacterIndex:(long long)arg1;
- (id)clickableRanges;
- (void)setClickableRanges:(id)arg1;
- (id)attrStr;
- (void)setAttrStr:(id)arg1;
- (void).cxx_destruct;
@end
