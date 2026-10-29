@interface WCFinderMaskButton : MMUIButton
{
    BOOL _shouldShowRedDot; // +0x8
    UIView * _maskBGView; // +0x10
    id /* block */ _updateBlock; // +0x18
    MMBadgeView * _redDotView; // +0x20
}
- (void)setMaskViewBackgroundColor:(id)arg1;
- (void)makeMaskViewAdjustSuperviewLayerCorners;
- (void)setHighlighted:(BOOL)arg1;
- (void)_showRedDot;
- (void)_hideRedDot;
- (void)updateRedDotShowType:(unsigned long long)arg1;
- (id)maskBGView;
- (void)layoutSubviews;
- (void)layoutRedDot;
- (id)redDotView;
- (BOOL)shouldShowRedDot;
- (void)setShouldShowRedDot:(BOOL)arg1;
- (void)setMaskBGView:(id)arg1;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end
