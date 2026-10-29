@interface QMCBaseMapView : QMapView
{
    CGRect _safeAreaRect; // +0x8
}
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applyMapAppearanceForTraitCollection:(id)arg1;
- (void)moveCamera:(id)arg1;
- (void)moveCameraWithBounds:(id)arg1;
- (UIEdgeInsets)safeAreaPadding;
- (UIEdgeInsets)getAdjustedEdgePadding:(UIEdgeInsets)arg1;
- (UIEdgeInsets)normalizeEdgePadding:(UIEdgeInsets)arg1;
- (void)normalizeCameraPoseForBoundsFit;
- (UIEdgeInsets)getLightEdgePadding:(UIEdgeInsets)arg1;
- (UIEdgeInsets)getSafeOnlyEdgePadding:(UIEdgeInsets)arg1;
- (id)getEdgePaddingCandidates:(UIEdgeInsets)arg1;
- (id)buildDirectionalPaddingsFromBounds:(struct)arg1 candidates:(id)arg2 withBasePadding:(UIEdgeInsets)arg3;
- (CGRect)safeAreaRect;
- (void)setSafeAreaRect:(CGRect)arg1;
@end
