@interface CBTAsstBoardMagicBrushCellView : CBTCoopV2AsstBoardCellView <SnapshotPrinterViewProtocol>
{
    BOOL _isShowingScreenshot; // +0x8
    BOOL _hasRequestedCard; // +0x9
    BOOL _hasSetupDisplayMode; // +0xa
    UIView * _canvasContainer; // +0x10
    UIImageView * _screenshotImageView; // +0x18
    WAAgentCardExpiredOverlayView * _cardExpiredOverlay; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    MagicSclFrameSetView * _currentFrameSetView; // +0x30
    UITapGestureRecognizer * _screenshotTapGesture; // +0x38
    UILongPressGestureRecognizer * _containerLongPressGesture; // +0x40
    UITapGestureRecognizer * _containerTapGesture; // +0x48
    unsigned long long _displayMode; // +0x50
    UIButton * _fullscreenButton; // +0x58
    UIButton * _expandButton; // +0x60
}
- (BOOL)coopV2ParticipatesInContentCardClickReport;
- (BOOL)needsBubbleBackground;
- (BOOL)isBubbleRightAligned;
- (id)getBubbleColor;
- (id)menuAnchorView;
- (id)checkboxAlignmentBubbleView;
- (void)prepareForReuse;
- (void)cleanState;
- (id)magicBrushViewModel;
- (id)titleLabel;
- (void)setupCellWithViewModel:(id)arg1;
- (void)dealloc;
- (void)setupUI;
- (void)layoutBubbleBackground;
- (void)layoutTitleLabel;
- (void)layoutMiniToolFullscreenButton;
- (void)onMiniToolFullscreenTapped;
- (void)setupMiniToolFullscreenButtonReport;
- (void)setupMiniToolCanvasContainerReport;
- (void)onCanvasContainerTapped:(id)arg1;
- (void)onExpandButtonTapped;
- (void)layoutExpandButton;
- (void)setupCallbacks;
- (void)determineDisplayMode;
- (BOOL)hasContextInfo;
- (void)onAppear;
- (void)onDisappear;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)layoutContentView;
- (void)setupCanvasContainer;
- (void)onContainerLongPress:(id)arg1;
- (void)requestCardIfNeeded;
- (void)onFrameSetViewReady:(id)arg1 frameId:(unsigned int)arg2;
- (void)setFrameSetView:(id)arg1 forContainerId:(unsigned int)arg2;
- (void)showOverlayWithText:(id)arg1 tapHandler:(id /* block */)arg2;
- (void)markExpired:(id)arg1;
- (void)onContainerHeightChanged:(double)arg1;
- (void)notifyCellHeightChanged;
- (void)showScreenshotWithExpiredOverlay;
- (void)showActualScreenshotImage:(id)arg1;
- (void)showFallbackExpiredOverlay;
- (void)hideScreenshotOverlay;
- (void)onScreenshotTapped:(id)arg1;
- (void)setFullscreenButtonGray;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshTheme;
- (id)extInfoForSnapshotPrinter;
- (void)markMiniToolInvalid;
- (id)canvasContainer;
- (void)setCanvasContainer:(id)arg1;
- (id)screenshotImageView;
- (void)setScreenshotImageView:(id)arg1;
- (BOOL)isShowingScreenshot;
- (void)setIsShowingScreenshot:(BOOL)arg1;
- (id)cardExpiredOverlay;
- (void)setCardExpiredOverlay:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)currentFrameSetView;
- (void)setCurrentFrameSetView:(id)arg1;
- (id)screenshotTapGesture;
- (void)setScreenshotTapGesture:(id)arg1;
- (id)containerLongPressGesture;
- (void)setContainerLongPressGesture:(id)arg1;
- (id)containerTapGesture;
- (void)setContainerTapGesture:(id)arg1;
- (BOOL)hasRequestedCard;
- (void)setHasRequestedCard:(BOOL)arg1;
- (BOOL)hasSetupDisplayMode;
- (void)setHasSetupDisplayMode:(BOOL)arg1;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (id)fullscreenButton;
- (void)setFullscreenButton:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (void).cxx_destruct;
@end
