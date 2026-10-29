@interface CBTCoopV2LiteAppCellView : CBTCoopV2AsstBoardCellView
{
    BOOL _scrollsInternally; // +0x8
    BOOL _liteAppFirstFrameReady; // +0x9
    BOOL _liteAppExpandRevealAnimating; // +0xa
    UILabel * _titleLabel; // +0x10
    UIButton * _jumpButton; // +0x18
    UIView * _liteAppContainerView; // +0x20
    MMLiteAppView * _liteAppView; // +0x28
    NSString * _appliedContentSignature; // +0x30
    unsigned long long _liteAppContentSizeChangeSequence; // +0x38
    UIPanGestureRecognizer * _scrollBlockingPan; // +0x40
    UIButton * _jumpTitleButton; // +0x48
    UITapGestureRecognizer * _containerTapGesture; // +0x50
    UIView * _liteAppRevealCoverView; // +0x58
    CGSize _pendingLiteAppContentSize; // +0x60
}
- (BOOL)coopV2ParticipatesInContentCardClickReport;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setScrollsInternally:(BOOL)arg1;
- (id)gesturesThatBlockTableViewScroll;
- (void)prepareForReuse;
- (id)menuAnchorView;
- (id)copyableText;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)setupCellWithViewModel:(id)arg1;
- (void)onAppear;
- (void)layoutSubviews;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (void)ensureSubviews;
- (void)applyViewModelIfNeeded;
- (id)ensureScrollBlockingPan;
- (void)onScrollBlockingPan:(id)arg1;
- (id)typedViewModel;
- (void)syncLiteAppViewHostState;
- (void)attachLiteAppViewToContainerIfNeeded;
- (void)prepareLiteAppViewForContentSwap;
- (BOOL)liteAppContentExceedsCellForViewModel:(id)arg1;
- (void)updateJumpButtonTheme;
- (void)onJumpAreaTouchDown;
- (void)onJumpAreaTouchUp;
- (void)scheduleLiteAppContentSizeChanged:(CGSize)arg1 liteAppView:(id)arg2 contentSignature:(id)arg3;
- (void)onLiteAppContentSizeChanged:(CGSize)arg1;
- (BOOL)liteAppCellIntersectsViewport;
- (void)presentLiteAppExpandRevealIfReady;
- (void)onJumpButtonTapped;
- (void)setupJumpButtonReport;
- (void)setupContainerTapReport;
- (void)onContainerTapped:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)jumpButton;
- (void)setJumpButton:(id)arg1;
- (id)liteAppContainerView;
- (void)setLiteAppContainerView:(id)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (id)appliedContentSignature;
- (void)setAppliedContentSignature:(id)arg1;
- (CGSize)pendingLiteAppContentSize;
- (void)setPendingLiteAppContentSize:(CGSize)arg1;
- (unsigned long long)liteAppContentSizeChangeSequence;
- (void)setLiteAppContentSizeChangeSequence:(unsigned long long)arg1;
- (id)scrollBlockingPan;
- (void)setScrollBlockingPan:(id)arg1;
- (BOOL)scrollsInternally;
- (id)jumpTitleButton;
- (void)setJumpTitleButton:(id)arg1;
- (id)containerTapGesture;
- (void)setContainerTapGesture:(id)arg1;
- (BOOL)liteAppFirstFrameReady;
- (void)setLiteAppFirstFrameReady:(BOOL)arg1;
- (BOOL)liteAppExpandRevealAnimating;
- (void)setLiteAppExpandRevealAnimating:(BOOL)arg1;
- (id)liteAppRevealCoverView;
- (void)setLiteAppRevealCoverView:(id)arg1;
- (void).cxx_destruct;
@end
