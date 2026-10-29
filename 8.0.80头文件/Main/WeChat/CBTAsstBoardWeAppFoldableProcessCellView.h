@interface CBTAsstBoardWeAppFoldableProcessCellView : CBTAsstBoardBaseCellView <CBTAsstBoardWeAppFoldableProcessViewModelUIDelegate, ILinkEventExt, WAAppTaskMgrExt, PAGViewListener, CBTAsstBoardFoldableTitleBarButtonProtocol>
{
    BOOL _stopPagAfterCurrentLoop; // +0x8
    LinkWeAppJumpWrap * _waitingLaunchWeAppWrap; // +0x10
    UIView * _titleBarView; // +0x18
    MMUIActivityIndicatorView * _loadingView; // +0x20
    UIView * _loadingSquareView; // +0x28
    UIImageView * _statusIconView; // +0x30
    PAGView * _loadingPagView; // +0x38
    UILabel * _titleLabel; // +0x40
    UIImageView * _arrowImageView; // +0x48
    UIView * _processListContainerView; // +0x50
    NSMutableArray * _processItemViews; // +0x58
    UILabel * _subTitleLabel; // +0x60
    UIView * _callUserContainerView; // +0x68
    RichTextView * _callUserTextView; // +0x70
    UIButton * _callUserButton; // +0x78
}
- (double)titleBarHeight;
- (double)processListTopSpacing;
- (double)effectiveMainContainerWidth;
- (double)processArrowSideLength;
- (id)processArrowColor;
- (id)processArrowImage;
- (void)applyDebugHeatAreaBackgrounds;
- (BOOL)disablesLongPressMenu;
- (void)setupCellWithViewModel:(id)arg1;
- (void)dealloc;
- (void)setupUI;
- (void)restoreProcessItemsFromViewModel;
- (void)restoreCallUserFromViewModel;
- (void)prepareForReuse;
- (void)layoutTitleBar;
- (void)layoutLoadingView;
- (void)onAnimationRepeat:(id)arg1;
- (void)layoutTitleLabel;
- (void)layoutArrowImageView;
- (void)layoutProcessListContainer;
- (void)addProcessItemWithContent:(id)arg1;
- (void)addSubTitleItemWithContent:(id)arg1;
- (void)updateProcessListContainerHeight;
- (void)clearProcessItems;
- (void)layoutCallUserContainer;
- (void)updateCallUserContainerFrame;
- (void)showCallUserWithDisplayData:(id)arg1;
- (void)clearCallUserItems;
- (void)onCallUserButtonClicked:(id)arg1;
- (void)updateSubTitleLabel:(id)arg1;
- (void)setupSubTitleLabel:(id)arg1;
- (void)clearSubTitleLabel;
- (void)clearSubTitleLabelWithAnimationWithTitle:(id)arg1;
- (void)onAddProcessItemWithContent:(id)arg1;
- (void)onAddSubTitleItemWithContent:(id)arg1;
- (void)onShowCallUserWithDisplayData:(id)arg1;
- (void)onClearCallUserView;
- (void)onStopProcessWithCompletion:(id /* block */)arg1;
- (void)onClearProcessView;
- (void)onUpdateSubTitle:(id)arg1;
- (void)onClearSubTitleWithTitle:(id)arg1;
- (void)onExpandIfNeed;
- (void)onFoldIfNeed;
- (void)onUpdateTitle:(id)arg1;
- (void)onRefreshProcessView;
- (id)sceneNoteForOpenWeApp;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (void)onLoadingViewTapped;
- (void)updateArrowDirection;
- (void)animateArrowForExpanded:(BOOL)arg1 duration:(double)arg2;
- (void)onArrowTapped;
- (void)refreshTheme;
- (id)foldableTitleBarView;
- (double)foldableTitleBarHeight;
- (id)foldableTitleBarArrowView;
- (BOOL)foldableTitleBarButtonHidden;
- (double)foldableTitleBarButtonTrailingMargin;
- (void)onFoldableTitleBarButtonTapped;
- (id)waitingLaunchWeAppWrap;
- (void)setWaitingLaunchWeAppWrap:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingSquareView;
- (void)setLoadingSquareView:(id)arg1;
- (id)statusIconView;
- (void)setStatusIconView:(id)arg1;
- (id)loadingPagView;
- (void)setLoadingPagView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)processListContainerView;
- (void)setProcessListContainerView:(id)arg1;
- (id)processItemViews;
- (void)setProcessItemViews:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)callUserContainerView;
- (void)setCallUserContainerView:(id)arg1;
- (id)callUserTextView;
- (void)setCallUserTextView:(id)arg1;
- (id)callUserButton;
- (void)setCallUserButton:(id)arg1;
- (BOOL)stopPagAfterCurrentLoop;
- (void)setStopPagAfterCurrentLoop:(BOOL)arg1;
- (void).cxx_destruct;
@end
