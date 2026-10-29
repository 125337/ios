@interface MMFinderLiveStickerEditingViewController : MMCPUIViewController <MMLiveObjectManipulationViewDelegate, MMFinderLiveStickerContentPickerDelegate, MMFinderLiveStickerEditingViewDelegate, MMFinderLiveStickerTextTemplatesPageSheetDelegate, MMLiveViewExt, MMLiveTaskMgrExt, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    BOOL _deleteHighlighted; // +0x68
    BOOL _needRecoverPreferOrientationMask; // +0x69
    id <MMFinderLiveStickerEditingViewControllerDelegate> _delegate; // +0x70
    unsigned long long _overrideOrientationMask; // +0x78
    unsigned long long _preferOrientationMask; // +0x80
    MMFinderLiveTaskId * _taskId; // +0x88
    MMFinderLiveStickerItemBase * _originalStickerItem; // +0x90
    MMFinderLiveStickerItemBase * _stickerItem; // +0x98
    unsigned long long _state; // +0xa0
    MMFinderLiveStickerEditingViewControllerConfiguration * _configuration; // +0xa8
    NSString * _imageUpdateToken; // +0xb0
    UIView * _lightDismissView; // +0xb8
    UIView * _previewContainerView; // +0xc0
    UIView * _editingCanvasView; // +0xc8
    MMLiveObjectManipulationView * _manipulationView; // +0xd0
    UIView * _bottomBarContainerView; // +0xd8
    UIButton * _cancelButton; // +0xe0
    UIButton * _revertButton; // +0xe8
    UIButton * _confirmButton; // +0xf0
    MMFinderLiveStickerTextTemplatesPageSheet * _textTemplatesPageSheet; // +0xf8
    UIView * _deleteAreaView; // +0x100
    UIImageView * _deleteIconView; // +0x108
    UILabel * _deleteLabelView; // +0x110
    id <MMFinderLiveStickerContentPicking> _contentPicker; // +0x118
    id <MMFinderLiveStickerReporting> _reporter; // +0x120
}
- (id)initWithLiveTaskId:(id)arg1 stickerItem:(id)arg2 configuration:(id)arg3 reporter:(id)arg4;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)isLandscape;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onCancelTapped;
- (void)onRevertTapped;
- (void)onConfirmTapped;
- (void)onManipulationWillBeginOnView:(id)arg1 localTouchPosition:(CGPoint)arg2;
- (void)onManipulationWillChangeOnView:(id)arg1 fromTransformComponents:(CGAffineTransformComponents)arg2 toTransformComponents:(CGAffineTransformComponents)arg3 localTouchPosition:(CGPoint)arg4 overrideTransformComponents:(CGAffineTransformComponents *)arg5;
- (void)onManipulationWillEndOnView:(id)arg1 fromTransformComponents:(CGAffineTransformComponents)arg2 toTransformComponents:(CGAffineTransformComponents)arg3 localTouchPosition:(CGPoint)arg4 overrideTransformComponents:(CGAffineTransformComponents *)arg5;
- (void)onManipulationWillCancelOnView:(id)arg1 fromTransformComponents:(CGAffineTransformComponents)arg2 localTouchPosition:(CGPoint)arg3;
- (void)onManipulationViewTapped:(id)arg1;
- (void)onStickerContentConfirmed:(id)arg1;
- (void)onStickerContentPickingCanceled;
- (id)stickerEditingView:(id)arg1 hitTest:(CGPoint)arg2 withEvent:(id)arg3;
- (void)onStickerTextTemplatesPageSheet:(id)arg1 closedWithConfirmation:(BOOL)arg2;
- (void)onStickerTextTemplatesPageSheet:(id)arg1 selectionChanged:(id)arg2;
- (void)onStickerTextTemplatesPageSheetFrameDidChange:(id)arg1;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveTask:(id)arg1 applyingOrConnectingMicWithOtherAnchorChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (BOOL)isCurrentOrientationFitPreferOrientationMask;
- (void)checkNeedRecoverPreferOrientationMask;
- (void)initializeComponents;
- (void)createBottomViews;
- (void)layoutSubviews;
- (id)liveTask;
- (void)switchToState:(unsigned long long)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)setDeleteAreaHighlighing:(BOOL)arg1;
- (void)showPickerAnimated:(BOOL)arg1;
- (void)setupManipulationViewForStickerItem:(id)arg1 resetTransformation:(BOOL)arg2;
- (id)manipulationViewForStickerItem:(id)arg1;
- (CGAffineTransform)defaultTransformWithNeutralSize:(CGSize)arg1 neutralCenter:(CGPoint)arg2 constraints:(struct)arg3 stickerItem:(id)arg4;
- (id)contentPickerForSticker:(id)arg1;
- (BOOL)shouldResetTransformAfterContentConfirmationForStickerType:(unsigned long long)arg1;
- (unsigned long long)reportingTypeForStickerType:(unsigned long long)arg1;
- (void)commitStickerItemChanges;
- (CGAffineTransformComponents)decomposeManipulationTransform:(CGAffineTransform)arg1;
- (CGAffineTransformComponents)constrainedTransformComponentsWithNeutralSize:(CGSize)arg1 neutralCenter:(CGPoint)arg2 constraints:(struct)arg3 desiredTransformComponents:(CGAffineTransformComponents)arg4;
- (void)updateImageForSticker:(id)arg1 completionBlock:(id /* block */)arg2;
- (struct)transformConstraintsForSticker:(id)arg1;
- (void)removeStickerManipulationView:(id)arg1;
- (void)scheduleAutomaticConfirm;
- (void)cancelAutomaticConfirm;
- (void)invokeAutomaticConfirm;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (unsigned long long)preferOrientationMask;
- (void)setPreferOrientationMask:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)originalStickerItem;
- (void)setOriginalStickerItem:(id)arg1;
- (id)stickerItem;
- (void)setStickerItem:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (BOOL)deleteHighlighted;
- (void)setDeleteHighlighted:(BOOL)arg1;
- (id)imageUpdateToken;
- (void)setImageUpdateToken:(id)arg1;
- (id)lightDismissView;
- (void)setLightDismissView:(id)arg1;
- (id)previewContainerView;
- (void)setPreviewContainerView:(id)arg1;
- (id)editingCanvasView;
- (void)setEditingCanvasView:(id)arg1;
- (id)manipulationView;
- (void)setManipulationView:(id)arg1;
- (id)bottomBarContainerView;
- (void)setBottomBarContainerView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)revertButton;
- (void)setRevertButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)textTemplatesPageSheet;
- (void)setTextTemplatesPageSheet:(id)arg1;
- (id)deleteAreaView;
- (void)setDeleteAreaView:(id)arg1;
- (id)deleteIconView;
- (void)setDeleteIconView:(id)arg1;
- (id)deleteLabelView;
- (void)setDeleteLabelView:(id)arg1;
- (id)contentPicker;
- (void)setContentPicker:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)needRecoverPreferOrientationMask;
- (void)setNeedRecoverPreferOrientationMask:(BOOL)arg1;
- (void).cxx_destruct;
@end

