@interface BizAppImageContentMessageCellView : AppStandardImageContentMessageCellView <MPHeroTransitionSource>
{
    BizAppMessageCellBaseHandler * _baseHandler; // +0xb8
    BizAppImageContentMessageCellCoverView * _coverView; // +0xc0
}
- (void)layoutContentView;
- (BOOL)canBeReused;
- (void)onTouchUpInside;
- (BOOL)autoHighlight;
- (void)onTouchDown;
- (void)onDelayedTouchUpInside;
- (id)imageViewInSize:(CGSize)arg1;
- (id)operationMenuItems;
- (void)onShowOperationMenu;
- (void)onYuanBaoSummary:(id)arg1;
- (void)onXiaoWeiSummary:(id)arg1;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)arg1;
- (id)baseHandler;
- (id)coverView;
- (id)heroSourceView;
- (double)heroSourceCornerRadius;
- (CGRect)heroCoverFrameInSourceView;
- (double)heroCoverCornerRadius;
- (void)setBaseHandler:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void).cxx_destruct;
@end
