@interface WCEditImageLayoutView : MMUIView <EditImageCropToolBarDelegate, UIGestureRecognizerDelegate, EditImageEmotionToolAttrDelegate, MMBGMSelectHalfScreenViewControllerDelegate, WCFinderTemplateMusicSelectEntranceViewDelegate, WCEditImageOperationDelegate, EditImagePenToolAttrDelegate, EditImageMosaicToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt, EditImageTextInputDelegate, WCEditFilterToolAttrViewDelegate, WCEditSelectedCollectionViewDelegate, EditVideoBgmViewDelegate, EditImageAiToolAttrViewDelegate>
{
    UIView * _topEditImageBar; // +0x8
    MMUIImageView * _topBackgroundView; // +0x10
    EditImageEmotionToolAttrView * _emotionAttrView; // +0x18
    UIButton * _doneBtn; // +0x20
    unsigned int fromEntrance; // +0x28
    BOOL _hasDisplayImage; // +0x2c
    BOOL _hasOriginalImage; // +0x2d
    double _iCloudDownloadProgress; // +0x30
    BOOL _bIsiCloudImage; // +0x38
    NSMutableArray * _tmpSaveDrawLayerArray; // +0x40
    UIView * _iCloudMaskView; // +0x48
    UILabel * _iCloudProgressLabel; // +0x50
    UIView * _iCloudBarBackgroundView; // +0x58
    UIImageView * _iCloudImage; // +0x60
    BOOL _bUseOriginalImage; // +0x68
    UIImage * _saveOriginalImage; // +0x70
    BOOL _isAnimating; // +0x78
    BOOL _isToolBarOccupy; // +0x79
    BOOL _isCropOver; // +0x7a
    BOOL _isCropStartAnimationReady; // +0x7b
    BOOL _isAnimateEnable; // +0x7c
    BOOL _isRotating; // +0x7d
    BOOL _isRotationIconLocked; // +0x7e
    BOOL _bHasAbort; // +0x7f
    BOOL _isAspectRatioLocked; // +0x80
    BOOL _isLiteApp; // +0x81
    BOOL _defaultSelectFirstMusic; // +0x82
    BOOL _isEmoticonBoardSearchEnabled; // +0x83
    BOOL _canUpdateRoundCropFrame; // +0x84
    BOOL _keepImageWhenBack; // +0x85
    BOOL _useInitialCropRect; // +0x86
    BOOL _hasSizeCropEdit; // +0x87
    BOOL _isStartingCrop; // +0x88
    int _lastToolType; // +0x8c
    unsigned int _fromScene; // +0x90
    NSString * _assetURL; // +0x98
    EditImageCropToolBarView * _cropToolBar; // +0xa0
    EditImageCropGridView * _cropGridView; // +0xa8
    UIPanGestureRecognizer * _gridPanGes; // +0xb0
    unsigned long long _cropEdge; // +0xb8
    double _naturalTopLength; // +0xc0
    EditImageCropOverlayView * _overlayView; // +0xc8
    MMTimer * _timer; // +0xd0
    unsigned long long _currentRotationOrientation; // +0xd8
    unsigned long long _startRotationOrientation; // +0xe0
    id <WCEditImageLayoutViewDelegate> _delegate; // +0xe8
    id <WCFinderEditDataReportDelegate> _finderReportDelegate; // +0xf0
    unsigned long long _editImageUIStyle; // +0xf8
    UIImage * _image; // +0x100
    NSMutableArray * _assets; // +0x108
    NSMutableArray * _images; // +0x110
    NSMutableArray * _imageDatas; // +0x118
    UIView * _bottomEditImageBar; // +0x120
    MMUIImageView * _bottomBackgroundView; // +0x128
    MMUIButton * _cancelBtn; // +0x130
    MMAssetSelectCheckButton * _selectBtn; // +0x138
    MMUIButton * _undoBtn; // +0x140
    MMUIButton * _redoBtn; // +0x148
    UIButton * _filterBtn; // +0x150
    MMUIButton * _penBtn; // +0x158
    WCEditLoadingModeButton * _bgmBtn; // +0x160
    MMUIButton * _mosaicBtn; // +0x168
    MMUIButton * _textBtn; // +0x170
    MMUIButton * _emotionBtn; // +0x178
    MMUIButton * _cropBtn; // +0x180
    MMUIButton * _aiBtn; // +0x188
    MMUIButton * _removeBgBtn; // +0x190
    MMUIButton * _nextBtn; // +0x198
    EditImagePenToolAttrView * _penAttrBar; // +0x1a0
    EditImageAiToolAttrView * _aiAttrBar; // +0x1a8
    EditImageMosaicToolAttrView * _mosaicAttrBar; // +0x1b0
    WCEditImageScrollView * _eIScrollView; // +0x1b8
    UIImageView * _gifImageView; // +0x1c0
    long long _currentIndex; // +0x1c8
    RecommendedMusicInfo * _patMusicInfo; // +0x1d0
    WCEditSelectedCollectionView * _selectedCollectionView; // +0x1d8
    EditVideoMusicController * _musicController; // +0x1e0
    EditVideoBGMView * _bgmAttrView; // +0x1e8
    unsigned long long _backStyle; // +0x1f0
    UILabel * _notEditLabel; // +0x1f8
    WCEditViewControllerUIConfig * _uiConfig; // +0x200
    NSArray * _customBottomButtonOrder; // +0x208
    NSMutableDictionary * _originalImageDic; // +0x210
    NSMutableDictionary * _editImageAttrDic; // +0x218
    NSMutableDictionary * _editCropPramsDic; // +0x220
    NSString * _doneBtnTitleStr; // +0x228
    NSString * _cropSourceImgRef; // +0x230
    NSMutableArray * _hasEmoticonCropEdit; // +0x238
    EditImageCropToolBarViewModel * _sizeCropViewModel; // +0x240
    UIPanGestureRecognizer * _panGes; // +0x248
    UIPanGestureRecognizer * _voiceoverViewPanGes; // +0x250
    EditImageTextToolV2 * _textWidget; // +0x258
    WCEditFilterToolAttrView * _filterToolAttrView; // +0x260
    UIImage * _originalImage; // +0x268
    UIView * _voiceOverGesView; // +0x270
    NSMutableArray * _bgmPanelTabModels; // +0x278
    MMBGMSelectedConfig * _bgmPanelConfig; // +0x280
    MMBGMSelectHalfScreenViewController * _bgmPanelVC; // +0x288
    WCFinderTemplateMusicSelectEntranceView * _musicEntranceView; // +0x290
    NSString * _ybTemplateId; // +0x298
    CGPoint _cropTouchPoint; // +0x2a0
    CGSize _oldStartImageFrameSize; // +0x2b0
    CGPoint _originalScrollViewOffset; // +0x2c0
    CGRect _cropFrame; // +0x2d0
    CGRect _cropOriginalFrame; // +0x2f0
    CGRect _cropTouchFrame; // +0x310
    CGRect _contentFrame; // +0x330
    CGRect _initialCropRectInImage; // +0x350
    CGRect _cropFrameBeforeEnterCropview; // +0x370
}
- (void)startCropView:(CGRect)arg1;
- (void)startCropView:(CGRect)arg1 toolBarView:(id)arg2;
- (void)postStartCropView;
- (void)showCropToolBarViewWithAnimated:(BOOL)arg1;
- (void)startAnimateToCropFrame;
- (CGRect)clampCropRectToImage:(CGRect)arg1;
- (void)initContentImage;
- (void)setScrollViewMaxMinZoomScale:(BOOL)arg1;
- (void)restoreLayoutContentImage;
- (void)revertLayoutContentImage;
- (void)setAspectRatio:(CGSize)arg1 withAnimation:(BOOL)arg2;
- (void)checkForCanRevert;
- (BOOL)isRotated;
- (BOOL)isCropped;
- (void)moveContentToCenter;
- (void)moveContentToCenterWithoutAnimation;
- (void)matchOverlayViewToCropGridView;
- (void)startTimer;
- (void)startTimer:(double)arg1;
- (void)resetTimer;
- (void)triggerTimer;
- (void)croppingView;
- (void)finishCroppingView;
- (unsigned long long)cropEdgeForPoint:(CGPoint)arg1;
- (void)updateCropLinesWithPoint:(CGPoint)arg1 aspectRatio:(double)arg2;
- (void)updateCropLinesWithPoint:(CGPoint)arg1;
- (void)gridPanGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)triggerScrollViewDidEndZooming;
- (void)dragaAndDropWidget;
- (void)editImageDidRecordAnOperation;
- (void)cancelCropToolBar;
- (void)onCropToolBarCancelBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
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
- (void)clearOperation;
- (CGRect)_contentFrame;
- (void)set_cropFrame:(CGRect)arg1;
- (CGSize)_oldStartImageFrameSize;
- (id)sizeCropViewModel;
- (void)startEmotionTool;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)onEmotionToolBarDoneBtnClicked:(BOOL)arg1;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)clearEmotionToolOperation;
- (id)initWithFrame:(CGRect)arg1;
- (unsigned long long)setBGMViewButtonOption;
- (void)initBGMToolAttrBar;
- (id)getMusicLogoName;
- (unsigned long long)getEditVideoEntranceType;
- (void)EditVideoBGMDone:(id)arg1;
- (void)EditVideoBGMViewMusicOnOffStateChange:(BOOL)arg1;
- (void)setBGMToolAttrViewHidden:(BOOL)arg1;
- (void)initMusicController;
- (void)setPatMusicInfo:(id)arg1;
- (void)onClickmusicBGMViewAction;
- (void)setFrame:(CGRect)arg1;
- (BOOL)shouldAutoTriggerMusic;
- (void)onEditImage:(unsigned long long)arg1 withEditEntrance:(unsigned long long)arg2;
- (void)addPatMusicInfoToBGMLogic;
- (void)setupOriginalImageDic;
- (BOOL)shouldUseOriginImage:(CGSize)arg1;
- (CGRect)editImageViewGetCropFunctionInitialArea;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (CGRect)getAssetPreviewFrame;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)undoPenEditImage;
- (void)penToolAttrView:(id)arg1 didClickEraserBtn:(BOOL)arg2;
- (void)editImageMosaicToolAttrView:(id)arg1 didClickEraserBtn:(BOOL)arg2;
- (void)onClosePenToolAttrView;
- (void)onCloseCurrentToolAttrView;
- (void)setSelectedMosaicStyleFromToolAttrView:(unsigned long long)arg1;
- (void)undoMosaicEditImage;
- (void)onPenEditImage:(id)arg1;
- (void)onAiEditImage:(id)arg1;
- (void)onMosaicEditImage:(id)arg1;
- (void)onTextEditImage:(id)arg1;
- (void)onCropEditImage:(id)arg1;
- (void)onImageRemoveBg:(id)arg1;
- (void)onEmotionEditImage:(id)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)onCropDone;
- (void)onCropCancel;
- (void)onClickUndoBtn;
- (void)onClickRedoBtn;
- (void)updateGlobalUndoRedoBtnState;
- (BOOL)canShowGlobalUndoRedoBtn;
- (void)setEditImageToolBarHiddenWithAnimationInBeganOrEndPhase:(BOOL)arg1;
- (void)makeAllUIHidden:(BOOL)arg1;
- (void)updateScrollViewLayoutViews;
- (void)makeToolBarFadeAnimationHidden:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)makeToolBarFlyAnimationHidden:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setEditImageAttrBarHiddenWithAnimation:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (void)setEmotionToolAttrViewHidden:(BOOL)arg1;
- (void)initBottomEditImageBar;
- (void)showAiGuideTips;
- (void)hiddenBottomEditImageBarSubViewExceptNextBtn:(BOOL)arg1;
- (void)initSelectedCollectionView;
- (id)editImageAttrDic;
- (id)originalImageDic;
- (id)editCropPramsDic;
- (id)filterBtn;
- (id)filterToolAttrView;
- (void)onClickFilterBtn:(id)arg1;
- (void)initNextBtn;
- (void)initiCloudMaskView;
- (void)initPenToolAttrBar;
- (void)initAiToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)initEmotionToolAttrBar;
- (void)initTopEditImageBar;
- (void)initEditImageView;
- (BOOL)hasDisplayImage;
- (BOOL)shouldShowAiBtn;
- (void)handlePanGesture:(id)arg1;
- (void)afterDisplayImage:(id)arg1 withArray:(id)arg2;
- (void)initGifImageView;
- (void)addBlurView;
- (BOOL)currentImageFirstToSquare;
- (CGRect)currentCropRectInImage;
- (CGRect)currentCropRectInScreen;
- (CGRect)fullScreenCropRect;
- (void)abortEditImageAndShowMessage:(id)arg1;
- (void)checkiCloudImage;
- (void)postInit;
- (void)startAnimateAspectCrop;
- (void)reloadViews;
- (void)reloadBottomEditImageBar;
- (void)adjustBottomBarYIfNeeded;
- (unsigned long long)adjustedBlackLevelForLevel:(unsigned long long)arg1;
- (void)onCroppingView;
- (void)onFinishCroppingView;
- (double)getEmoticonToolViewBottom;
- (CGRect)getBtnAccessibilityFrameWithButton:(id)arg1;
- (id)getCustomBottomButtonOrder;
- (void)reloadTopEditImageBar;
- (void)reloadFilterToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)reloadAiToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadEmotionToolAttrBar;
- (void)selectLastToolType;
- (void)updateBtns;
- (void)updateToolBtns;
- (id)customImageSize:(id)arg1 scaleToSize:(CGSize)arg2;
- (CGRect)previewRect:(id)arg1;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (CGRect)getCorrectPreviewImageFrame;
- (void)endEditImageView;
- (void)reloadTopAndBottomEditImageBar;
- (id)getEditImageAttr;
- (void)dealloc;
- (void)onMainWindowFrameChanged;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)editFilterToolAttrViewDidSelectedIndex:(long long)arg1 value:(long long)arg2 image:(id)arg3;
- (void)updateCurScrollViewZoomRate;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2 completion:(id /* block */)arg3;
- (id)getOriginalImage:(long long)arg1;
- (void)onMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (BOOL)shouldShowNewBGMPanel;
- (void)setupNewMusicPanelIfNeeded;
- (void)setupNewMusicTopEntranceBarIfNeeded;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (id)currentViewController;
- (id)currentEditImageAttr;
- (void)onReplaceEditPhotoPath:(id)arg1 videoPath:(id)arg2 templateId:(id)arg3;
- (void)onImageParseFinish:(BOOL)arg1;
- (id)_assetURL;
- (void)set_assetURL:(id)arg1;
- (id)_cropToolBar;
- (void)set_cropToolBar:(id)arg1;
- (CGRect)_cropFrame;
- (void)set_cropFrame:(CGRect)arg1;
- (CGRect)_cropOriginalFrame;
- (void)set_cropOriginalFrame:(CGRect)arg1;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderReportDelegate;
- (void)setFinderReportDelegate:(id)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)images;
- (void)setImages:(id)arg1;
- (id)imageDatas;
- (void)setImageDatas:(id)arg1;
- (id)bottomEditImageBar;
- (void)setBottomEditImageBar:(id)arg1;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)selectBtn;
- (void)setSelectBtn:(id)arg1;
- (id)undoBtn;
- (void)setUndoBtn:(id)arg1;
- (id)redoBtn;
- (void)setRedoBtn:(id)arg1;
- (void)setFilterBtn:(id)arg1;
- (id)penBtn;
- (void)setPenBtn:(id)arg1;
- (id)bgmBtn;
- (void)setBgmBtn:(id)arg1;
- (id)mosaicBtn;
- (void)setMosaicBtn:(id)arg1;
- (id)textBtn;
- (void)setTextBtn:(id)arg1;
- (id)emotionBtn;
- (void)setEmotionBtn:(id)arg1;
- (id)cropBtn;
- (void)setCropBtn:(id)arg1;
- (id)aiBtn;
- (void)setAiBtn:(id)arg1;
- (id)removeBgBtn;
- (void)setRemoveBgBtn:(id)arg1;
- (id)nextBtn;
- (void)setNextBtn:(id)arg1;
- (id)penAttrBar;
- (void)setPenAttrBar:(id)arg1;
- (id)aiAttrBar;
- (void)setAiAttrBar:(id)arg1;
- (id)mosaicAttrBar;
- (void)setMosaicAttrBar:(id)arg1;
- (id)eIScrollView;
- (void)setEIScrollView:(id)arg1;
- (id)gifImageView;
- (void)setGifImageView:(id)arg1;
- (BOOL)bHasAbort;
- (void)setBHasAbort:(BOOL)arg1;
- (BOOL)isAspectRatioLocked;
- (void)setIsAspectRatioLocked:(BOOL)arg1;
- (BOOL)isLiteApp;
- (void)setIsLiteApp:(BOOL)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)patMusicInfo;
- (id)selectedCollectionView;
- (void)setSelectedCollectionView:(id)arg1;
- (id)musicController;
- (void)setMusicController:(id)arg1;
- (id)bgmAttrView;
- (void)setBgmAttrView:(id)arg1;
- (BOOL)defaultSelectFirstMusic;
- (void)setDefaultSelectFirstMusic:(BOOL)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (unsigned long long)backStyle;
- (void)setBackStyle:(unsigned long long)arg1;
- (BOOL)canUpdateRoundCropFrame;
- (void)setCanUpdateRoundCropFrame:(BOOL)arg1;
- (CGPoint)originalScrollViewOffset;
- (void)setOriginalScrollViewOffset:(CGPoint)arg1;
- (id)notEditLabel;
- (void)setNotEditLabel:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id)customBottomButtonOrder;
- (void)setCustomBottomButtonOrder:(id)arg1;
- (void)setOriginalImageDic:(id)arg1;
- (void)setEditImageAttrDic:(id)arg1;
- (void)setEditCropPramsDic:(id)arg1;
- (id)doneBtnTitleStr;
- (void)setDoneBtnTitleStr:(id)arg1;
- (id)cropSourceImgRef;
- (void)setCropSourceImgRef:(id)arg1;
- (id)hasEmoticonCropEdit;
- (void)setHasEmoticonCropEdit:(id)arg1;
- (BOOL)keepImageWhenBack;
- (void)setKeepImageWhenBack:(BOOL)arg1;
- (CGRect)initialCropRectInImage;
- (void)setInitialCropRectInImage:(CGRect)arg1;
- (BOOL)useInitialCropRect;
- (void)setUseInitialCropRect:(BOOL)arg1;
- (id)sizeCropViewModel;
- (void)setSizeCropViewModel:(id)arg1;
- (id)panGes;
- (void)setPanGes:(id)arg1;
- (id)voiceoverViewPanGes;
- (void)setVoiceoverViewPanGes:(id)arg1;
- (BOOL)hasSizeCropEdit;
- (void)setHasSizeCropEdit:(BOOL)arg1;
- (id)textWidget;
- (void)setTextWidget:(id)arg1;
- (void)setFilterToolAttrView:(id)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (CGRect)cropFrameBeforeEnterCropview;
- (void)setCropFrameBeforeEnterCropview:(CGRect)arg1;
- (id)voiceOverGesView;
- (void)setVoiceOverGesView:(id)arg1;
- (BOOL)isStartingCrop;
- (void)setIsStartingCrop:(BOOL)arg1;
- (id)bgmPanelTabModels;
- (void)setBgmPanelTabModels:(id)arg1;
- (id)bgmPanelConfig;
- (void)setBgmPanelConfig:(id)arg1;
- (id)bgmPanelVC;
- (void)setBgmPanelVC:(id)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (id)ybTemplateId;
- (void)setYbTemplateId:(id)arg1;
- (void).cxx_destruct;
@end
