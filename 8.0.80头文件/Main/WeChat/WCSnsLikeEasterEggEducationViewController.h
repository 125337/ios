@interface WCSnsLikeEasterEggEducationViewController : MMPageSheetBaseViewController
{
    BOOL _hasNotifiedDismiss; // +0x70
    id /* block */ _onDismissCompletion; // +0x78
    UIView * _topBarView; // +0x80
    UILabel * _titleLabel; // +0x88
    UIView * _guideView; // +0x90
    UIView * _gradientBorderView; // +0x98
    PAGView * _previewPAGView; // +0xa0
    UILabel * _confirmLabel; // +0xa8
    double _lastLayoutWidth; // +0xb0
    CGSize _lastContainerSize; // +0xb8
}
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_setupPageSheetConfig;
- (void)_setupUI;
- (void)_layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (CGSize)_pageSheetContainerSize;
- (void)_updateLayoutForContainerSizeIfNeeded;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (void)handleConfirmLabelTap;
- (void)_notifyDismissIfNeeded;
- (id)topBarView;
- (id)titleLabel;
- (id)guideView;
- (id)gradientBorderView;
- (id)previewPAGView;
- (id)confirmLabel;
- (id /* block */)onDismissCompletion;
- (void)setOnDismissCompletion:(id /* block */)arg1;
- (void)setTopBarView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setGuideView:(id)arg1;
- (void)setGradientBorderView:(id)arg1;
- (void)setPreviewPAGView:(id)arg1;
- (void)setConfirmLabel:(id)arg1;
- (BOOL)hasNotifiedDismiss;
- (void)setHasNotifiedDismiss:(BOOL)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (CGSize)lastContainerSize;
- (void)setLastContainerSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
