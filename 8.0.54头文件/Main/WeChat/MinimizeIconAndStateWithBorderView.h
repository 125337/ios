@interface MinimizeIconAndStateWithBorderView : MinimizeIconAndStateView
{
    BOOL _isRoundMaskPathAfterAnimation; // +0x18
    NSMutableArray * _lineLayerList; // +0x20
}
- (void)removeLineCircleOnIcon;
- (void)addLineCircleLayerOnIcon:(id)arg1 LinePath:(id)arg2;
- (void)resetLineCircleOnIcon;
- (void)resetIconViewSublayer:(double)arg1;
- (void)updateAllSublayerAnimated:(double)arg1 ViewPath:(id)arg2 Duration:(double)arg3;
- (BOOL)isRoundMaskPathAfterAnimation;
- (void)setIsRoundMaskPathAfterAnimation:(BOOL)arg1;
- (id)lineLayerList;
- (void)setLineLayerList:(id)arg1;
- (void).cxx_destruct;
@end

