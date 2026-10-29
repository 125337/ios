@interface WCFinderMaskButton : MMUIButton
{
    UIView * _maskView; // +0x8
    id /* block */ _updateBlock; // +0x10
    MMBadgeView * _redDotView; // +0x18
}
- (void)setMaskViewBackgroundColor:(id)arg1;
- (void)makeMaskViewAdjustSuperviewLayerCorners;
- (void)setHighlighted:(BOOL)arg1;
- (void)_showRedDot;
- (void)_hideRedDot;
- (void)updateRedDotShowType:(unsigned long long)arg1;
- (id)maskView;
- (void)layoutSubviews;
- (void)layoutRedDot;
- (id)redDotView;
- (void)setMaskView:(id)arg1;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end

