@interface WCAlbumSightFullScreenProgressBar : WCPlayerConfigFullScreenProgressBarWithShrink
{
    BOOL _showLikeCommentCount; // +0x8
    double _collapsedRightInset; // +0x10
    UIView * _collapsedAlignmentView; // +0x18
}
+ (double)wc_bigFontMaxRatio;
- (double)dynamicFontSizeFor:(double)arg1;
- (double)expandShrinkIconWidth;
- (CGSize)expandShrinkButtonSize;
- (double)progressBackgroundCenterYForExpanded:(BOOL)arg1;
- (double)collapsedRightPadding;
- (BOOL)shouldFixContentLayoutDuringExpandAnimation;
- (id)progressBgBackgroundColor;
- (void)applyBlurToProgressBgView:(id)arg1;
- (double)collapsedRightInset;
- (void)setCollapsedRightInset:(double)arg1;
- (id)collapsedAlignmentView;
- (void)setCollapsedAlignmentView:(id)arg1;
- (BOOL)showLikeCommentCount;
- (void)setShowLikeCommentCount:(BOOL)arg1;
- (void).cxx_destruct;
@end
