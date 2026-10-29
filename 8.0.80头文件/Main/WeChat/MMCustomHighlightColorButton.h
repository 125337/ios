@interface MMCustomHighlightColorButton : UIButton
{
    UIView * _curMaskView; // +0x8
}
- (void)setHighlightMaskViewColor:(id)arg1 cornerRadius:(double)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)curMaskView;
- (void)setCurMaskView:(id)arg1;
- (void).cxx_destruct;
@end
