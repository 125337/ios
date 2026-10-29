@interface CBTAsstBoardThinkingCellView : CBTAsstBoardStreamTextCellView <CBTAsstBoardStreamTextViewModelUIDelegate, CBTStreamMDTextViewDelegate, CBTAsstBoardThinkingViewModelUIDelegate, PAGViewListener, CBTAsstBoardFoldableTitleBarButtonProtocol>
{
    BOOL _isAnimating; // +0x8
    BOOL _stopPagAfterCurrentLoop; // +0x9
    UIView * _titleBarView; // +0x10
    PAGView * _loadingPagView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _contentContainerView; // +0x30
    CBTStreamMDTextView * _contentTextView; // +0x38
}
- (double)titleBarHeight;
- (double)contentTopSpacing;
- (double)processArrowSideLength;
- (id)processArrowColor;
- (id)processArrowImage;
- (void)applyDebugHeatAreaBackgrounds;
- (double)contentContainerLeft;
- (double)contentContainerTop;
- (double)contentContainerWidth;
- (double)cellHeightWithContentHeight:(double)arg1 expanded:(BOOL)arg2;
- (void)setupCellWithViewModel:(id)arg1;
- (void)onAppear;
- (void)checkPendingThinkLinkShowReport;
- (void)prepareForReuse;
- (void)setupUI;
- (BOOL)disablesLongPressMenu;
- (BOOL)needsBubbleBackground;
- (void)layoutTitleBar;
- (void)layoutLoadingView;
- (void)layoutTitleLabel;
- (void)layoutArrowImageView;
- (void)updateArrowDirection;
- (void)animateArrowForExpanded:(BOOL)arg1 duration:(double)arg2;
- (void)refreshTheme;
- (void)layoutContentContainer;
- (void)layoutContentTextViewInContainer;
- (void)onAnimationRepeat:(id)arg1;
- (void)applyExpandedStateAnimatedWithArrow:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onLoadingViewTapped;
- (void)onArrowTapped;
- (void)updateContentContainerFrame;
- (void)onToggleExpanded;
- (void)onThinkingTitleUpdated;
- (void)onStopThinkingWithCompletion:(id /* block */)arg1;
- (id)hostTraceInfoForStreamMDTextView:(id)arg1;
- (id)reportCommonParamsForStreamMDTextView:(id)arg1;
- (void)onTextViewLongPress:(id)arg1 point:(CGPoint)arg2;
- (void)onTextViewHeightChange:(id)arg1 height:(double)arg2;
- (void)onTextViewWidthChange:(id)arg1 width:(double)arg2;
- (id)getCellReuseId;
- (id)footnoteDefInfoList;
- (void)traitCollectionDidChange:(id)arg1;
- (id)foldableTitleBarView;
- (double)foldableTitleBarHeight;
- (id)foldableTitleBarArrowView;
- (BOOL)foldableTitleBarButtonHidden;
- (void)onFoldableTitleBarButtonTapped;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)loadingPagView;
- (void)setLoadingPagView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)stopPagAfterCurrentLoop;
- (void)setStopPagAfterCurrentLoop:(BOOL)arg1;
- (void).cxx_destruct;
@end
