@interface MJShootComposingView : MMUIView <MJShootVisagePanelViewControllerDelegate, MJShootFavTemplateEntranceViewDelegate, WCEditImageViewControllerDelegate, WCFinderTemplateMusicSelectEntranceViewDelegate, MMBGMSelectHalfScreenViewControllerDelegate, MJComposingBGMAdjustHalfScreenViewControllerDelegate, MJShootingMusicPickingViewModelDelegate, MJMusicCapsuleViewDelegate, MonoServiceLogicExt, QuickReplyMsgExt, MJShootMakeupInspectorDelegate, UIGestureRecognizerDelegate, MMCameraTouchEventViewDelegate, MJShootFilterInspectorDelegate, MJShootFaceEffectInspectorDelegate, MJShootFaceGenderSwitchDelegate, MJShootCountdownTimerSwitchDelegate, MJShootRecordingTimerSwitchDelegate, MJShootFillInLightSwitchDelegate, MJShootBubbleSwitchTouchCaptureViewDelegate, MJBubbleTouchCaptureViewDelegate, MJShootBeautyInspectorDelegate, MJShootBeautyMainPanelViewDelegate, MJShootChangeBackgroundViewDelegate, MJComposingBGMAdjustHalfScreenViewControllerDelegate, MJShootAIGCAsyncGenerationStateBarDelegate, MJShootComposingViewModelDelegate, MJShootComposingRecordButtonDelegate, MJShootSideToolbarDelegate, MJShootComposingTemplateListViewDelegate, MJShootAlbumEntryViewDelegate>
{
    BOOL _isTakingPicture; // +0x8
    BOOL _hasStorylineEdited; // +0x9
    BOOL _onlyShowTemplateSelectedView; // +0xa
    BOOL _hasShowTempalteModeSwitchTips; // +0xb
    BOOL _hasShownMicMutedToast; // +0xc
    BOOL _isInTemplateShootingMode; // +0xd
    BOOL _isPinching; // +0xe
    BOOL _isFocusing; // +0xf
    BOOL _isPickerEditingEnabled; // +0x10
    BOOL _isCurrentTemplateSupportAssetGenerated; // +0x11
    BOOL _isEaseOutingBlurMaskView; // +0x12
    BOOL _isNotchScreen; // +0x13
    float _videoDuration; // +0x14
    int _bubbleViewAppearCount; // +0x18
    double _topPosition; // +0x20
    id <MJShootComposingViewDelegate> _delegate; // +0x28
    EditVideoAttr * _editVideoAttr; // +0x30
    MJShootComposingViewModel * _viewModel; // +0x38
    MJShootComposingTemplatePanelHalfScreenViewController * _templatePanelHalfScreenVC; // +0x40
    MJComposingBGMAdjustHalfScreenViewController * _bgmAdjustHalfScreenVC; // +0x48
    MJShootVisagePanelViewController * _visagePanelVC; // +0x50
    UIView * _renderView; // +0x58
    double _videoZoomFactor; // +0x60
    UIView * _contentView; // +0x68
    MMCameraTouchEventView * _panOpererView; // +0x70
    CAGradientLayer * _topMaskGradientLayer; // +0x78
    CAGradientLayer * _bottomMaskGradientLayer; // +0x80
    UIImage * _originalImage; // +0x88
    NSData * _originalImageData; // +0x90
    UIImage * _waitingSendImage; // +0x98
    EditImageAttr * _editImageAttr; // +0xa0
    MMLoadingView * _loadingView; // +0xa8
    NSString * _videoPath; // +0xb0
    NSString * _captureImageFilePath; // +0xb8
    NSString * _waitingSendVideoPath; // +0xc0
    UIImage * _thumbImage; // +0xc8
    MMShortVideoParamModel * _shortVideoModel; // +0xd0
    MMUIButton * _audioPermissionTipsBtn; // +0xd8
    double _currentTemplateMaxRecordingDuration; // +0xe0
    MJCameraTemplateReportObject * _cameraTemplateReportObj; // +0xe8
    OMJRecordingResultTraits * _recordingResultTraits; // +0xf0
    UIImage * _recordingCoverImage; // +0xf8
    UIImage * _recordingCroppedCoverImage; // +0x100
    NSString * _storylineMediaFilePath; // +0x108
    MMUIButton * _closeButton; // +0x110
    MMUILabel * _flashTipsLabel; // +0x118
    MJMusicCapsuleView * _musicEntranceView; // +0x120
    WCShortVideoToolBarInitParams * _params; // +0x128
    MMBGMSelectHalfScreenViewController * _musicPickingVC; // +0x130
    MJCamChangeTemplateParams * _currentTemplateParams; // +0x138
    MJShootToastManager * _shootToastManager; // +0x140
    MMUIView * _bottomMenuBar; // +0x148
    MMUIButton * _cameraSwitchButton; // +0x150
    MJShootSideToolbar * _sideToolbar; // +0x158
    MJShootFavTemplateEntranceView * _favTemplateEntranceView; // +0x160
    MJShootComposingTemplateListView * _templateListView; // +0x168
    MMUIView * _photoLibraryEntryView; // +0x170
    MMUIView * _moreShootTemplatesEntryView; // +0x178
    MJShootFilterInspector * _filterInspector; // +0x180
    MJShootBeautyInspector * _beautyInspector; // +0x188
    MJShootMakeupInspector * _makeupInspector; // +0x190
    MJShootFaceEffectInspector * _faceEffectInspector; // +0x198
    MJShootBeautyMainPanelView * _beautyMainPanelView; // +0x1a0
    MMUILabel * _recordDurationLabel; // +0x1a8
    MMUIView * _captureBtnSmall; // +0x1b0
    long long _currentOrientation; // +0x1b8
    unsigned long long _postEditingEnterTime; // +0x1c0
    unsigned long long _camEffectInspectorMode; // +0x1c8
    NSString * _duetShootingSourceVideoFilePath; // +0x1d0
    MJPublisherBubbleView * _bubbleView; // +0x1d8
    MMTimer * _bubbleTimer; // +0x1e0
    MJBubbleTouchCaptureView * _bubbleTouchCaptureView; // +0x1e8
    double _lastFrameTimeRecorded; // +0x1f0
    OMJCamGestureRecognizerSettings * _templateGRSettings; // +0x1f8
    MMTimer * _fakeRecordingTimerForAIGC; // +0x200
    double _fakeRecordingDurationForAIGC; // +0x208
    MMUIButton * _exitButton; // +0x210
    MMUIButton * _completeButton; // +0x218
    MMUIButton * _clipButton; // +0x220
    UIStackView * _bottomButtonsContainer; // +0x228
    MMUIView * _blackBGView; // +0x230
    MJShootAlbumEntryView * _albumEntryViewForShoot; // +0x238
    MJShootAlbumEntryView * _albumEntryViewForShootSmall; // +0x240
    NSString * _pickerBottomTips; // +0x248
    MJShootFaceGenderSwitch * _faceGenderSwitch; // +0x250
    MJShootCountdownTimerSwitch * _countdownTimerSwitch; // +0x258
    MJShootRecordingTimerSwitch * _recordingTimerSwitch; // +0x260
    MJShootFillInLightSwitch * _fillInLightSwitch; // +0x268
    MJShootBubbleSwitchTouchCaptureView * _bubbleSwitchTouchCaptureView; // +0x270
    MJShootCountdownView * _countdownView; // +0x278
    MMUIButton * _returnButtonForVoiceOver; // +0x280
    MMUIButton * _returnButtonForPageSheetVoiceOver; // +0x288
    MJAIAssetProcessor * _aiAssetProcessor; // +0x290
    OMJAIGCParams * _aiGCParams; // +0x298
    UIVisualEffectView * _maskBlurBGView; // +0x2a0
    UIImageView * _snapShotView; // +0x2a8
    UIImage * _initialCaptureSnapshot; // +0x2b0
    double _currentScreenBrightness; // +0x2b8
    UIView * _fillinLightBrightLayer; // +0x2c0
    MJShootComposingRecordButton * _recordButton; // +0x2c8
    MJShootFocusView * _focusView; // +0x2d0
    UIView * _dragControlForTemplatePanel; // +0x2d8
    MMUILabel * _shootTipLabelForRedPacket; // +0x2e0
    MMTimer * _lightIntensityDetectTimer; // +0x2e8
    MJShootChangeBackgroundView * _changeBackgroundView; // +0x2f0
    MMUIButton * _cancelRecordingButton; // +0x2f8
    MJShootAIGCAsyncGenerationStateBar * _aigcAsyncGenerationStateBar; // +0x300
    WCActionSheet * _aigcAsyncActionSheet; // +0x308
    WeToast * _templateSwitchLoadingToast; // +0x310
    MJShootTemplateLoadingView * _fullScreenTemplateLoadingView; // +0x318
}
+ (id)createVisagePanelViewModel;
+ (id)createCharSetForLyricPostproc;
+ (void)postprocessMusicDesc:(id)arg1;
+ (id)postEnterSceneKey;
- (BOOL)isShowingVisagePanel;
- (void)showVisagePanel;
- (void)dismissVisagePanel;
- (void)enterVisagePanelShowingMode;
- (void)setupViewsForShowingVisagePanel;
- (void)leaveVisagePanelShowingMode;
- (void)setupViewsForDismissingVisagePanel;
- (void)shootVisagePanelViewControllerWillClose:(BOOL)arg1;
- (void)shootVisagePanelViewController:(id)arg1 didSelectItemWithType:(unsigned long long)arg2;
- (void)didTapOnVisageInShootSideToolBar:(id)arg1;
- (void)addExitButtonForVisageIfNeeded;
- (void)removeExitButtonForVisageIfNeeded;
- (void)showTemplatePanelHalfScreenViewControllerWithDelay:(double)arg1;
- (void)dismissTemplatePanelHalfScreenViewController;
- (void)shootTemplatePanelHalfScreenViewControllerWillClose:(BOOL)arg1;
- (void)shootTemplatePanelHalfScreenViewControllerDidClose:(BOOL)arg1;
- (void)shootTemplatePanelHalfScreenViewControllerDidChangeContentHeight:(double)arg1;
- (void)shootTemplatePanelHalfScreenViewControllerDidSelectItem:(id)arg1 tabID:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)shootTemplatePanelHalfScreenViewControllerWillDisplayTemplateItem:(id)arg1 tabID:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 isReloadingData:(BOOL)arg4;
- (void)shootTemplatePanelHalfScreenViewControllerDidEndDisplayingTemplateItem:(id)arg1 tabID:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 isReloadingData:(BOOL)arg4;
- (void)shootTemplatePanelHalfScreenViewControllerDidSelectTab:(unsigned long long)arg1;
- (void)enterTemplatePanelShowingMode;
- (void)enterTemplatePanelShowingModeInternal;
- (void)handleDragCloseTemplatePanelAction;
- (void)exitTemplatePanelShowingMode;
- (void)captureBtnSmallDidTouchUpInside:(id)arg1;
- (void)addExitButtonForTemplatePanelIfNeeded;
- (void)removeExitButtonForTemplatePanelIfNeeded;
- (void)setupFavTemplateEntrance;
- (void)updateFavTemplateEntranceLayout:(BOOL)arg1;
- (void)favTemplateEntranceView:(id)arg1 didTapOnFavButton:(BOOL)arg2;
- (void)favTemplateEntranceViewDidTapOnAuthorContainerButton:(id)arg1;
- (void)updateFullScreenTemplateLoadingViewWithTemplateID:(id)arg1 progress:(float)arg2;
- (void)removeFullScreenTemplateLoadingViewIfNeeded;
- (void)showFullScreenTemplateLoadingViewWithTemplateID:(id)arg1;
- (void)updateTemplateLoadingRelativeViewsAppearanceWithUserEnabled:(BOOL)arg1;
- (void)setupSideToolbar;
- (void)shootSideToolBar:(id)arg1 didUpdateWithIsBackgroundOn:(BOOL)arg2;
- (void)shootSideToolBar:(id)arg1 didUpdateWithIsDuetShootOn:(BOOL)arg2;
- (void)didTapOnSwitchCameraInShootSideToolBar:(id)arg1;
- (void)didTapOnReplayInShootSideToolBar:(id)arg1;
- (void)switchCamera;
- (void)updateCameraAccessibility;
- (void)updateCameraAccessibilityWithPosition:(long long)arg1;
- (void)handleMicUpdateActionWithIsMicMuted:(BOOL)arg1;
- (void)handleOSTStatusDidChangeActionWithOSTEnabled:(BOOL)arg1;
- (void)removeCancelRecordingButton;
- (void)onRecordDidCancel;
- (void)onRecordDidFinishWithError:(id)arg1;
- (void)onRecordDidFinishWithInfo:(id)arg1;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2 fromTemplate:(BOOL)arg3;
- (void)showMJMovieComposingViewControllerWhenRecordingDidFinishWithFilePath:(id)arg1 originalAsset:(id)arg2;
- (void)showMJMovieComposingViewControllerWhenCaptureDidFinishWithImage:(id)arg1 imageData:(id)arg2;
- (void)showMJMovieComposingViewControllerWithAssetInfo:(id)arg1 originalAsset:(id)arg2 shouldReset:(BOOL)arg3;
- (void)showMJMovieComposingViewControllerForDraftWithViewModel:(id)arg1 shouldReset:(BOOL)arg2;
- (void)setupTransitionContentImageViewWithMovieComposingVC:(id)arg1;
- (void)didPreparePresentMovieComposingViewController;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)setupShootCoverImageStartTimeWithUserInfo:(id)arg1;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)onTakenPicture:(id)arg1 imageData:(id)arg2;
- (void)showShootPlayerVCWithResponseInfo:(id)arg1 thumbImage:(id)arg2;
- (void)showShootPlayerVCWithCapturedImage:(id)arg1 imageData:(id)arg2;
- (void)_presentShootPlayerVCWithResponseInfo:(id)arg1;
- (void)shootPlayerViewControllerDidCancel:(id)arg1;
- (void)shootPlayerViewController:(id)arg1 didFinishWithResponseInfo:(id)arg2;
- (void)handleEditingVideoDidFinishActionWithInfo:(id)arg1 editor:(id)arg2 isFromDraft:(BOOL)arg3 hasMutation:(BOOL)arg4 userInfo:(id)arg5;
- (id)_genMultiRecordInfo;
- (id)rotateImageIfNeeded:(id)arg1 orientation:(long long)arg2 isFrontCamera:(BOOL)arg3;
- (void)showPreviewViewWithImage:(id)arg1 imageData:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (int)sightCaptureScene2ImagePickerScene;
- (void)initFinderMusicUI;
- (void)didUpdateCaptionOnState:(BOOL)arg1;
- (void)shootSideToolBar:(id)arg1 didUpdateWithIsCaptionOn:(BOOL)arg2;
- (void)shootSideToolBarDidShowCaptionButton:(id)arg1;
- (void)musicCapsuleViewDidClick:(id)arg1;
- (void)disableMusicInCapsuleView:(id)arg1;
- (void)musicCapsuleView:(id)arg1 didUpdateWithIsMicMuted:(BOOL)arg2;
- (void)manualSetPickingVCMusicOn:(BOOL)arg1;
- (void)showMusicPickerVC;
- (void)showMusicPickerForFavMusicEntry;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)bgmSelectedViewControllerWillStartPlayingVideo:(id)arg1;
- (void)bgmSelectedViewControllerWillStopPlayingVideo:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didEditMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4;
- (void)playMusicWithFileURL:(id)arg1 musicInfo:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4;
- (void)updateShootMusicReportInfoByMusicId:(id)arg1 musicData:(id)arg2 bgmItemType:(int)arg3 atTabIndex:(unsigned long long)arg4 index:(unsigned long long)arg5;
- (void)requestLyricForCurrentMusicInfo;
- (void)handleRequestLyricSuccessWithMusicDesc:(id)arg1;
- (void)handleRequestLyricFailedWithError:(id)arg1;
- (void)musicPickingViewModelDidFetchRecommendedMusic:(id)arg1;
- (void)musicPickingViewModelDidFetchBGMFavMusic:(id)arg1;
- (void)musicPickingViewModel:(id)arg1 didUpdateCurrentMusicInfo:(id)arg2;
- (void)updateMusicEntranceViewWithCurrentMusicInfo;
- (void)updateFinderMusicUIAfterUseTemplate:(BOOL)arg1;
- (void)playCurrentMusicAfterClearTemplateIfNeeded;
- (void)handleDidSelectMusicInfo:(id)arg1 musicEnable:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)camMusicDescWithMusicID:(id)arg1 localFilePath:(id)arg2;
- (id)camMusicDescWithMusicID:(id)arg1 localFilePath:(id)arg2 startTime:(struct)arg3 duration:(struct)arg4;
- (void)switchMusicEntryViewToMusicSelectedStateWithInfo:(id)arg1;
- (void)switchMusicEntryViewToMusicUnSelectedState;
- (BOOL)shouldHandleBGMSelectedVCSelectedMusicAction;
- (void)showMusicPickerVCWhenPlayMusicInApp;
- (void)showMusicPickerForFavMusicEntryWhenPlayMusicInApp;
- (void)disableMusicInCapsuleViewWhenPlayMusicInApp:(id)arg1;
- (void)playMusicInAppWithBGMSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)playMusicInAppWithBGMSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (void)playMusicInAppWithBGMSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)playMusicInAppWithBGMSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)playMusicInAppWithBGMSelectedViewControllerWillClose:(id)arg1;
- (void)playMusicInAppWithBGMSelectedViewControllerDidClose:(id)arg1;
- (void)playMusicInAppWithBGMSelectedViewControllerWillStartPlayingVideo:(id)arg1;
- (void)playMusicInAppWithBGMSelectedViewControllerWillStopPlayingVideo:(id)arg1;
- (void)playMusicInAppWithBGMSelectedViewController:(id)arg1 didEditMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4;
- (void)_playMusicInAppWithFileURL:(id)arg1 musicData:(id)arg2 musicInfo:(id)arg3 atTabIndex:(unsigned long long)arg4 index:(unsigned long long)arg5;
- (void)_getMusicFilePathDownloadedBySDKWithMusicInfo:(id)arg1 musicData:(id)arg2 completion:(id /* block */)arg3;
- (void)applyMusicInfoToCamoSession:(id)arg1 musicEnable:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateMusicEntryViewWithResultMusic:(id)arg1;
- (void)stopPlayingMusicInApp;
- (void)resumePlayingMusicInApp;
- (void)onBeginQuickReplyMsg;
- (void)onFinishQuickReplyMsg;
- (void)onShowQuickReplyAtSession:(id)arg1 message:(id)arg2;
- (void)dismissForVOIPEvents;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)enterCamEffectInspectorModeMakeup;
- (void)exitCamEffectInspectorModeMakeup;
- (void)showMakeupInspector;
- (void)dismissMakeupInspector;
- (void)shootMakeupInspectorDidCancel:(id)arg1;
- (void)addExitButtonForMakeupIfNeeded;
- (void)removeExitButtonForMakeupIfNeeded;
- (void)setupGestures;
- (void)handleTapGesture:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePanPreview:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)configGestureRecognizerEnableAfterClearTemplate;
- (void)forceEnabledGestureRecognizers;
- (void)configGestureRecognizerEnableAfterUseTemplate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)canRecognizePanGesture:(id)arg1;
- (void)MMCameraTouchEventView:(id)arg1 didReceiveTouchEventWithState:(unsigned long long)arg2 touches:(id)arg3 event:(id)arg4;
- (BOOL)exitCamEffectInspectorModeIfNeeded;
- (void)focusCaptureDeviceAtPoint:(CGPoint)arg1;
- (void)focusCenter;
- (void)removeFocusView;
- (void)setFinderPostEnterScene:(unsigned long long)arg1;
- (unsigned long long)finderPostEnterScene;
- (void)exitCamEffectInspectorModeFilter;
- (void)enterCamEffectInspectorModeFilter;
- (void)showFilterInspector;
- (void)dismissFilterInspector;
- (void)shootFilterInspectorDidCancel:(id)arg1;
- (void)addExitButtonForFilterIfNeeded;
- (void)removeExitButtonForFilterIfNeeded;
- (void)startAutoDetectLightIntensity;
- (void)finishAutoDetectLightIntensity;
- (void)_lightIntensityDetectTimerDidUpdate;
- (void)turnOnFillInLight;
- (void)turnOnFillInLightForFrontCamera;
- (void)turnOnFillInLightForBackCamera;
- (void)_illuminateScreen;
- (void)_addIlluminateLayerIfNeeded;
- (void)addHollowEffectInFillInLightLayer;
- (void)turnOffFillInLight;
- (void)_resetScreenBrightness;
- (void)_removeIlluminateLayerIfNeeded;
- (void)updateFillInLightStateWhenCameraSwitchToPosition:(long long)arg1;
- (void)_turnOnFillInLightWithPosition:(long long)arg1;
- (void)resumeFillInLightState;
- (void)enterCamEffectInspectorModeFaceEffect;
- (void)exitCamEffectInspectorModeFaceEffect;
- (void)showFaceEffectInspector;
- (void)dismissFaceEffectInspector;
- (void)shootFaceEffectInspectorDidCancel:(id)arg1;
- (void)addExitButtonForFaceEffectIfNeeded;
- (void)removeExitButtonForFaceEffectIfNeeded;
- (BOOL)isShowingAnyBubbleSwitch;
- (void)dismissBubbleSwitches;
- (id)_getReportNameWithFaceGender:(long long)arg1;
- (void)faceGenderSwitch:(id)arg1 didSwitchToGender:(long long)arg2;
- (id)_getReportNameWithCountdownTimerMode:(unsigned long long)arg1;
- (void)countdownTimerSwitch:(id)arg1 didSwitchToMode:(unsigned long long)arg2;
- (id)_getReportNameWithRecordingTimerMode:(unsigned long long)arg1;
- (void)recordingTimerSwitch:(id)arg1 didSwitchToMode:(unsigned long long)arg2;
- (void)didTapOnSwitchGenderInShootSideToolBar:(id)arg1;
- (void)shootSideToolBarDidHideFaceGenderButton:(id)arg1;
- (void)didTapOnSwitchCountdownTimerInShootSideToolBar:(id)arg1;
- (void)shootSideToolBarDidHideCountdownTimerButton:(id)arg1;
- (void)didTapOnSwitchRecordingTimerInShootSideToolBar:(id)arg1;
- (void)shootSideToolBarDidHideRecordingTimerButton:(id)arg1;
- (void)didTapOnFillInlightInShootSideToolBar:(id)arg1;
- (void)shootSideToolBarDidHideFillinLightButton:(id)arg1;
- (void)didTouchInShootBubbleSwitchTouchCaptureView:(id)arg1;
- (BOOL)isShowingFaceGenderSwitch;
- (void)showFaceGenderSwitch;
- (void)dismissFaceGenderSwitch;
- (BOOL)isShowingCountdownTimerSwitch;
- (void)showCountdownTimerSwitch;
- (void)dismissCountdownTimerSwitch;
- (BOOL)isShowingRecordingTimerSwitch;
- (void)showRecordingTimerSwitch;
- (void)dismissRecordingTimerSwitch;
- (void)showBubbleSwitch:(id)arg1 centeredWithButton:(id)arg2;
- (void)dismissBubbleSwitch:(id)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)isShowingFillInlightSwich;
- (void)showFillInlightSwitch;
- (void)dismissFillInlightSwitch;
- (void)fillInLightSwitch:(id)arg1 didSwitchToMode:(unsigned long long)arg2;
- (void)showBubbleViewIfNeeded;
- (void)dismissBubbleView;
- (void)startBubbleTimer;
- (void)didTouchInBubbleTouchCaptureView;
- (void)easeInBlurMaskEffect;
- (void)easeInBlurMaskEffectWithShouldSnapShot:(BOOL)arg1;
- (void)easeOutBlurMaskEffectWithDelay:(double)arg1;
- (void)easeOutBlurMaskEffectWithDelay:(double)arg1 completion:(id /* block */)arg2;
- (void)exitCamEffectInspectorModeBeauty;
- (void)enterCamEffectInspectorModeBeauty;
- (void)showBeautyMainPanel;
- (void)dismissBeautyMainPanel;
- (void)showBeautyInspector;
- (void)dismissBeautyInspector;
- (void)shootBeautyMainPanelViewDidCancel:(id)arg1;
- (void)shootBeautyMainPanelViewDidSelectEdit:(id)arg1;
- (void)shootBeautyInspectorDidCancel:(id)arg1;
- (void)addExitButtonForBeautyIfNeeded;
- (void)removeExitButtonForBeautyIfNeeded;
- (void)showBackgroundOperateBar;
- (void)removeBackgroundOperateBar;
- (void)turnOnBackgroundReplace;
- (void)turnOffBackgroundReplace;
- (void)removeBackground;
- (void)blurBackground;
- (void)updateBackgroundWithAssetInfo:(id)arg1;
- (void)resumeBackgroundState;
- (void)didTapOnChangeButtonInShootChangeBackgroundView:(id)arg1;
- (void)didTapOnDeleteButtonInShootChangeBackgroundView:(id)arg1;
- (void)showBGMAdjustPanelVC;
- (void)bindBGMAdjustment;
- (void)syncBGMVolume:(float)arg1;
- (void)didUpdateLyricShowingState:(BOOL)arg1;
- (void)composingBGMAdjustPanelHalfScreenViewControllerWillClose:(BOOL)arg1;
- (void)composingBGMAdjustPanelHalfScreenViewControllerDidClose:(BOOL)arg1;
- (void)composingBGMAdjustPanelHalfScreenViewControllerDidChangeContentHeight:(double)arg1;
- (BOOL)showAIGCAlertViewIfNeeded;
- (void)showAIGCAlertView;
- (void)userDidDisagreeAIGCContent;
- (void)userDidAgreeAIGCContent;
- (id)aigcAlertKey;
- (void)didRecevieAIResultFromServerTimeout;
- (void)_handleAIGCFinishActionInApp;
- (void)startFakeRecordingTimerForAIGC;
- (void)resetFakeRecordingTimerForAIGC;
- (void)fakeRecordingTimerDidUpdate;
- (void)didStartAIGCInMaasSDK;
- (void)didAIGCSucceedInMaasSDK;
- (void)didAIGCFailedInMaasSDKWithError:(id)arg1;
- (void)_handleAIGCFinishActionInMaasSDKWithError:(id)arg1;
- (id)_handleSDKAIGCError:(id)arg1;
- (void)showAIGCFailedToast;
- (void)showAIGCRejectedToast;
- (void)showAIGCTimeoutToast;
- (void)showAIGCInsecurityToast;
- (void)showAIGCAsyncGenerationStateBar;
- (void)removeAIGCAsyncGenerationStateBar;
- (void)showAIGCAsyncGenerationCancelAlert;
- (void)_didCallOffCurrentAIGCAsyncGenerating;
- (void)aigcAsyncGenerationStateBarDidClickNotifyButton:(id)arg1;
- (void)_didLeaveShootComposingOnAIGCAsyncGenerating;
- (void)registerAIGCAsyncNotifications;
- (void)unregisterAIGCAsyncNotifications;
- (void)_handleAIGCAsyncDidRecevieCreationResponseNoti:(id)arg1;
- (void)_handleAIGCAsyncDidRecevieQueryResponseNoti:(id)arg1;
- (void)removeAIGCAsyncActionSheetIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)registerWeChatEXTENSION;
- (void)unRegisterWeChatEXTENSION;
- (void)setupView;
- (void)setupContentView;
- (void)setupCloseButton;
- (void)setupBottomMenuBar;
- (void)setupRecordButton;
- (BOOL)shouldShowMoreTemplateEntry;
- (BOOL)shouldShowMovieAlbumEntry;
- (void)setupPhotoLibraryEntryView;
- (void)setupMoreShootTemplatesEntryViewEntryView;
- (void)setupPickerAssetsGenerateShootEffectEntryView;
- (void)bindViews;
- (void)shootComposingViewModel:(id)arg1 audioModuleInterruptionBegin:(id)arg2 param:(id)arg3;
- (void)shootComposingViewModel:(id)arg1 recordingDidFail:(id)arg2;
- (void)shootComposingViewModel:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)shootComposingViewModel:(id)arg1 needRequestAIGC:(id)arg2;
- (void)shootComposingViewModelOnAIGCProcessStarted:(id)arg1;
- (void)shootComposingViewModelOnAIGCProcessSucceed:(id)arg1;
- (void)shootComposingViewModel:(id)arg1 onAIGCProcessFailed:(id)arg2;
- (void)shootComposingViewModelDidPresentFirstFrame:(id)arg1;
- (void)shootComposingViewModel:(id)arg1 didPresentFirstFrameAfterSwitchTemplate:(id)arg2;
- (void)shootComposingViewModelWillStartSwitchCamera:(id)arg1 isTemplateSwitched:(BOOL)arg2;
- (void)shootComposingViewModelDidFinishSwitchCamera:(id)arg1;
- (void)shootComposingViewModelDidTimeoutSwitchCamera:(id)arg1 taskID:(id)arg2;
- (void)didFinishScreenshotOnRenderView;
- (void)_easeOutBlurMaskEffectIfNeededWhenReverseCameraWithSwitchTemplate;
- (void)_easeOutBlurMaskEffectIfNeededWhenReverseCameraWithoutSwitchTemplate;
- (void)_resetReverseCameraResult;
- (void)didClickOnAlbumEntryViewForShoot:(id)arg1;
- (void)resetCaptureButtonState;
- (BOOL)enablePhoto;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (void)startComposingInAuthorizedState;
- (void)_startPreviewingWithCompletionHandler:(id /* block */)arg1;
- (void)_startPreviewingWithShouldUseSpecifiedCamPosition:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)setupRenderView;
- (void)resumeComposingAfterCamoSessionTeardown;
- (void)resumeComposingAfterCamoSessionPaused;
- (void)resetValuesAfterResumePreview;
- (void)resetCameraConfigurations;
- (void)reportRestartPreviewingCurrentSelectedTemplate;
- (void)pauseComposingOnApplicationWillResignActive;
- (void)resumeComposingOnApplicationDidBecomeActive;
- (void)stopRecordingVideoIfNeeded;
- (void)startNormalLoadingWithText:(id)arg1 blocked:(BOOL)arg2;
- (id)genEditViewControllerUIConfigWithPortraitAsset:(BOOL)arg1;
- (id)genFinderTemplateInfoResultWithCheckSum:(id)arg1 userInfo:(id)arg2;
- (id)genFinderTemplateBindedEventParams;
- (id)getCurrentSelectedTemplateId;
- (id)getCurrentSelectedTemplateMusicId;
- (void)switchToTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)updateFavoriteStatusForTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)retryUpdateTemplateItemFavoriteStatus:(id)arg1 retryCount:(long long)arg2 maxRetryCount:(long long)arg3 retryDelay:(double)arg4 completion:(id /* block */)arg5;
- (void)switchToEmptyTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToEmptyTemplateAsDefaultLoadWithItem:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToNonEmptyTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)refetchFollowShootTemplateIfNeeded;
- (void)updateTemplateLoadProgress:(float)arg1;
- (void)showOrHideGenerateShootEffectEntryWithCurrentTemplate:(id)arg1;
- (id)buildCamTemplateOverridingParamsWithFilePath:(id)arg1;
- (void)switchToNonEmptyTemplateForDuetShootingWithItem:(id)arg1 completion:(id /* block */)arg2;
- (void)showSubviewsAfterCameraSessionStartupSucceed;
- (void)fetchUserLocationIfNeeded:(id)arg1;
- (id)currentViewController;
- (void)shootComposingTemplateListView:(id)arg1 didSelectTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 willDisplayTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didFirstTimeLoadingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)preloadMJTemplateResourceWithCurrentIndexIfNeeded:(unsigned long long)arg1;
- (void)shootComposingTemplateListViewDataDidChange:(id)arg1;
- (void)shootComposingTemplateListViewFetchDataDidFail:(id)arg1;
- (void)shootComposingTemplateListViewFetchTargetTemplateFailed:(id)arg1;
- (void)shootComposingTemplateListView:(id)arg1 focusedTemplateItemDidChange:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)shouldUseEmptyTemplateAsDefaultInListView:(id)arg1;
- (void)deleteLocalCaptureImageFileIFNeeded;
- (void)showRecordingDurationLabel;
- (void)removeRecordingDurationLabel;
- (void)setIsPickerEditingEnabled:(BOOL)arg1;
- (CGSize)calculateRenderViewSize;
- (void)initFirstOrientation:(long long)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (id)flashTipsLabel;
- (void)startPhotographInRecordButton:(id)arg1;
- (void)startRecordingInRecordButton:(id)arg1;
- (void)startCountdownIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)stopRecordingInRecordButton:(id)arg1;
- (void)didStartRecording;
- (void)_startDetectRecordingDidReachedMaximumDurationWithRecordID:(id)arg1;
- (id)generateMJRecordingSettings;
- (void)didFinishRecordingWithType:(unsigned long long)arg1;
- (void)handleCancelRecordingButtonAction;
- (void)didCancelRecording;
- (void)resetRecordingState;
- (void)didStartPhotographing;
- (float)getRecordingMaximummDurationForTemplate;
- (double)getRecordingMaximummDurationForEmptyTemplate;
- (double)getRecordMinimumDurationInSeconds;
- (void)hideViewsOnVideoRecordingDidStart;
- (void)showViewsOnVideoRecordingDidCancel;
- (void)photoLibraryEntryButtonDidTouchUpInside:(id)arg1;
- (void)moreShootTemplatesEntryButtonDidTouchUpInside:(id)arg1;
- (void)setTemplateReleatedBtnUserInteractionEnabled:(BOOL)arg1;
- (void)delaySetTemplateReleatedUIInteractive:(BOOL)arg1;
- (void)delaySetTemplateReleatedUIInteractive:(BOOL)arg1 delayTime:(double)arg2;
- (void)showTemplateSwitchLoadingView;
- (void)removeTemplateSwitchLoadingView;
- (void)setCamEffectInspectorMode:(unsigned long long)arg1;
- (id)shootToastManager;
- (double)topPosition;
- (void)setTopPosition:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)viewModel;
- (id)templatePanelHalfScreenVC;
- (void)setTemplatePanelHalfScreenVC:(id)arg1;
- (id)bgmAdjustHalfScreenVC;
- (void)setBgmAdjustHalfScreenVC:(id)arg1;
- (id)visagePanelVC;
- (void)setVisagePanelVC:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (double)videoZoomFactor;
- (void)setVideoZoomFactor:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)panOpererView;
- (void)setPanOpererView:(id)arg1;
- (id)topMaskGradientLayer;
- (void)setTopMaskGradientLayer:(id)arg1;
- (id)bottomMaskGradientLayer;
- (void)setBottomMaskGradientLayer:(id)arg1;
- (BOOL)isTakingPicture;
- (void)setIsTakingPicture:(BOOL)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (id)originalImageData;
- (void)setOriginalImageData:(id)arg1;
- (id)waitingSendImage;
- (void)setWaitingSendImage:(id)arg1;
- (id)editImageAttr;
- (void)setEditImageAttr:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)captureImageFilePath;
- (void)setCaptureImageFilePath:(id)arg1;
- (id)waitingSendVideoPath;
- (void)setWaitingSendVideoPath:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)shortVideoModel;
- (void)setShortVideoModel:(id)arg1;
- (id)audioPermissionTipsBtn;
- (void)setAudioPermissionTipsBtn:(id)arg1;
- (double)currentTemplateMaxRecordingDuration;
- (void)setCurrentTemplateMaxRecordingDuration:(double)arg1;
- (id)cameraTemplateReportObj;
- (void)setCameraTemplateReportObj:(id)arg1;
- (id)recordingResultTraits;
- (void)setRecordingResultTraits:(id)arg1;
- (id)recordingCoverImage;
- (void)setRecordingCoverImage:(id)arg1;
- (id)recordingCroppedCoverImage;
- (void)setRecordingCroppedCoverImage:(id)arg1;
- (id)storylineMediaFilePath;
- (void)setStorylineMediaFilePath:(id)arg1;
- (BOOL)hasStorylineEdited;
- (void)setHasStorylineEdited:(BOOL)arg1;
- (BOOL)onlyShowTemplateSelectedView;
- (void)setOnlyShowTemplateSelectedView:(BOOL)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void)setFlashTipsLabel:(id)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)musicPickingVC;
- (void)setMusicPickingVC:(id)arg1;
- (BOOL)hasShowTempalteModeSwitchTips;
- (void)setHasShowTempalteModeSwitchTips:(BOOL)arg1;
- (id)currentTemplateParams;
- (void)setCurrentTemplateParams:(id)arg1;
- (void)setShootToastManager:(id)arg1;
- (BOOL)hasShownMicMutedToast;
- (void)setHasShownMicMutedToast:(BOOL)arg1;
- (id)bottomMenuBar;
- (void)setBottomMenuBar:(id)arg1;
- (id)cameraSwitchButton;
- (void)setCameraSwitchButton:(id)arg1;
- (id)sideToolbar;
- (void)setSideToolbar:(id)arg1;
- (id)favTemplateEntranceView;
- (void)setFavTemplateEntranceView:(id)arg1;
- (BOOL)isInTemplateShootingMode;
- (void)setIsInTemplateShootingMode:(BOOL)arg1;
- (id)templateListView;
- (void)setTemplateListView:(id)arg1;
- (id)photoLibraryEntryView;
- (void)setPhotoLibraryEntryView:(id)arg1;
- (id)moreShootTemplatesEntryView;
- (void)setMoreShootTemplatesEntryView:(id)arg1;
- (id)filterInspector;
- (void)setFilterInspector:(id)arg1;
- (id)beautyInspector;
- (void)setBeautyInspector:(id)arg1;
- (id)makeupInspector;
- (void)setMakeupInspector:(id)arg1;
- (id)faceEffectInspector;
- (void)setFaceEffectInspector:(id)arg1;
- (id)beautyMainPanelView;
- (void)setBeautyMainPanelView:(id)arg1;
- (id)recordDurationLabel;
- (void)setRecordDurationLabel:(id)arg1;
- (id)captureBtnSmall;
- (void)setCaptureBtnSmall:(id)arg1;
- (float)videoDuration;
- (void)setVideoDuration:(float)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (BOOL)isPinching;
- (void)setIsPinching:(BOOL)arg1;
- (BOOL)isFocusing;
- (void)setIsFocusing:(BOOL)arg1;
- (BOOL)isPickerEditingEnabled;
- (unsigned long long)postEditingEnterTime;
- (void)setPostEditingEnterTime:(unsigned long long)arg1;
- (unsigned long long)camEffectInspectorMode;
- (id)duetShootingSourceVideoFilePath;
- (void)setDuetShootingSourceVideoFilePath:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)bubbleTimer;
- (void)setBubbleTimer:(id)arg1;
- (id)bubbleTouchCaptureView;
- (void)setBubbleTouchCaptureView:(id)arg1;
- (int)bubbleViewAppearCount;
- (void)setBubbleViewAppearCount:(int)arg1;
- (double)lastFrameTimeRecorded;
- (void)setLastFrameTimeRecorded:(double)arg1;
- (id)templateGRSettings;
- (void)setTemplateGRSettings:(id)arg1;
- (id)fakeRecordingTimerForAIGC;
- (void)setFakeRecordingTimerForAIGC:(id)arg1;
- (double)fakeRecordingDurationForAIGC;
- (void)setFakeRecordingDurationForAIGC:(double)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)clipButton;
- (void)setClipButton:(id)arg1;
- (id)bottomButtonsContainer;
- (void)setBottomButtonsContainer:(id)arg1;
- (id)blackBGView;
- (void)setBlackBGView:(id)arg1;
- (id)albumEntryViewForShoot;
- (void)setAlbumEntryViewForShoot:(id)arg1;
- (id)albumEntryViewForShootSmall;
- (void)setAlbumEntryViewForShootSmall:(id)arg1;
- (BOOL)isCurrentTemplateSupportAssetGenerated;
- (void)setIsCurrentTemplateSupportAssetGenerated:(BOOL)arg1;
- (id)pickerBottomTips;
- (void)setPickerBottomTips:(id)arg1;
- (id)faceGenderSwitch;
- (void)setFaceGenderSwitch:(id)arg1;
- (id)countdownTimerSwitch;
- (void)setCountdownTimerSwitch:(id)arg1;
- (id)recordingTimerSwitch;
- (void)setRecordingTimerSwitch:(id)arg1;
- (id)fillInLightSwitch;
- (void)setFillInLightSwitch:(id)arg1;
- (id)bubbleSwitchTouchCaptureView;
- (void)setBubbleSwitchTouchCaptureView:(id)arg1;
- (id)countdownView;
- (void)setCountdownView:(id)arg1;
- (id)returnButtonForVoiceOver;
- (void)setReturnButtonForVoiceOver:(id)arg1;
- (id)returnButtonForPageSheetVoiceOver;
- (void)setReturnButtonForPageSheetVoiceOver:(id)arg1;
- (id)aiAssetProcessor;
- (void)setAiAssetProcessor:(id)arg1;
- (id)aiGCParams;
- (void)setAiGCParams:(id)arg1;
- (id)maskBlurBGView;
- (void)setMaskBlurBGView:(id)arg1;
- (id)snapShotView;
- (void)setSnapShotView:(id)arg1;
- (id)initialCaptureSnapshot;
- (void)setInitialCaptureSnapshot:(id)arg1;
- (BOOL)isEaseOutingBlurMaskView;
- (void)setIsEaseOutingBlurMaskView:(BOOL)arg1;
- (double)currentScreenBrightness;
- (void)setCurrentScreenBrightness:(double)arg1;
- (id)fillinLightBrightLayer;
- (void)setFillinLightBrightLayer:(id)arg1;
- (id)recordButton;
- (void)setRecordButton:(id)arg1;
- (id)focusView;
- (void)setFocusView:(id)arg1;
- (BOOL)isNotchScreen;
- (void)setIsNotchScreen:(BOOL)arg1;
- (id)dragControlForTemplatePanel;
- (void)setDragControlForTemplatePanel:(id)arg1;
- (id)shootTipLabelForRedPacket;
- (void)setShootTipLabelForRedPacket:(id)arg1;
- (id)lightIntensityDetectTimer;
- (void)setLightIntensityDetectTimer:(id)arg1;
- (id)changeBackgroundView;
- (void)setChangeBackgroundView:(id)arg1;
- (id)cancelRecordingButton;
- (void)setCancelRecordingButton:(id)arg1;
- (id)aigcAsyncGenerationStateBar;
- (void)setAigcAsyncGenerationStateBar:(id)arg1;
- (id)aigcAsyncActionSheet;
- (void)setAigcAsyncActionSheet:(id)arg1;
- (id)templateSwitchLoadingToast;
- (void)setTemplateSwitchLoadingToast:(id)arg1;
- (id)fullScreenTemplateLoadingView;
- (void)setFullScreenTemplateLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
