@interface WAAgentSessionContainerCell : WAAgentSessionBaseCell <SnapshotPrinterViewProtocol, MagicSclFrameSetViewDelegate>
{
    id <WAAgentSessionContainerCellDelegate> _containerDelegate; // +0x8
    id /* block */ _frameSetViewProvider; // +0x10
    WAAgentSessionCellViewModel * _currentViewModel; // +0x18
    MMUIView * _bubbleContainer; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UIButton * _expandButton; // +0x38
    UIView * _canvasContainer; // +0x40
    MagicSclFrameSetView * _currentFrameSetView; // +0x48
    WAAgentCardExpiredOverlayView * _expiredOverlay; // +0x50
}
+ (double)calRealContainerHeight:(double)arg1;
+ (double)titleBarHeight;
+ (double)containerEffectiveWidthForTableWidth:(double)arg1;
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)onAppWillEnterForeground;
- (void)onAppear;
- (void)prepareForReuse;
- (void)setupUI;
- (void)setupArrowImageView;
- (id)arrowImage;
- (id)arrowColor;
- (id)expandIconImage;
- (id)bubbleColor;
- (void)layoutSubviews;
- (void)layoutBubbleMode;
- (void)layoutArrowImageView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)restoreFrameSetView;
- (void)restoreExpiredOverlayIfNeeded;
- (void)setFrameSetView:(id)arg1 forContainerId:(unsigned int)arg2 frameId:(unsigned int)arg3;
- (void)attachFrameSetView:(id)arg1;
- (void)markContainerExpired:(unsigned int)arg1 expiredText:(id)arg2;
- (void)attachExpiredOverlay:(id)arg1;
- (id)frameSetViewForContainerId:(unsigned int)arg1;
- (BOOL)containsContainerId:(unsigned int)arg1;
- (void)redrawCurrentFrameSetView;
- (unsigned int)containerId;
- (void)onExpandButtonTapped;
- (void)notifyHeightChange:(double)arg1;
- (void)onMagicSclFrameSetViewSizeChange:(id)arg1;
- (BOOL)isRootContainerExpired;
- (void)updateExpandButtonVisibility;
- (id)extInfoForSnapshotPrinter;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (id /* block */)frameSetViewProvider;
- (void)setFrameSetViewProvider:(id /* block */)arg1;
- (id)currentViewModel;
- (void)setCurrentViewModel:(id)arg1;
- (id)bubbleContainer;
- (void)setBubbleContainer:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)canvasContainer;
- (void)setCanvasContainer:(id)arg1;
- (id)currentFrameSetView;
- (void)setCurrentFrameSetView:(id)arg1;
- (id)expiredOverlay;
- (void)setExpiredOverlay:(id)arg1;
- (void).cxx_destruct;
@end
