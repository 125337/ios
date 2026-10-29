@interface EditImageIntialView : MMUIView <EditImageCropToolBarDelegate, UIGestureRecognizerDelegate, EditImageEmotionToolAttrDelegate, EditImageXiaoWeiEntryControllerDelegate, EditImageOperationDelegate, EditImagePenToolAttrDelegate, EditImageMosaicToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    UIView * _topEditImageBar; // +0x8
    MMUIImageView * _topBackgroundView; // +0x10
    UIView * _bottomEditImageBar; // +0x18
    MMUIImageView * _bottomBackgroundView; // +0x20
    EditImagePenToolAttrView * _penAttrBar; // +0x28
    EditImageMosaicToolAttrView * _mosaicAttrBar; // +0x30
    EditImageEmotionToolAttrView * _emotionAttrView; // +0x38
    MMUIButton * _penBtn; // +0x40
    MMUIButton * _mosaicBtn; // +0x48
    MMUIButton * _textBtn; // +0x50
    MMUIButton * _emotionBtn; // +0x58
    MMUIButton * _cropBtn; // +0x60
    MMUIButton * _cancelBtn; // +0x68
    UIButton * _doneBtn; // +0x70
    UIButton * _nextBtn; // +0x78
    unsigned int fromScene; // +0x80
    unsigned int fromEntrance; // +0x84
    BOOL _hasDisplayImage; // +0x88
    BOOL _hasOriginalImage; // +0x89
    double _iCloudDownloadProgress; // +0x90
    BOOL _bIsiCloudImage; // +0x98
    NSMutableArray * _tmpSaveDrawLayerArray; // +0xa0
    UIView * _iCloudMaskView; // +0xa8
    UILabel * _iCloudProgressLabel; // +0xb0
    UIView * _iCloudBarBackgroundView; // +0xb8
    UIImageView * _iCloudImage; // +0xc0
    BOOL _bHasAbort; // +0xc8
    BOOL _bUseOriginalImage; // +0xc9
    UIImage * _saveOriginalImage; // +0xd0
    BOOL _isShowDoubleMoveToast; // +0xd8
    BOOL _isAnimating; // +0xd9
    BOOL _isToolBarOccupy; // +0xda
    BOOL _isCropOver; // +0xdb
    BOOL _isCropStartAnimationReady; // +0xdc
    BOOL _isAnimateEnable; // +0xdd
    BOOL _isRotating; // +0xde
    BOOL _isRotationIconLocked; // +0xdf
    BOOL _isEmoticonBoardSearchEnabled; // +0xe0
    BOOL _isAspectRatioLocked; // +0xe1
    BOOL _canUpdateRoundCropFrame; // +0xe2
    BOOL _hasCropFrameBeforeAutoCenter; // +0xe3
    BOOL _isBgInitialized; // +0xe4
    BOOL _isStartingCrop; // +0xe5
    BOOL _isCoverNewVersion; // +0xe6
    int _lastToolType; // +0xe8
    id <EditImageInitialViewDelegate> _delegate; // +0xf0
    NSString * _assetURL; // +0xf8
    EditImageCropToolBarView * _cropToolBar; // +0x100
    EditImageCropGridView * _cropGridView; // +0x108
    UIPanGestureRecognizer * _gridPanGes; // +0x110
    unsigned long long _cropEdge; // +0x118
    double _naturalTopLength; // +0x120
    EditImageCropOverlayView * _overlayView; // +0x128
    MMTimer * _timer; // +0x130
    unsigned long long _currentRotationOrientation; // +0x138
    unsigned long long _startRotationOrientation; // +0x140
    NSString * _finishButtonWording; // +0x148
    unsigned long long _editImageUIStyle; // +0x150
    WCEditViewControllerUIConfig * _uiConfig; // +0x158
    EditImageXiaoWeiEntryController * _xiaoWeiEntry; // +0x160
    EditImageScrollView * _eIScrollView; // +0x168
    UIPanGestureRecognizer * _panGes; // +0x170
    UIPanGestureRecognizer * _voiceoverViewPanGes; // +0x178
    MMUIButton * _undoBtn; // +0x180
    MMUIButton * _redoBtn; // +0x188
    UIImageView * _bgImageView; // +0x190
    UIView * _bgBlurView; // +0x198
    EditImageCropOverlayView * _bgOverlayView; // +0x1a0
    double _imageInitialScale; // +0x1a8
    EditImageSNSBorderView * _outterBorderView; // +0x1b0
    EditImageSNSBorderView * _innterBorderView; // +0x1b8
    MMMusicFadeOutLayer * _imageMaskLayer; // +0x1c0
    UIView * _voiceOverGesView; // +0x1c8
    CContact * _profileContact; // +0x1d0
    TLProfileModel * _profileModel; // +0x1d8
    MMHeadImageView * _headImageView; // +0x1e0
    TLProfileNicknameContainerView * _nicknameContainerView; // +0x1e8
    UIView * _snsNavBar; // +0x1f0
    MMUIImageView * _snsNavBackgroundView; // +0x1f8
    MMUIButton * _snsNavBackBtn; // +0x200
    UILabel * _snsNavTitleLabel; // +0x208
    CGPoint _cropTouchPoint; // +0x210
    CGSize _oldStartImageFrameSize; // +0x220
    CGSize _rectRatioSize; // +0x230
    CGPoint _originalScrollViewOffset; // +0x240
    CGRect _cropFrame; // +0x250
    CGRect _cropOriginalFrame; // +0x270
    CGRect _cropTouchFrame; // +0x290
    CGRect _contentFrame; // +0x2b0
    CGRect _cropFrameBeforeEnterCropview; // +0x2d0
    CGRect _cropFrameBeforeAutoCenter; // +0x2f0
    CGRect _bgInitialFrame; // +0x310
    CGRect _positionRectOfContent; // +0x330
}
- (void)startCropView:(CGRect)arg1;
- (void)postStartCropView;
- (void)showCropToolBarViewWithAnimated:(BOOL)arg1;
- (void)startAnimateToCropFrame;
- (void)initContentImage;
- (void)setScrollViewMaxMinZoomScale:(BOOL)arg1;
- (void)restoreLayoutContentImage;
- (void)revertLayoutContentImage;
- (void)setAspectRatio:(CGSize)arg1 withAnimation:(BOOL)arg2;
- (void)checkForCanRevert;
- (BOOL)isRotated;
- (BOOL)isCropped;
- (CGRect)cropAdjustmentContentFrame;
- (void)moveContentToCenter;
- (void)snsAfterGesture;
- (void)matchOverlayViewToCropGridView;
- (void)startTimer;
- (void)startTimer:(double)arg1;
- (void)resetTimer;
- (void)triggerTimer;
- (void)startSnsTimer;
- (void)triggerSnsTimer;
- (void)croppingView;
- (void)finishCroppingView;
- (unsigned long long)cropEdgeForPoint:(CGPoint)arg1;
- (CGRect)removeRectEdge:(CGRect)arg1 edge:(unsigned long long)arg2 removeLen:(double)arg3;
- (void)updateCropLinesWithPoint:(CGPoint)arg1;
- (CGRect)limitCurrentCropFrameInContentScope:(CGRect)arg1 aspectRatio:(double)arg2;
- (void)gridPanGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)animateBGImageBlurViewWithAlpha:(double)arg1;
- (void)animateHeadAndNicknameWithAlpha:(double)arg1;
- (id)imageMaskLayer;
- (void)updateCropFrame;
- (void)dragaAndDropWidget;
- (void)editImageDidRecordAnOperation;
- (void)cancelCropToolBar;
- (void)onCropToolBarCancelBtnClicked;
- (void)syncFrameDimensionsForRotation;
- (void)onCropToolBarDoneBtnClicked;
- (double)calculateBackgroundOffset;
- (void)onCropToolBarRevertBtnClicked;
- (void)onCropToolBarRotateBtnClicked;
- (void)onCropToolBarCropProportionBtnClick:(BOOL)arg1 aspectRatio:(double)arg2;
- (void)rotateImageToOrientation:(unsigned long long)arg1 withAnimation:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)rotateImageDirectly:(BOOL)arg1;
- (void)revertAllRotationChangesInEditPhase;
- (void)commitRotateChanges;
- (void)trueCommitRotateChanges;
- (void)revertRotateChanges;
- (CGRect)calculateTrueEditImageViewFrameWithRatioImage:(CGSize)arg1;
- (void)goBackToEditView;
- (void)saveProperties;
- (void)savePropertiesWithCropFrame:(CGRect)arg1;
- (void)clearOperation;
- (CGRect)_contentFrame;
- (void)set_cropFrame:(CGRect)arg1;
- (CGSize)_oldStartImageFrameSize;
- (id)profileContact;
- (id)profileModel;
- (id)headImageView;
- (id)nicknameContainerView;
- (void)startEmotionTool;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)onEmotionToolBarDoneBtnClicked:(BOOL)arg1;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)clearEmotionToolOperation;
- (double)actionBarTopY;
- (double)effectiveBottomBarHeight;
- (double)toolbarContentHeight;
- (BOOL)canActionBarFitAtBottom;
- (BOOL)shouldFillActionBarAvailableSpace;
- (double)bottomBarLayoutHeight;
- (double)toolbarAreaHeight;
- (double)actionBarAreaHeight;
- (double)effectiveBottomBarHeightWithSafeArea;
- (void)initCustomNavigationBarIfNeeded;
- (void)reloadCustomNavigationBar;
- (void)bringCustomNavBarToFront;
- (double)snsCoverTopBarHeight;
- (UIEdgeInsets)snsCoverContentInsetForCropFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupReportInfo;
- (void)setFrame:(CGRect)arg1;
- (void)updateAdaptiveContentDisplayFrameIfNeeded;
- (void)onEditImage:(unsigned int)arg1 withEditEntrance:(unsigned int)arg2;
- (BOOL)shouldUseOriginImage:(CGSize)arg1;
- (CGRect)editImageViewGetCropFunctionInitialArea;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (CGRect)getAssetPreviewFrame;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)undoPenEditImage;
- (void)penToolAttrView:(id)arg1 didClickEraserBtn:(BOOL)arg2;
- (void)editImageMosaicToolAttrView:(id)arg1 didClickEraserBtn:(BOOL)arg2;
- (void)setSelectedMosaicStyleFromToolAttrView:(unsigned long long)arg1;
- (void)undoMosaicEditImage;
- (void)onPenEditImage:(id)arg1;
- (void)onMosaicEditImage:(id)arg1;
- (void)onTextEditImage:(id)arg1;
- (void)onCropEditImage:(id)arg1;
- (void)onXiaoWeiEntryButtonClicked;
- (BOOL)isXiaoWeiEntryEnabled;
- (BOOL)hasActionBar;
- (BOOL)isSNSCoverNewVersion;
- (void)setClsDebugInfo:(id)arg1;
- (void)onEmotionEditImage:(id)arg1;
- (void)checkShowDoubleMoveTips;
- (BOOL)isLargeVerticalImage;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)onCropDone;
- (void)onCropCancel;
- (CGSize)aspectRatioSize;
- (BOOL)allowAspectRatioSizeRange;
- (CGSize)aspectRatioSizeUpperBound;
- (void)setEditImageToolBarHiddenWithAnimationInBeganOrEndPhase:(BOOL)arg1;
- (void)makeAllUIHidden:(BOOL)arg1;
- (void)makeToolBarFadeAnimationHidden:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)makeToolBarFlyAnimationHidden:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setEditImageAttrBarHiddenWithAnimation:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (void)setEmotionToolAttrViewHidden:(BOOL)arg1;
- (void)initBottomEditImageBar;
- (void)initBGBlurEffectViewWithImage:(id)arg1;
- (void)initSubviewsForSNSHeader;
- (void)layoutSubviews;
- (CGRect)bgBlurEffectViewFrame;
- (void)initiCloudMaskView;
- (void)initPenToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)initEmotionToolAttrBar;
- (void)initTopEditImageBar;
- (BOOL)canShowGlobalUndoRedoBtn;
- (void)updateGlobalUndoRedoBtnState;
- (void)initEditImageView;
- (void)handlePanGesture:(id)arg1;
- (BOOL)highlightWidgetToolIsSelected;
- (void)afterDisplayImage:(id)arg1 withArray:(id)arg2;
- (void)abortEditImageAndShowMessage:(id)arg1;
- (void)checkiCloudImage;
- (void)postInit;
- (void)startAnimateAspectCrop;
- (void)hideRotateBtn:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (void)reloadViews;
- (void)applyAiImageAsUndoableOperation:(id)arg1;
- (void)layoutNextBtnWithMargin:(double)arg1;
- (void)reloadBottomEditImageBar;
- (void)layoutXiaoWeiBtn;
- (void)layoutBottomGradientShadow;
- (void)adjustBottomBarYIfNeeded;
- (unsigned long long)adjustedBlackLevelForLevel:(unsigned long long)arg1;
- (CGRect)getBtnAccessibilityFrameWithButton:(id)arg1;
- (void)reloadTopEditImageBar;
- (void)reloadPenToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadEmotionToolAttrBar;
- (void)selectLastToolType;
- (void)updateBtns;
- (void)updateToolBtns;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (void)onClickUndoBtn;
- (void)onClickRedoBtn;
- (void)endEditImageView;
- (void)onMainWindowFrameChanged;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)debugTap;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (id)_assetURL;
- (void)set_assetURL:(id)arg1;
- (id)_cropToolBar;
- (void)set_cropToolBar:(id)arg1;
- (CGRect)_cropFrame;
- (void)set_cropFrame:(CGRect)arg1;
- (CGRect)_cropOriginalFrame;
- (void)set_cropOriginalFrame:(CGRect)arg1;
- (BOOL)_isShowDoubleMoveToast;
- (void)set_isShowDoubleMoveToast:(BOOL)arg1;
- (id)_cropGridView;
- (void)set_cropGridView:(id)arg1;
- (id)_gridPanGes;
- (void)set_gridPanGes:(id)arg1;
- (unsigned long long)_cropEdge;
- (void)set_cropEdge:(unsigned long long)arg1;
- (CGPoint)_cropTouchPoint;
- (void)set_cropTouchPoint:(CGPoint)arg1;
- (CGRect)_cropTouchFrame;
- (void)set_cropTouchFrame:(CGRect)arg1;
- (CGRect)_contentFrame;
- (void)set_contentFrame:(CGRect)arg1;
- (double)_naturalTopLength;
- (void)set_naturalTopLength:(double)arg1;
- (id)_overlayView;
- (void)set_overlayView:(id)arg1;
- (int)_lastToolType;
- (void)set_lastToolType:(int)arg1;
- (BOOL)_isAnimating;
- (void)set_isAnimating:(BOOL)arg1;
- (BOOL)_isToolBarOccupy;
- (void)set_isToolBarOccupy:(BOOL)arg1;
- (BOOL)_isCropOver;
- (void)set_isCropOver:(BOOL)arg1;
- (id)_timer;
- (void)set_timer:(id)arg1;
- (BOOL)_isCropStartAnimationReady;
- (void)set_isCropStartAnimationReady:(BOOL)arg1;
- (BOOL)_isAnimateEnable;
- (void)set_isAnimateEnable:(BOOL)arg1;
- (unsigned long long)_currentRotationOrientation;
- (void)set_currentRotationOrientation:(unsigned long long)arg1;
- (unsigned long long)_startRotationOrientation;
- (void)set_startRotationOrientation:(unsigned long long)arg1;
- (CGSize)_oldStartImageFrameSize;
- (void)set_oldStartImageFrameSize:(CGSize)arg1;
- (BOOL)_isRotating;
- (void)set_isRotating:(BOOL)arg1;
- (BOOL)_isRotationIconLocked;
- (void)set_isRotationIconLocked:(BOOL)arg1;
- (id)finishButtonWording;
- (void)setFinishButtonWording:(id)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (CGSize)rectRatioSize;
- (void)setRectRatioSize:(CGSize)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id)xiaoWeiEntry;
- (void)setXiaoWeiEntry:(id)arg1;
- (id)eIScrollView;
- (void)setEIScrollView:(id)arg1;
- (id)panGes;
- (void)setPanGes:(id)arg1;
- (id)voiceoverViewPanGes;
- (void)setVoiceoverViewPanGes:(id)arg1;
- (BOOL)isAspectRatioLocked;
- (void)setIsAspectRatioLocked:(BOOL)arg1;
- (CGPoint)originalScrollViewOffset;
- (void)setOriginalScrollViewOffset:(CGPoint)arg1;
- (BOOL)canUpdateRoundCropFrame;
- (void)setCanUpdateRoundCropFrame:(BOOL)arg1;
- (id)undoBtn;
- (void)setUndoBtn:(id)arg1;
- (id)redoBtn;
- (void)setRedoBtn:(id)arg1;
- (CGRect)cropFrameBeforeEnterCropview;
- (void)setCropFrameBeforeEnterCropview:(CGRect)arg1;
- (CGRect)cropFrameBeforeAutoCenter;
- (void)setCropFrameBeforeAutoCenter:(CGRect)arg1;
- (BOOL)hasCropFrameBeforeAutoCenter;
- (void)setHasCropFrameBeforeAutoCenter:(BOOL)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)bgBlurView;
- (void)setBgBlurView:(id)arg1;
- (CGRect)bgInitialFrame;
- (void)setBgInitialFrame:(CGRect)arg1;
- (id)bgOverlayView;
- (void)setBgOverlayView:(id)arg1;
- (BOOL)isBgInitialized;
- (void)setIsBgInitialized:(BOOL)arg1;
- (double)imageInitialScale;
- (void)setImageInitialScale:(double)arg1;
- (id)outterBorderView;
- (void)setOutterBorderView:(id)arg1;
- (id)innterBorderView;
- (void)setInnterBorderView:(id)arg1;
- (id)imageMaskLayer;
- (void)setImageMaskLayer:(id)arg1;
- (id)voiceOverGesView;
- (void)setVoiceOverGesView:(id)arg1;
- (BOOL)isStartingCrop;
- (void)setIsStartingCrop:(BOOL)arg1;
- (id)profileContact;
- (void)setProfileContact:(id)arg1;
- (id)profileModel;
- (void)setProfileModel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameContainerView;
- (void)setNicknameContainerView:(id)arg1;
- (BOOL)isCoverNewVersion;
- (void)setIsCoverNewVersion:(BOOL)arg1;
- (CGRect)positionRectOfContent;
- (void)setPositionRectOfContent:(CGRect)arg1;
- (id)snsNavBar;
- (void)setSnsNavBar:(id)arg1;
- (id)snsNavBackgroundView;
- (void)setSnsNavBackgroundView:(id)arg1;
- (id)snsNavBackBtn;
- (void)setSnsNavBackBtn:(id)arg1;
- (id)snsNavTitleLabel;
- (void)setSnsNavTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
