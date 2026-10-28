@interface ShortVideoToolbar : MMUIView <MonoServiceLogicExt, EditVideoLogicItemDelegate, MMImageCropperDelegate, WCEditVideoViewControllerDelegate, WCEditImageViewControllerDelegate, SightCameraCaptureExt, SightShootingModeSwitchViewDelegate, EditVideoBGMPlayerDelegate, SightBeautyOperationPanelDelegate, SightCameraCaptureDelegate, WCAudioModuleDelegate, QuickReplyMsgExt, MMCameraTemplatePanelPanelDelegate, UIGestureRecognizerDelegate, WCFinderTemplateMusicSelectEntranceViewDelegate, WCFinderMusicSelectViewDelegate, WCFinderMusicSelectViewDataSource, MMCameraTouchEventViewDelegate, MMSightCameraOptionControllerProtocol, MJCameraMusicTabViewModelDataSource, UITextFieldDelegate, EditImageInitialViewDelegate>
{
    BOOL m_isActive; // +0x8
    double m_topPositon; // +0x10
    double m_dragDeltaFix; // +0x18
    int m_cameraState; // +0x20
    BOOL m_dragZoomTrigger; // +0x24
    BOOL m_inCombolMode; // +0x25
    NSMutableArray * m_recordIDAry; // +0x28
    UIButton * m_captureBtn; // +0x30
    MMSightRecordView * m_recordButtonView; // +0x38
    UILabel * m_tipsLabel; // +0x40
    UILabel * m_zoomTipsLabel; // +0x48
    unsigned long long m_cameraMode; // +0x50
    UIView * m_topBar; // +0x58
    UIView * m_topBarIcon; // +0x60
    UIView * m_topBarIconActive; // +0x68
    BOOL m_requestAuthAccess; // +0x70
    UIView * m_motionTipsView; // +0x78
    BOOL m_motionDetected; // +0x80
    UIButton * m_toolbarCancelButton; // +0x88
    BOOL m_lightBoostStat; // +0x90
    BOOL m_lightBoostOpenStat; // +0x91
    unsigned int m_validReshowLightBoostCmd; // +0x94
    UIButton * m_lightBoostButton; // +0x98
    long long m_currentOrientation; // +0xa0
    BOOL m_hasRealStartedForPreStartRecording; // +0xa8
    double m_zoomScaleAtLastPanGesture; // +0xb0
    BOOL m_isPinching; // +0xb8
    float _videoDuration; // +0xbc
    long long _cameraPosition; // +0xc0
    BOOL _draggable; // +0xc8
    BOOL _isShowingPreview; // +0xc9
    BOOL _isAutoConfirm; // +0xca
    BOOL _isForbiddenAnimation; // +0xcb
    BOOL _m_writerTimeout; // +0xcc
    BOOL _m_cameraOpened; // +0xcd
    BOOL _m_shouldContinueRecording; // +0xce
    BOOL _m_isTakingPicture; // +0xcf
    BOOL _showTipsReady; // +0xd0
    BOOL _onlyShowTemplateSelectedView; // +0xd1
    BOOL _canRelayoutSubviews; // +0xd2
    BOOL _hasShowTempalteModeSwitchTips; // +0xd3
    int _recordState; // +0xd4
    int _btnState; // +0xd8
    unsigned int _m_currWriterID; // +0xdc
    unsigned int _m_tipsCounter; // +0xe0
    NSString * _finishButtonWording; // +0xe8
    id <ShortVideoBarDelegate> _delegate; // +0xf0
    SightCameraPreviewView * _m_cameraPreviewView; // +0xf8
    EditVideoAttr * _editVideoAttr; // +0x100
    unsigned long long _uiStyle; // +0x108
    unsigned long long _camSwitchTiming; // +0x110
    UIView * _m_tipsView; // +0x118
    UIView * _m_cancelTips; // +0x120
    MMCircularProgressView * _m_circleProgress; // +0x128
    UIView * _m_maskWindow; // +0x130
    ShortVideoToolbarPreviewView * _m_resultPreviewView; // +0x138
    MMUIButton * _m_hideBarBtn; // +0x140
    UIImageView * _m_hideBarBtnImageView; // +0x148
    MMUIButton * _m_albumBtn; // +0x150
    MMUIButton * _m_beautyBtn; // +0x158
    double _m_lastZoomScale; // +0x160
    UIView * _m_toolBar; // +0x168
    UIView * _m_backgroundView; // +0x170
    UIView * _m_contentView; // +0x178
    UIView * _m_preView; // +0x180
    MMCameraTouchEventView * _m_panOpererView; // +0x188
    CAGradientLayer * _topMaskGradientLayer; // +0x190
    CAGradientLayer * _bottomMaskGradientLayer; // +0x198
    UIImage * _m_originalImage; // +0x1a0
    UIImage * _m_waitingSendImage; // +0x1a8
    EditImageAttr * _m_editImageAttr; // +0x1b0
    EditImageIntialView * _m_editImageInitialView; // +0x1b8
    MMLoadingView * _m_loadingView; // +0x1c0
    unsigned long long _m_scene; // +0x1c8
    NSString * _m_statChatUserName; // +0x1d0
    EditVideoLogicItem * _m_editVideoLogicItem; // +0x1d8
    NSString * _m_videoPath; // +0x1e0
    NSString * _m_waitingSendVideoPath; // +0x1e8
    UIImage * _m_thumbImage; // +0x1f0
    MMImageCropperViewController * _m_cropperVC; // +0x1f8
    MMShortVideoParamModel * _shortVideoModel; // +0x200
    MMUIImageView * _beautySelectedView; // +0x208
    WCUIAlertView * _alertView; // +0x210
    RecommendedMusicInfo * _patMusicInfo; // +0x218
    EditVideoBGMPlayer * _bgmPlayer; // +0x220
    MMUIButton * _audioPermissionTipsBtn; // +0x228
    SightBeautyOperationPanel * _beautyOperationPanel; // +0x230
    double _currentTemplateMaxRecordingDuration; // +0x238
    MJCameraTemplateReportObject * _cameraTemplateReportObj; // +0x240
    OMJRecordingResultTraits * _recordingResultTraits; // +0x248
    MMUIButton * _closeButton; // +0x250
    MMUILabel * _flashTipsLabel; // +0x258
    MMUIButton * _switchButton; // +0x260
    UIView * _optionAreaView; // +0x268
    MMSightCameraOptionManager * _optionManager; // +0x270
    MMCameraTopBarView * _proModeTopBarView; // +0x278
    MMCameraTemplatePanel * _finderTemplatePanel; // +0x280
    SightShootingModeSwitchView * _shootingModeSwitchView; // +0x288
    WCFinderTemplateMusicSelectEntranceView * _musicEntranceView; // +0x290
    WCShortVideoToolBarInitParams * _params; // +0x298
    WCFinderMusicSelectView * _musicSelectView; // +0x2a0
    WCFinderEditImageMusicView * _patMusicTopView; // +0x2a8
    NSArray * _templateMusics; // +0x2b0
    unsigned long long _btnTemplateState; // +0x2b8
    MJCamChangeTemplateParams * _currentTemplateParams; // +0x2c0
    OMCGeographicInfo * _userLocation; // +0x2c8
    UIView * _toolbarLeftBtn; // +0x2d0
    UIView * _toolbarRightBtn; // +0x2d8
    UITapGestureRecognizer * _voiceOverTapInRecordBtn; // +0x2e0
    UILongPressGestureRecognizer * _voiceOverLongPressInRecordBtn; // +0x2e8
}
+ (id)postEnterSceneKey;
- (void)initFirstOrientation:(long long)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (void)dismissForVOIPEvents;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onSwitchCameraFinished:(id)arg1;
- (void)camSession:(id)arg1 recordingDidFail:(id)arg2;
- (void)camSession:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)camSessionDidPresentFirstFrame:(id)arg1;
- (BOOL)checkViewControllerHasLoaded;
- (void)onAutoSwitchingCamera;
- (BOOL)sightCameraIsVisible;
- (unsigned long long)sightCameraCaptureScene;
- (void)sightCameraDismissSelf:(BOOL)arg1;
- (void)setFinderPostEnterScene:(unsigned long long)arg1;
- (unsigned long long)finderPostEnterScene;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)layoutSubviews;
- (void)forceRelayoutSubviews;
- (void)_relayoutViews;
- (unsigned long long)getShortVideoToolbarUIStyle:(unsigned long long)arg1 uiStyle:(unsigned long long)arg2;
- (id)beautyOperationPanel;
- (id)audioPermissionTipsBtn;
- (id)flashTipsLabel;
- (id)m_statChatUserName;
- (unsigned int)roomSizeForSightStatistics;
- (id)beautySelectedView;
- (id)closeButton;
- (id)switchButton;
- (id)m_albumBtn;
- (void)setupView;
- (void)setDelegate:(id)arg1;
- (void)_initBackgroundView;
- (void)_relayoutBackgroundView;
- (CGRect)_getContentViewFrameInDefaultState;
- (double)_getContentViewCenterYIn_1_1_State;
- (double)_getContentViewCenterYIn_4_3_State;
- (CGRect)_getContentViewFrameWithAspectRatio:(double)arg1;
- (void)_setZoomFactor:(double)arg1;
- (id)makeBGMaskView;
- (void)updateBlurImage;
- (void)_relayoutBlurImage;
- (void)_initTopBar;
- (void)_relayoutTopBar;
- (void)_initPreView;
- (void)_relayoutPreView;
- (void)_initToolBar;
- (double)getToolBarHeight;
- (void)_relayoutFinderTemplatePanel;
- (void)_relayoutToolBar;
- (void)_initOptionAreaView;
- (void)_relayoutOptionAreaView;
- (void)_switchOptionAreaDefaultContentForCurrentScene;
- (void)_switchOptionAreaContentView:(id)arg1 andCenterInside:(BOOL)arg2;
- (void)_removeOptionAreaContentView:(id)arg1;
- (double)leftHeightAfterMinusPreview;
- (BOOL)canSightPreviewMarginTop0;
- (BOOL)canSightPreviewMarginTopNavigationBar;
- (void)setupAlbumBtn;
- (void)setupBeautyBtnWithState:(BOOL)arg1;
- (void)initTipsLabel;
- (id)createAndSetFinderTemplatePanel;
- (void)initFinderTemplateUI;
- (void)adjustTempalteElementShadow;
- (void)setMusicSelectViewHidden:(BOOL)arg1;
- (void)_relayoutTipsLabel;
- (void)_initTopMaskGradientLayer;
- (void)_relayoutTopMaskGradientLayer;
- (void)_initBottomMaskGradientLayer;
- (void)_relayoutBottomMaskGradientLayer;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)dealloc;
- (void)resetBGMPlay;
- (id)bgmPlayer;
- (void)tryCreatePreview;
- (BOOL)needsEffectManager;
- (BOOL)needsBeautyEffect;
- (BOOL)isMomentsScene;
- (void)resumePreview;
- (void)releasePreview;
- (float)sightCaptureMaxDuration;
- (void)switchCameraByButton;
- (void)switchCamera;
- (void)updateCameraAccessibility;
- (void)onCameraPreviewOK:(id)arg1;
- (void)onCameraAudioOK:(id)arg1;
- (void)onCameraStop:(id)arg1;
- (void)resumeCamera;
- (void)pauseCamera;
- (void)updateCameraPreviewViewStatus;
- (void)showFlashTips:(id)arg1;
- (void)hideFlashTips;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3 fontSize:(double)arg4;
- (void)fadeInTips;
- (void)hideTips;
- (void)showCancelTips;
- (void)hideCancelTips;
- (void)_onWillTakePicture;
- (void)_takePictureOpt;
- (void)_takePicture;
- (void)setM_isTakingPicture:(BOOL)arg1;
- (void)startTakePhotoFlashAnim:(id /* block */)arg1;
- (BOOL)enablePhoto;
- (BOOL)enableVideo;
- (BOOL)isFinderTemplateScene;
- (BOOL)isCurringShowingFinderTemplate;
- (BOOL)isCameraProModeEnabled;
- (id)MJCameraMusicTabViewModelGetMusicInfo:(id)arg1;
- (void)onAspectRatioChangedToType:(long long)arg1;
- (void)_onPreviewVisibleAspectChanged;
- (id)_croppedVisibleAspectImageIfNeeded:(id)arg1;
- (CGRect)_getPreviewVisibleAspectFrame;
- (void)MMSightCameraBeautifyDidSelectBeautyItem:(id)arg1;
- (void)MMSightCameraBeautifyDidSelectFilterItem:(id)arg1;
- (void)onFlashlightChangeToStatus:(BOOL)arg1;
- (void)onFlashlightClickTopBarBtn:(id)arg1;
- (void)onGridLineChangeToStatus:(BOOL)arg1;
- (void)onHDRChangeToStatus:(BOOL)arg1;
- (void)onHDRClickTopBarBtn:(id)arg1;
- (void)onNightModeChangeToStatus:(BOOL)arg1;
- (void)onPortraitModeChangeToStatus:(BOOL)arg1;
- (void)onProModeChangeToShowing:(BOOL)arg1;
- (void)onTimerChangedToType:(long long)arg1;
- (void)onTimerCountDownToTimeSec:(long long)arg1;
- (void)onTimerCountDownCancelled;
- (void)onZoomerIconButtonChangedSelectionTo:(BOOL)arg1;
- (void)onZoomerChangedToFactor:(double)arg1;
- (void)logicCheckState:(int)arg1;
- (void)turnBarRecordingLongAnim;
- (void)turnBarRecording;
- (void)turnBarRecording:(BOOL)arg1;
- (void)turnBarCanceling;
- (void)turnBarNormalize;
- (id)getShineAnim;
- (BOOL)enableSightVideoOpt;
- (void)startWriter;
- (void)setRecordState:(int)arg1;
- (void)finishWriter;
- (void)cancelWriter;
- (void)cancelWriterWithoutReprepare;
- (void)tryCancelPreStartRecording;
- (long long)updateVideoOrientationIfNeeded:(long long)arg1;
- (void)showVideoForbidenTips;
- (void)setCameraState:(int)arg1;
- (BOOL)canSwitchCameraInRecording;
- (void)reportCaptureIsLongPress:(BOOL)arg1;
- (void)reportTakePhotoTimeConsume:(unsigned long long)arg1;
- (void)normalBtnPress;
- (void)handleVoiceOverLongPressGes:(id)arg1;
- (void)handleVoiceOverTapGes:(id)arg1;
- (void)handleNonVoiceOverBtnPress;
- (void)handleNonVoiceOverBtnRelease;
- (void)btnPress;
- (void)showFlashingEffect;
- (void)_onCaptureBtnTimerUpdated;
- (void)_onCaptureBtnTimerCancelled;
- (void)btnDragOutSide;
- (void)btnDragInside;
- (void)btnDragging:(id)arg1;
- (void)btnRelease;
- (void)normalBtnRelease;
- (void)setBtnState:(int)arg1;
- (void)onTakenPicture:(id)arg1 imageData:(id)arg2;
- (void)onWriterFailed:(id)arg1;
- (void)onWriterResign;
- (void)onVoiceOverStatusChanged;
- (void)onMovieCompressFinished:(id)arg1;
- (void)onBtnClick:(id)arg1;
- (void)onCancelDelete;
- (void)onDrag:(CGPoint)arg1;
- (void)onDragEnd:(double)arg1;
- (void)setupMotionDetector;
- (void)resetMotionTipsView;
- (void)onShaky;
- (void)tryFoldProModeOption;
- (void)focusCenter;
- (void)handleTapGesture:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePanPreview:(id)arg1;
- (BOOL)enableAdjustLighting;
- (void)handlePinchGesture:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)deActiveWithoutAnimation;
- (void)setActive:(BOOL)arg1 fromShake:(BOOL)arg2;
- (void)setTemplateReleatedBtnUserInteractionEnabled:(BOOL)arg1;
- (void)trySetupMaasCore;
- (void)delaySetTemplateReleatedUIInteractive:(BOOL)arg1;
- (void)startActiveAnimation:(BOOL)arg1;
- (void)goToSettingAuthorization;
- (void)startDeactiveAnimation;
- (void)showMaskWindow;
- (void)hideTopBar;
- (void)showTopBar;
- (void)hideToolBar;
- (BOOL)isChatRoomUserName:(id)arg1;
- (id)cameraModeLogStringWithIsVideo:(BOOL)arg1;
- (id)cameraSwitchTimingLogString;
- (void)didTapRetakeButton;
- (void)startNormalLoadingWithBlocked:(BOOL)arg1;
- (void)startNormalLoadingWithText:(id)arg1 blocked:(BOOL)arg2;
- (void)enterSegmentShooting;
- (id)getPatMusicInfo;
- (void)willEnterEditVideoView;
- (void)updateEditImageReportObjBeforeEnterEditView;
- (void)initReportService;
- (void)stopPreview;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2 sentImmediately:(BOOL)arg3 fromTemplate:(BOOL)arg4;
- (void)tryRestoreMiaojianSettingIfNeedCompletion:(id /* block */)arg1;
- (id)genEditViewControllerUIConfigWithPortraitAsset:(BOOL)arg1;
- (void)showFinderFullScreenEditVideoViewController;
- (void)showPreviewViewWithImage:(id)arg1 imageData:(id)arg2;
- (BOOL)needSaveOriginal;
- (BOOL)needUseOriginalVideo;
- (id)genFinderTemplateInfoResultWithCheckSum:(id)arg1;
- (id)genFinderTemplateBindedEventParams;
- (unsigned long long)sightCaptureScene2EditImageEnterScene;
- (int)sightCaptureScene2ImagePickerScene;
- (unsigned long long)sightCaptureScene2EditVideoEntrance;
- (void)onPreviewImageClickCancel;
- (id)genMultiRecordInfo;
- (BOOL)needMaasEffect;
- (id)getCurrentSelectedTemplateId;
- (id)getCurrentSelectedTemplateMusicId;
- (id)getCurrentSelectedSongId;
- (void)safeSetCamBeauty:(id)arg1 completion:(id /* block */)arg2;
- (void)safeSetCamFilter:(id)arg1 completion:(id /* block */)arg2;
- (void)safeSetCamFunny:(id)arg1 completion:(id /* block */)arg2;
- (void)safeClearTemplateFunnyWithCompletion:(id /* block */)arg1;
- (void)safeSetCamSessionEffect:(id /* block */)arg1;
- (void)fetchUserLocationIfNeeded:(id)arg1;
- (void)fetchUserLocationWithCompletionHandler:(id /* block */)arg1;
- (void)configGestureRecognizerEnableAfterClearTemplate;
- (void)configGestureRecognizerEnableAfterUseTemplate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)canRecognizePanGesture:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)handleClickEditImageDoneBarButton;
- (id)currentViewController;
- (BOOL)isShortVideoToolbarUIStyleFitBounds;
- (BOOL)isShortVideoToolbarUIStyle16To9;
- (void)onClickEditVideoBackBarButton;
- (id /* block */)onWillClickEditVideoDoneBarButton;
- (void)onClickEditVideoDoneBarButton;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)onWCEditVideoViewControllerLongVideoWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerPostFinderDidCancel;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewController:(id)arg1 currentVC:(id)arg2 requestToLaunchMJAppWithScene:(unsigned long long)arg3 launchType:(long long)arg4 editTab:(long long)arg5 musicId:(id)arg6 exportedOpenWX:(int)arg7 launchCallback:(id /* block */)arg8;
- (void)onShortVideoTaken:(id)arg1 videoScoreParams:(id)arg2;
- (void)reportMultiMediaEditInfo;
- (void)startBGMPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)cameraTemplatePanelDidSelectItem:(id)arg1 atIndex:(unsigned long long)arg2 inPanel:(id)arg3;
- (void)preloadMJTemplateResourceWithCurrentIndexIfNeeded:(unsigned long long)arg1;
- (id)cameraEffectPanelGetReportObj;
- (void)cameraTemplatePanelDataDidChange:(id)arg1;
- (void)cameraTemplatePanelFetchDataDidFail:(id)arg1;
- (void)MMCameraTouchEventView:(id)arg1 didReceiveTouchEventWithState:(unsigned long long)arg2 touches:(id)arg3 event:(id)arg4;
- (void)onShootingModeChanged:(unsigned long long)arg1;
- (void)onSightBeautyOperationPanelClose:(BOOL)arg1;
- (void)onSightBeautyOperationPanelSelected:(BOOL)arg1;
- (void)onSightBeautyOperationPanelSetBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)setOthersHidden:(BOOL)arg1;
- (void)onBeginQuickReplyMsg;
- (void)onFinishQuickReplyMsg;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (void)_releaseAudioModule;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)finderTemplateMuiscViewDidClickCloseBtn;
- (void)finderTemplateMuiscViewDidClickOstBtn;
- (void)finderTemplateMuiscViewDidClickMusic;
- (void)finderTemplateMuiscViewDidChangeToANewIndex:(unsigned long long)arg1;
- (unsigned long long)musicCount;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (int)cameraState;
- (BOOL)active;
- (double)topPosition;
- (void)setTopPosition:(double)arg1;
- (BOOL)draggable;
- (void)setDraggable:(BOOL)arg1;
- (BOOL)isShowingPreview;
- (void)setIsShowingPreview:(BOOL)arg1;
- (BOOL)isAutoConfirm;
- (void)setIsAutoConfirm:(BOOL)arg1;
- (id)finishButtonWording;
- (void)setFinishButtonWording:(id)arg1;
- (id)delegate;
- (id)m_cameraPreviewView;
- (void)setM_cameraPreviewView:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (BOOL)isForbiddenAnimation;
- (void)setIsForbiddenAnimation:(BOOL)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (int)recordState;
- (int)btnState;
- (unsigned long long)camSwitchTiming;
- (void)setCamSwitchTiming:(unsigned long long)arg1;
- (unsigned int)m_currWriterID;
- (void)setM_currWriterID:(unsigned int)arg1;
- (BOOL)m_writerTimeout;
- (void)setM_writerTimeout:(BOOL)arg1;
- (BOOL)m_cameraOpened;
- (void)setM_cameraOpened:(BOOL)arg1;
- (id)m_tipsView;
- (void)setM_tipsView:(id)arg1;
- (id)m_cancelTips;
- (void)setM_cancelTips:(id)arg1;
- (id)m_circleProgress;
- (void)setM_circleProgress:(id)arg1;
- (unsigned int)m_tipsCounter;
- (void)setM_tipsCounter:(unsigned int)arg1;
- (id)m_maskWindow;
- (void)setM_maskWindow:(id)arg1;
- (id)m_resultPreviewView;
- (void)setM_resultPreviewView:(id)arg1;
- (id)m_hideBarBtn;
- (void)setM_hideBarBtn:(id)arg1;
- (id)m_hideBarBtnImageView;
- (void)setM_hideBarBtnImageView:(id)arg1;
- (void)setM_albumBtn:(id)arg1;
- (id)m_beautyBtn;
- (void)setM_beautyBtn:(id)arg1;
- (double)m_lastZoomScale;
- (void)setM_lastZoomScale:(double)arg1;
- (id)m_toolBar;
- (void)setM_toolBar:(id)arg1;
- (BOOL)m_shouldContinueRecording;
- (void)setM_shouldContinueRecording:(BOOL)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_preView;
- (void)setM_preView:(id)arg1;
- (id)m_panOpererView;
- (void)setM_panOpererView:(id)arg1;
- (id)topMaskGradientLayer;
- (void)setTopMaskGradientLayer:(id)arg1;
- (id)bottomMaskGradientLayer;
- (void)setBottomMaskGradientLayer:(id)arg1;
- (BOOL)m_isTakingPicture;
- (id)m_originalImage;
- (void)setM_originalImage:(id)arg1;
- (id)m_waitingSendImage;
- (void)setM_waitingSendImage:(id)arg1;
- (id)m_editImageAttr;
- (void)setM_editImageAttr:(id)arg1;
- (id)m_editImageInitialView;
- (void)setM_editImageInitialView:(id)arg1;
- (id)m_loadingView;
- (void)setM_loadingView:(id)arg1;
- (unsigned long long)m_scene;
- (void)setM_scene:(unsigned long long)arg1;
- (void)setM_statChatUserName:(id)arg1;
- (id)m_editVideoLogicItem;
- (void)setM_editVideoLogicItem:(id)arg1;
- (id)m_videoPath;
- (void)setM_videoPath:(id)arg1;
- (id)m_waitingSendVideoPath;
- (void)setM_waitingSendVideoPath:(id)arg1;
- (id)m_thumbImage;
- (void)setM_thumbImage:(id)arg1;
- (id)m_cropperVC;
- (void)setM_cropperVC:(id)arg1;
- (BOOL)showTipsReady;
- (void)setShowTipsReady:(BOOL)arg1;
- (id)shortVideoModel;
- (void)setShortVideoModel:(id)arg1;
- (void)setBeautySelectedView:(id)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (void)setBgmPlayer:(id)arg1;
- (void)setAudioPermissionTipsBtn:(id)arg1;
- (void)setBeautyOperationPanel:(id)arg1;
- (double)currentTemplateMaxRecordingDuration;
- (void)setCurrentTemplateMaxRecordingDuration:(double)arg1;
- (id)cameraTemplateReportObj;
- (void)setCameraTemplateReportObj:(id)arg1;
- (id)recordingResultTraits;
- (void)setRecordingResultTraits:(id)arg1;
- (BOOL)onlyShowTemplateSelectedView;
- (void)setOnlyShowTemplateSelectedView:(BOOL)arg1;
- (BOOL)canRelayoutSubviews;
- (void)setCanRelayoutSubviews:(BOOL)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setFlashTipsLabel:(id)arg1;
- (void)setSwitchButton:(id)arg1;
- (id)optionAreaView;
- (void)setOptionAreaView:(id)arg1;
- (id)optionManager;
- (void)setOptionManager:(id)arg1;
- (id)proModeTopBarView;
- (void)setProModeTopBarView:(id)arg1;
- (id)finderTemplatePanel;
- (void)setFinderTemplatePanel:(id)arg1;
- (id)shootingModeSwitchView;
- (void)setShootingModeSwitchView:(id)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)musicSelectView;
- (void)setMusicSelectView:(id)arg1;
- (id)patMusicTopView;
- (void)setPatMusicTopView:(id)arg1;
- (id)templateMusics;
- (void)setTemplateMusics:(id)arg1;
- (unsigned long long)btnTemplateState;
- (void)setBtnTemplateState:(unsigned long long)arg1;
- (BOOL)hasShowTempalteModeSwitchTips;
- (void)setHasShowTempalteModeSwitchTips:(BOOL)arg1;
- (id)currentTemplateParams;
- (void)setCurrentTemplateParams:(id)arg1;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (id)toolbarLeftBtn;
- (void)setToolbarLeftBtn:(id)arg1;
- (id)toolbarRightBtn;
- (void)setToolbarRightBtn:(id)arg1;
- (id)voiceOverTapInRecordBtn;
- (void)setVoiceOverTapInRecordBtn:(id)arg1;
- (id)voiceOverLongPressInRecordBtn;
- (void)setVoiceOverLongPressInRecordBtn:(id)arg1;
- (void).cxx_destruct;
@end
