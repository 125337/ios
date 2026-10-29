@interface CBTAsstBoardBaseCellView : UITableViewCell <UIGestureRecognizerDelegate>
{
    BOOL _isHostedByPlatformView; // +0x8
    BOOL _needsStripInterCellInsetInPlatformView; // +0x9
    BOOL _isSelectMode; // +0xa
    BOOL _isEmbeddedInMarkdown; // +0xb
    BOOL _shouldUseZeroInset; // +0xc
    BOOL _disablesMultiSelect; // +0xd
    BOOL _onlyShowDeleteMenuItem; // +0xe
    BOOL _longPressMenuShown; // +0xf
    BOOL _amoebaAllowGlobalClickHook; // +0x10
    CBTAsstBoardBaseViewModel * _viewModel; // +0x18
    id <CBTAsstBoardBaseCellViewDelegate> _delegate; // +0x20
    UIView * _mainContainerView; // +0x28
    UIView * _bubbleBackgroundView; // +0x30
    CBTAsstReferView * _bubbleReferView; // +0x38
    long long _trackedMaxExpPct; // +0x40
    unsigned long long _amoebaExposeStartTimeMs; // +0x48
    UIView * _messageNavigationOverlayView; // +0x50
    UIButton * _selectCheckboxBtn; // +0x58
    NSTimer * _longPressTimer; // +0x60
    CBTAsstBoardBaseViewModel * _amoebaVM; // +0x68
    unsigned long long _amoebaBoundAnswerId; // +0x70
    CGPoint _longPressTouchPoint; // +0x78
}
+ (void)adjustLongPressMenuWindowLevelForTargetView:(id)arg1;
+ (id)nearestBoardCellForView:(id)arg1;
+ (BOOL)shouldTrackGlobalBubbleClickForCell:(id)arg1;
+ (id)amoebaTrackableBubbleCellForView:(id)arg1;
+ (void)enableAnswerBubbleClickTracking;
- (id)cbt_foldableTitleBarButton;
- (void)cbt_layoutFoldableTitleBarButton;
- (void)cbt_updateFoldableTitleBarButtonTitle:(id)arg1 hidden:(BOOL)arg2;
- (void)cbt_resetFoldableTitleBarButton;
- (void)_cbt_onFoldableTitleBarButtonTapped;
- (BOOL)cbt_stopButtonDelayExpired;
- (void)cbt_startStopButtonDelayTimer;
- (void)cbt_cancelStopButtonDelayTimer;
- (BOOL)needsBubbleBackground;
- (void)updateBubbleFrame:(CGRect)arg1;
- (void)layoutBubbleReferViewAboveBubble;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)_onMenuDidHide:(id)arg1;
- (void)_highlightBubbleColor;
- (void)_restoreBubbleColor;
- (void)_removeMessageNavigationHighlight;
- (void)showMessageNavigationHighlight;
- (void)setupBubbleReferViewIfNeeded;
- (void)_onBubbleReferViewTapped:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (UIEdgeInsets)mainContainerInset;
- (void)_disableContentViewFrameAnimationsIfNeeded;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupLongPressGesture;
- (void)prepareForReuse;
- (void)setupUI;
- (CGRect)getBubbleFrame;
- (void)refreshTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateIsSelectMode:(BOOL)arg1;
- (void)_syncSelectModeAnimated:(BOOL)arg1;
- (void)_ensureCheckboxCreated;
- (void)refreshSelectAppearance;
- (void)_updateCheckboxAppearanceSelected:(BOOL)arg1;
- (BOOL)needsLeftShiftForSelectMode;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowCenterYInBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (double)checkboxCenterYInCell;
- (void)relayoutCheckboxPosition;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_cancelLongPressTimer;
- (void)_dismissMenuIfVisible;
- (void)_longPressTimerFired;
- (void)selectAllForLongPressMenu;
- (void)handleLongPress:(id)arg1;
- (id)menuAnchorView;
- (BOOL)disablesLongPressMenu;
- (BOOL)consumeTapIfLongPressJustShown;
- (id)customContentGestureDelegate;
- (void)cbt_attachContentGesture:(id)arg1 toView:(id)arg2;
- (void)cancelLongPressTimerAndDismissMenu;
- (id)gesturesThatBlockTableViewScroll;
- (BOOL)swallowsAllTableViewGestures;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)copyableText;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)extraLongPressMenuItems;
- (BOOL)shouldShowDebugLogMenuItem;
- (id)buildDefaultLongPressMenuItems;
- (id)buildFlowingMenuItems;
- (id)buildLongPressMenuRows;
- (id)buildLongPressMenuItems;
- (void)showLongPressMenu;
- (void)mmCopyAction:(id)arg1;
- (void)mmForwardAction:(id)arg1;
- (void)mmReferAction:(id)arg1;
- (BOOL)cbtCanReferCurrentMessage;
- (void)mmMultiSelectAction:(id)arg1;
- (void)mmDeleteAction:(id)arg1;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)mmDebugLogAction:(id)arg1;
- (void)_reportLongPressMenuWithClkBtnType:(long long)arg1;
- (void)mmFeedbackAction:(id)arg1;
- (void)onAppear;
- (void)onDisappear;
- (void)updateMaxExpPct:(long long)arg1;
- (long long)currentVisiblePct;
- (void)seedInitialMaxExpPctIfNeeded;
- (void)setupBelowModuleReportingWithViewModel:(id)arg1;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (id)reportIfUnvalidForViewExp;
- (void)reportAmoebaViewClick;
- (void)didMoveToWindow;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mainContainerView;
- (void)setMainContainerView:(id)arg1;
- (BOOL)isHostedByPlatformView;
- (void)setIsHostedByPlatformView:(BOOL)arg1;
- (id)bubbleBackgroundView;
- (void)setBubbleBackgroundView:(id)arg1;
- (id)bubbleReferView;
- (void)setBubbleReferView:(id)arg1;
- (BOOL)needsStripInterCellInsetInPlatformView;
- (void)setNeedsStripInterCellInsetInPlatformView:(BOOL)arg1;
- (BOOL)isSelectMode;
- (void)setIsSelectMode:(BOOL)arg1;
- (BOOL)isEmbeddedInMarkdown;
- (void)setIsEmbeddedInMarkdown:(BOOL)arg1;
- (BOOL)shouldUseZeroInset;
- (void)setShouldUseZeroInset:(BOOL)arg1;
- (BOOL)disablesMultiSelect;
- (BOOL)onlyShowDeleteMenuItem;
- (void)setOnlyShowDeleteMenuItem:(BOOL)arg1;
- (BOOL)longPressMenuShown;
- (void)setLongPressMenuShown:(BOOL)arg1;
- (long long)trackedMaxExpPct;
- (void)setTrackedMaxExpPct:(long long)arg1;
- (unsigned long long)amoebaExposeStartTimeMs;
- (void)setAmoebaExposeStartTimeMs:(unsigned long long)arg1;
- (id)messageNavigationOverlayView;
- (void)setMessageNavigationOverlayView:(id)arg1;
- (id)selectCheckboxBtn;
- (void)setSelectCheckboxBtn:(id)arg1;
- (id)longPressTimer;
- (void)setLongPressTimer:(id)arg1;
- (CGPoint)longPressTouchPoint;
- (void)setLongPressTouchPoint:(CGPoint)arg1;
- (id)amoebaVM;
- (void)setAmoebaVM:(id)arg1;
- (unsigned long long)amoebaBoundAnswerId;
- (void)setAmoebaBoundAnswerId:(unsigned long long)arg1;
- (BOOL)amoebaAllowGlobalClickHook;
- (void)setAmoebaAllowGlobalClickHook:(BOOL)arg1;
- (void).cxx_destruct;
@end
