@interface MJShootComposingView : MMUIView <MJShootVisagePanelViewControllerDelegate, MJShootFavTemplateEntranceViewDelegate, MJShootFrontFillLightAppearanceAdjusting, MJShootSideToolboxPanelViewControllerDelegate, MJMovieComposingViewControllerDelegate, WCEditImageViewControllerDelegate, MJComposingMusicVolumeViewControllerDelegate, MJComposingMusicClipViewControllerDelegate, WCFinderTemplateMusicSelectEntranceViewDelegate, MMBGMSelectHalfScreenViewControllerDelegate, MJShootingMusicPickingViewModelDelegate, MJMusicCapsuleViewDelegate, MonoServiceLogicExt, QuickReplyMsgExt, MJShootMakeupInspectorDelegate, UIGestureRecognizerDelegate, MMCameraTouchEventViewDelegate, MJShootFilterInspectorDelegate, MJShootFaceEffectInspectorDelegate, MJShootComposingFaceManagerViewDelegate, MJShootFaceGenderSwitchDelegate, MJShootCountdownTimerSwitchDelegate, MJShootRecordingTimerSwitchDelegate, MJShootFillInLightSwitchDelegate, MJShootBubbleSwitchTouchCaptureViewDelegate, MJBubbleTouchCaptureViewDelegate, MJShootBeautyInspectorDelegate, MJShootBeautyMainPanelViewDelegate, MJShootChangeBackgroundViewDelegate, MJShootAIGCAsyncGenerationStateBarDelegate, WCActionSheetDelegate, MJShootComposingViewModelDelegate, MJShootSideToolbarDelegate, MJShootComposingTemplateListViewDelegate, MJShootAlbumEntryViewDelegate, MJShootComposingRecordButtonDelegate, MJShootSideToolboxEntryViewDelegate>
{
    BOOL _hasConfiguredDuoNavigationLayout; // +0x8
    BOOL _isTakingPicture; // +0x9
    BOOL _hasStorylineEdited; // +0xa
    BOOL _onlyShowTemplateSelectedView; // +0xb
    BOOL _hasShowTempalteModeSwitchTips; // +0xc
    BOOL _hasShownMicMutedToast; // +0xd
    BOOL _isInTemplateShootingMode; // +0xe
    BOOL _isPinching; // +0xf
    BOOL _isFocusing; // +0x10
    BOOL _isPickerEditingEnabled; // +0x11
    BOOL _isCurrentTemplateSupportAssetGenerated; // +0x12
    BOOL _isEaseOutingBlurMaskView; // +0x13
    BOOL _isNotchScreen; // +0x14
    BOOL _hasRecordedReferenceVideoCameraMainFrame; // +0x15
    BOOL _referenceVideoIsMain; // +0x16
    BOOL _hasReportedReferenceVideoWindowExposure; // +0x17
    BOOL _referenceVideoInteractionLocked; // +0x18
    BOOL _referenceVideoIsAnimating; // +0x19
    BOOL _referenceVideoNeedsResumeWhenApplicationActive; // +0x1a
    BOOL _hasSavedReferenceVideoCameraAppearance; // +0x1b
    BOOL _referenceVideoOriginalRenderMasksToBounds; // +0x1c
    float _videoDuration; // +0x20
    int _bubbleViewAppearCount; // +0x24
    float _referenceVideoOriginalContentShadowOpacity; // +0x28
    double _topPosition; // +0x30
    id <MJShootComposingViewDelegate> _delegate; // +0x38
    EditVideoAttr * _editVideoAttr; // +0x40
    MJShootComposingViewModel * _viewModel; // +0x48
    MJShootComposingTemplatePanelHalfScreenViewController * _templatePanelHalfScreenVC; // +0x50
    MJComposingMusicVolumeViewController * _musicVolumePanelVC; // +0x58
    MJComposingMusicClipViewController * _musicClipVC; // +0x60
    MJShootVisagePanelViewController * _visagePanelVC; // +0x68
    MJShootSideToolboxPanelViewController * _toolboxPanelVC; // +0x70
    MJShootSelectionSheetViewController * _toolboxSheetVC; // +0x78
    UIView * _renderView; // +0x80
    double _videoZoomFactor; // +0x88
    UIView * _contentView; // +0x90
    MMCameraTouchEventView * _panOpererView; // +0x98
    CAGradientLayer * _topMaskGradientLayer; // +0xa0
    CAGradientLayer * _bottomMaskGradientLayer; // +0xa8
    UIImage * _originalImage; // +0xb0
    NSData * _originalImageData; // +0xb8
    UIImage * _waitingSendImage; // +0xc0
    EditImageAttr * _editImageAttr; // +0xc8
    MMLoadingView * _loadingView; // +0xd0
    NSString * _videoPath; // +0xd8
    NSString * _captureImageFilePath; // +0xe0
    NSString * _waitingSendVideoPath; // +0xe8
    UIImage * _thumbImage; // +0xf0
    MMShortVideoParamModel * _shortVideoModel; // +0xf8
    MMUIButton * _audioPermissionTipsBtn; // +0x100
    double _currentTemplateMaxRecordingDuration; // +0x108
    MJCameraTemplateReportObject * _cameraTemplateReportObj; // +0x110
    OMJRecordingResultTraits * _recordingResultTraits; // +0x118
    UIImage * _recordingCoverImage; // +0x120
    UIImage * _recordingCroppedCoverImage; // +0x128
    NSString * _storylineMediaFilePath; // +0x130
    MMUIButton * _closeButton; // +0x138
    MMUILabel * _flashTipsLabel; // +0x140
    UIView<MJMusicCapsuleViewProtocol> * _musicEntranceView; // +0x148
    WCShortVideoToolBarInitParams * _params; // +0x150
    MMBGMSelectHalfScreenViewController * _musicPickingVC; // +0x158
    unsigned long long _musicDownloadSessionID; // +0x160
    MJCamChangeTemplateParams * _currentTemplateParams; // +0x168
    WeToast * _showingToast; // +0x170
    MMUIButton * _cameraSwitchButton; // +0x178
    MJShootSideToolbar * _sideToolbar; // +0x180
    MMUIView * _bottomMenuBar; // +0x188
    MJShootSideToolboxEntryView * _sideToolboxEntryView; // +0x190
    MJShootFavTemplateEntranceView * _favTemplateEntranceView; // +0x198
    MJShootComposingTemplateListView * _templateListView; // +0x1a0
    MMUIView * _photoLibraryEntryView; // +0x1a8
    MMUIView * _moreShootTemplatesEntryView; // +0x1b0
    MJShootFilterInspector * _filterInspector; // +0x1b8
    MJShootBeautyInspector * _beautyInspector; // +0x1c0
    MJShootMakeupInspector * _makeupInspector; // +0x1c8
    MJShootFaceEffectInspector * _faceEffectInspector; // +0x1d0
    MJShootBeautyMainPanelView * _beautyMainPanelView; // +0x1d8
    MMUILabel * _recordDurationLabel; // +0x1e0
    MMUIButton * _switchCameraButton; // +0x1e8
    MJShootTemplatePickAssetEntryButton * _templatePickAssetEntry; // +0x1f0
    MMUIView * _captureBtnSmall; // +0x1f8
    long long _currentOrientation; // +0x200
    unsigned long long _postEditingEnterTime; // +0x208
    unsigned long long _camEffectInspectorMode; // +0x210
    NSString * _duetShootingSourceVideoFilePath; // +0x218
    MJPublisherBubbleView * _bubbleView; // +0x220
    MMTimer * _bubbleTimer; // +0x228
    MJBubbleTouchCaptureView * _bubbleTouchCaptureView; // +0x230
    double _lastFrameTimeRecorded; // +0x238
    OMJCamGestureRecognizerSettings * _templateGRSettings; // +0x240
    MMTimer * _fakeRecordingTimerForAIGC; // +0x248
    MMUIButton * _completeButton; // +0x250
    MMUIButton * _clipButton; // +0x258
    UIStackView * _bottomButtonsContainer; // +0x260
    MMUIView * _blackBGView; // +0x268
    MJShootAlbumEntryView * _albumEntryViewForShoot; // +0x270
    MJShootAlbumEntryView * _albumEntryViewForShootSmall; // +0x278
    NSString * _pickerBottomTips; // +0x280
    MJShootFaceGenderSwitch * _faceGenderSwitch; // +0x288
    MJShootCountdownTimerSwitch * _countdownTimerSwitch; // +0x290
    MJShootRecordingTimerSwitch * _recordingTimerSwitch; // +0x298
    MJShootFillInLightSwitch * _fillInLightSwitch; // +0x2a0
    MJShootBubbleSwitchTouchCaptureView * _bubbleSwitchTouchCaptureView; // +0x2a8
    MJShootCountdownView * _countdownView; // +0x2b0
    MMShootCountdownCancelButton * _countdownCancelButton; // +0x2b8
    MMUIButton * _returnButtonForVoiceOver; // +0x2c0
    MMUIButton * _returnButtonForPageSheetVoiceOver; // +0x2c8
    MMUIButton * _returnButtonForToolboxSheetVoiceOver; // +0x2d0
    OMJAIGCParams * _aiGCParams; // +0x2d8
    UIVisualEffectView * _maskBlurBGView; // +0x2e0
    UIImageView * _snapShotView; // +0x2e8
    UIImage * _initialCaptureSnapshot; // +0x2f0
    UIImage * _aigcStartSnapshotImage; // +0x2f8
    UIImageView * _aigcPlaceholderView; // +0x300
    double _currentScreenBrightness; // +0x308
    UIView * _fillinLightBrightLayer; // +0x310
    MJShootComposingRecordButton * _recordButton; // +0x318
    MJShootFocusView * _focusView; // +0x320
    UIView * _dragControlForTemplatePanel; // +0x328
    MMUILabel * _shootTipLabelForRedPacket; // +0x330
    MMTimer * _lightIntensityDetectTimer; // +0x338
    MJShootChangeBackgroundView * _changeBackgroundView; // +0x340
    MMUIButton * _cancelRecordingButton; // +0x348
    MJShootAIGCAsyncGenerationStateBar * _aigcAsyncGenerationStateBar; // +0x350
    WCActionSheet * _aigcAsyncActionSheet; // +0x358
    WCActionSheet * _aigcAsyncCancelActionSheet; // +0x360
    WeToast * _templateSwitchLoadingToast; // +0x368
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x370
    UIView * _fillinLightBrightBackgroundView; // +0x378
    MMUILabel * _shootTemplateGuideWordingLabel; // +0x380
    MJShootTemplateLoadingView * _fullScreenTemplateLoadingView; // +0x388
    MJShootComposingViewLayout * _composingViewLayout; // +0x390
    MJShootComposingFaceManagerView * _faceIDManagerView; // +0x398
    MJShootComposingFaceGeneratingCoverView * _faceIDCoverView; // +0x3a0
    MJShootReferenceVideoView * _referenceVideoView; // +0x3a8
    UIPanGestureRecognizer * _referenceVideoPanGesture; // +0x3b0
    UITapGestureRecognizer * _referenceVideoTapGesture; // +0x3b8
    double _referenceVideoOriginalContentCornerRadius; // +0x3c0
    double _referenceVideoOriginalContentShadowRadius; // +0x3c8
    UIColor * _referenceVideoOriginalContentShadowColor; // +0x3d0
    double _referenceVideoOriginalRenderCornerRadius; // +0x3d8
    CGSize _lastDuoLayoutSize; // +0x3e0
    CGSize _referenceVideoOriginalContentShadowOffset; // +0x3f0
    UIEdgeInsets _lastDuoLayoutSafeAreaInsets; // +0x400
    CGRect _referenceVideoCameraMainFrame; // +0x420
    CGRect _referenceVideoCurrentFloatingFrame; // +0x440
    CGRect _referenceVideoExpandedFloatingFrame; // +0x460
}
+ (id)createVisagePanelViewModelWithIsTemplateShooting:(BOOL)arg1;
+ (id)createCharSetForLyricPostproc;
+ (void)postprocessMusicDesc:(id)arg1;
+ (id)postEnterSceneKey;
- (void)wc_setupSubviews;
- (void)wc_setupCloseButton;
- (void)wc_setupMusicCapsuleUI;
- (void)wc_setupContentView;
- (void)wc_resetContentViewConstraints;
- (CGRect)cameraMainFrameForLayout:(id)arg1;
- (id)wc_calculateRenderViewLayout;
- (void)wc_updateLayoutForContainerSize;
- (void)wc_updateRenderLayoutForContainerSize;
- (void)wc_hideTemplateListView;
- (void)wc_handleTemplateListWillDeselectTemplateItem:(id)arg1;
- (void)wc_setupBottomMenuBar;
- (void)updateBottomMenuBarBackgroundColorWithFillinLight:(BOOL)arg1;
- (void)wc_setupBottomMenuBarElements;
- (void)wc_setupPhotoLibraryEntryView;
- (void)wc_setupSwitchCameraButton;
- (void)wc_setBottomMenuBarHidden:(BOOL)arg1;
- (void)wc_setupPickAssetEntry;
- (void)wc_showTemplatePickAssetEntryIfNeeded;
- (void)wc_updateTemplatePickAssetEntryWithCurrentTemplate:(id)arg1;
- (void)wc_updateTemplatePickAssetEntryWithCurrentTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)wc_showTemplatePickAssetWithAnimated:(BOOL)arg1;
- (void)wc_hideTemplatePickAssetWithAnimated:(BOOL)arg1;
- (void)wc_setupRecordButton;
- (void)wc_showRecordingDurationLabel;
- (void)wc_updateRecordingDurationTextColorWithFillLight:(BOOL)arg1;
- (void)wc_setupSideToolbar;
- (void)wc_setupSideToolboxEntryView;
- (void)wc_photoLibraryEntryButtonDidTouchUpInside:(id)arg1;
- (void)wc_templatePickAssetEntryButtonDidTouchUpInside:(id)arg1;
- (void)wc_switchCameraButtonDidTouchUpInside:(id)arg1;
- (void)wc_updateImportedAssetVisibilityWithCurrentTemplate:(id)arg1;
- (void)wc_updatePhotoLibraryVisibilityWithCurrentTemplate:(id)arg1;
- (void)wc_setupCountdownCancelButton;
- (void)wc_handleDidTapCountdownRecordingCancelButtonAction:(id)arg1;
- (void)wc_adaptRenderViewAspectScaleModeWithTemplateItem:(id)arg1;
- (void)wc_addIlluminateLayerIfNeeded;
- (void)wc_remakeRenderViewConstraints:(BOOL)arg1 contentViewSize:(CGSize)arg2;
- (void)wc_recoverRenderViewConstraints;
- (void)wc_resetRenderViewConstraints;
- (void)wc_removeIlluminateLayerIfNeeded;
- (void)wc_suspendIlluminateLayerForReferenceVideoMain;
- (void)wc_restoreIlluminateLayerAfterReferenceVideoMain;
- (void)_triggerFrontFillLightStateDidTurnOn;
- (void)_triggerFrontFillLightStateDidTurnOff;
- (void)wc_triggerFrontFillLightStateDidChange:(BOOL)arg1;
- (void)wc_shootComposingFrontFillLightStateDidChange:(BOOL)arg1;
- (void)reportRecordButtonDidTap;
- (id)createReferenceVideoCommonReportParams;
- (void)bindReferenceVideoWindowExposure;
- (void)unbindReferenceVideoWindowExposure;
- (void)reportReferenceVideoClickWithViewID:(id)arg1 params:(id)arg2;
- (void)reportReferenceVideoCollapseButtonDidClick;
- (void)reportReferenceVideoWindowDidClick;
- (void)reportReferenceVideoSmallDotDidClick;
- (void)reportMusicCapsuleDidClick;
- (void)reportTemplateListDidSelectItem:(id)arg1 atIndex:(long long)arg2;
- (void)reportTemplateListWillDisplayItem:(id)arg1 atIndex:(long long)arg2;
- (void)reportTemplateListDidTapMoreItem:(id)arg1 atIndex:(long long)arg2;
- (void)reportTemplateListDidTapTitleEntryItem:(id)arg1 atIndex:(long long)arg2;
- (void)reportTemplatePanelDidSelectItem:(id)arg1 atIndex:(unsigned long long)arg2 tabID:(unsigned long long)arg3 tabAtIndex:(long long)arg4;
- (void)reportTemplatePanelWillDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 tabID:(unsigned long long)arg3 tabAtIndex:(long long)arg4;
- (void)reportTemplatePanelDidDisplayTabID:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)reportSideToolboxWillDisplayItem:(unsigned long long)arg1;
- (void)reportSideToolboxDidSelectItem:(unsigned long long)arg1;
- (id)_sideToolBoxViewIDWithType:(unsigned long long)arg1;
- (id)_sideToolBoxSwitchValueWithType:(unsigned long long)arg1;
- (id)createTemplatePanelItemReportParamsWithItem:(id)arg1 atIndex:(unsigned long long)arg2 tabID:(unsigned long long)arg3 tabAtIndex:(long long)arg4;
- (id)_tabDisplayNameReportValueWithTabID:(unsigned long long)arg1;
- (id)createTemplateReportParamsWithIndex:(long long)arg1 templateItem:(id)arg2;
- (void)reportViewClickWithViewID:(id)arg1;
- (void)reportViewClickWithViewID:(id)arg1 params:(id)arg2;
- (void)reportViewExposureWithViewID:(id)arg1;
- (void)reportViewExposureWithViewID:(id)arg1 params:(id)arg2;
- (void)customReportWithEventID:(id)arg1 viewID:(id)arg2 params:(id)arg3;
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
- (void)shootTemplatePanelHalfScreenViewControllerDidSelectItem:(id)arg1 atIndex:(unsigned long long)arg2 tabID:(unsigned long long)arg3 tabAtIndex:(long long)arg4;
- (void)shootTemplatePanelHalfScreenViewControllerWillDisplayTemplateItem:(id)arg1 atIndex:(unsigned long long)arg2 tabID:(unsigned long long)arg3 tabAtIndex:(long long)arg4 isReloadingData:(BOOL)arg5;
- (void)shootTemplatePanelHalfScreenViewControllerDidEndDisplayingTemplateItem:(id)arg1 tabID:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 isReloadingData:(BOOL)arg4;
- (void)shootTemplatePanelHalfScreenViewControllerDidReloadTabID:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)shootTemplatePanelHalfScreenViewControllerDidSelectTab:(id)arg1 atIndex:(long long)arg2;
- (void)shootTemplatePanelHalfScreenViewControllerDidTapTemplateEntryItem:(id)arg1;
- (CGSize)templatePanelRenderViewSize;
- (void)updateTemplatePanelContentViewLayout;
- (void)enterTemplatePanelShowingMode;
- (void)enterTemplatePanelShowingModeInternal;
- (void)setupSmallSubviewsForEnterTemplatePanel;
- (void)handleDragCloseTemplatePanelAction;
- (void)exitTemplatePanelShowingMode;
- (void)captureBtnSmallDidTouchUpInside:(id)arg1;
- (void)addExitButtonForTemplatePanelIfNeeded;
- (void)removeExitButtonForTemplatePanelIfNeeded;
- (void)updateFavTemplateEntranceLayout:(BOOL)arg1;
- (void)favTemplateEntranceView:(id)arg1 didTapOnFavButton:(BOOL)arg2;
- (void)favTemplateEntranceViewDidTapOnAuthorContainerButton:(id)arg1;
- (void)updateFullScreenTemplateLoadingViewWithTemplateID:(id)arg1 progress:(float)arg2;
- (void)removeFullScreenTemplateLoadingViewIfNeeded;
- (void)showFullScreenTemplateLoadingViewWithTemplateID:(id)arg1;
- (void)updateTemplateLoadingRelativeViewsAppearanceWithUserEnabled:(BOOL)arg1 toEmptyTemplate:(BOOL)arg2;
- (BOOL)_shouldDisablePhotoLibraryButtonForTemplateChange:(BOOL)arg1;
- (void)showTemplateGuideWordingIfNeededAfterTemplateDidChange;
- (void)dismissTemplateGuideWording;
- (void)_setupShootTemplateGuideWordingLabel;
- (id)_buildShootTemplateGuideWordingLabel;
- (void)setupSubviews;
- (void)showRecordingDurationLabel;
- (void)hideTemplateListViewIfNeeded;
- (void)handleTemplateListWillDeselectTemplateItem:(id)arg1;
- (void)showTemplatePickAssetEntryIfNeeded;
- (BOOL)needHideMusicCapsuleViewForTemplatePanel;
- (void)resetContentViewConstraints;
- (void)setBottomMenuBarHidden:(BOOL)arg1;
- (void)updateImportedAssetVisibilityWithCurrentTemplate:(id)arg1;
- (void)setupCountdownCancelButton;
- (void)adaptRenderViewAspectScaleModeWithTemplateItem:(id)arg1;
- (void)configureUIForActiveFrontCameraFillLight;
- (void)configureUIForInactiveFrontCameraFillLight;
- (void)suspendFrontCameraFillLightForReferenceVideoMain;
- (void)restoreFrontCameraFillLightAfterReferenceVideoMain;
- (void)addHollowEffectInFillInLightLayer;
- (void)remakeRenderViewConstraints:(BOOL)arg1 contentViewSize:(CGSize)arg2;
- (void)shootComposingFrontFillLightStateDidChange:(BOOL)arg1;
- (void)enterToolboxPanelShowingMode;
- (void)leaveToolboxPanelShowingMode;
- (void)showToolboxPanel;
- (void)dismissToolboxPanel;
- (void)setupViewsForShowingToolboxPanel;
- (void)setupViewsForDismissingToolboxPanel;
- (void)addExitButtonForToolboxPanelIfNeeded;
- (void)removeExitButtonForToolboxPanelIfNeeded;
- (void)hideAllViewsForShowingPanel;
- (void)restoreAllViewsWithPreviousState;
- (void)shootSideToolboxPanelViewControllerWillClose:(BOOL)arg1;
- (void)shootSideToolboxPanelViewController:(id)arg1 willDisplayItemWithType:(unsigned long long)arg2;
- (void)shootSideToolboxPanelViewController:(id)arg1 didSelectItemWithType:(unsigned long long)arg2;
- (void)shootSideToolboxPanelDidTapFlashItem;
- (void)shootSideToolboxPanelDidTapCountdownTimerItem;
- (void)shootSideToolboxPanelDidTapRecordingTimerItem;
- (void)shootSideToolboxPanelDidTapBackground;
- (void)shootSideToolboxPanelDidTapMicrophoneItem;
- (void)showToastWithSwitchFillInLightToMode:(unsigned long long)arg1;
- (void)showToastWithSwitchCountdownTimerToMode:(unsigned long long)arg1;
- (void)showToastWithSwitchRecordingTimerToMode:(unsigned long long)arg1;
- (void)showToastWithSwitchBackgroundToType:(unsigned long long)arg1 fromType:(unsigned long long)arg2;
- (void)showToastWithSwitchMicrophoneEnabled:(BOOL)arg1;
- (void)showToastWithTextString:(id)arg1;
- (void)shootSideToolboxEntryView:(id)arg1 didTapButtonType:(unsigned long long)arg2;
- (void)shootSideToolBar:(id)arg1 didUpdateWithIsBackgroundOn:(BOOL)arg2;
- (void)shootSideToolBar:(id)arg1 didUpdateWithIsDuetShootOn:(BOOL)arg2;
- (void)didTapOnSwitchCameraInShootSideToolBar:(id)arg1;
- (void)handleSwitchCameraAction;
- (void)didTapOnReplayInShootSideToolBar:(id)arg1;
- (void)switchCamera;
- (void)updateCameraAccessibility;
- (void)updateCameraAccessibilityWithPosition:(long long)arg1;
- (void)handleMicUpdateActionWithIsMicMuted:(BOOL)arg1;
- (void)handleOSTStatusDidChangeActionWithOSTEnabled:(BOOL)arg1;
- (void)setupReferenceVideoIfNeeded;
- (void)layoutReferenceVideoIfNeeded;
- (void)updateReferenceVideoLayoutWithCameraMainFrame:(CGRect)arg1;
- (void)cleanUpReferenceVideo;
- (id)referenceVideoCurrentFloatingView;
- (CGRect)referenceVideoClampedFloatingFrame:(CGRect)arg1;
- (CGRect)referenceVideoSnappedFloatingFrame:(CGRect)arg1;
- (void)updateReferenceVideoFloatingFrame:(CGRect)arg1 animated:(BOOL)arg2;
- (void)saveReferenceVideoExpandedFloatingFrame:(CGRect)arg1;
- (void)collapseReferenceVideo;
- (void)expandReferenceVideo;
- (void)switchReferenceVideoMainAndFloating;
- (void)prepareReferenceVideoForRecording;
- (void)hideReferenceVideoForAIGCGeneration;
- (void)restoreReferenceVideoToReadyState;
- (void)pauseReferenceVideo;
- (void)resumeReferenceVideoIfReady;
- (void)resumeReferenceVideoWhenApplicationBecomesActive;
- (void)resumeReferenceVideoAfterReturningToShoot;
- (void)refreshReferenceVideoCameraFloatingAppearanceIfNeeded;
- (void)updateReferenceVideoViewFrame:(CGRect)arg1;
- (void)updateReferenceVideoFrame:(CGRect)arg1 forView:(id)arg2;
- (void)updateReferenceVideoCollapsedLayout;
- (void)updateMusicCapsuleForReferenceVideoCollapsed:(BOOL)arg1;
- (double)referenceVideoMinimumFloatingTop;
- (double)referenceVideoMaximumFloatingBottom;
- (UIEdgeInsets)referenceVideoSwitchToastContentInsets;
- (void)refreshReferenceVideoFloatingViewHierarchyIfNeeded;
- (void)updatePanOpererViewForReferenceVideoMain;
- (void)updatePanOpererViewForCameraMain;
- (void)applyReferenceVideoInteractionLocked:(BOOL)arg1;
- (void)setReferenceVideoAnimationEnabled:(BOOL)arg1;
- (void)setCameraFloatingAppearanceEnabled:(BOOL)arg1;
- (void)restoreCameraMainContentScaleMode;
- (void)removeCancelRecordingButton;
- (void)onRecordDidCancel;
- (void)onRecordDidFinishWithError:(id)arg1;
- (void)onRecordDidFinishWithInfo:(id)arg1;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2 finishInfo:(id)arg3 fromTemplate:(BOOL)arg4;
- (void)showMJMovieComposingViewControllerWhenRecordingDidFinishWithFilePath:(id)arg1 originalAsset:(id)arg2;
- (void)showMJMovieComposingViewControllerWhenRecordingDidFinishWithFilePath:(id)arg1 originalAsset:(id)arg2 entryParams:(id)arg3;
- (void)showMJMovieComposingViewControllerWhenRecordingDidFinishWithFilePath:(id)arg1 originalAsset:(id)arg2 entryParams:(id)arg3 snapshotView:(id)arg4;
- (void)showMJMovieComposingViewControllerWhenCaptureDidFinishWithImage:(id)arg1 imageData:(id)arg2;
- (void)showMJMovieComposingViewControllerWithAssetInfo:(id)arg1 originalAsset:(id)arg2 shouldReset:(BOOL)arg3 entryParams:(id)arg4;
- (void)showMJMovieComposingViewControllerWithAssetInfo:(id)arg1 originalAsset:(id)arg2 shouldReset:(BOOL)arg3 entryParams:(id)arg4 snapshotView:(id)arg5;
- (void)showMJMovieComposingViewControllerForDraftWithViewModel:(id)arg1 shouldReset:(BOOL)arg2;
- (void)setupTransitionContentImageViewWithMovieComposingVC:(id)arg1;
- (void)didPreparePresentMovieComposingViewController;
- (id)composingViewController:(id)arg1 templateCreationInfoForReeditEntryParams:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidClearShootTemplate:(id)arg1;
- (void)composingViewController:(id)arg1 didFinishShootTemplateWithInfo:(id)arg2;
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
- (void)showMusicVolumePanelVC;
- (void)bindMusicVolume;
- (void)syncBGMVolumeToSession:(float)arg1;
- (void)musicVolumeViewControllerDidCancelForSizeTransition:(id)arg1;
- (void)musicVolumeViewControllerWillClose:(BOOL)arg1;
- (void)musicVolumeViewControllerDidClose:(BOOL)arg1;
- (void)showMusicTrimViewController;
- (void)musicClipViewControllerDidCancelForSizeTransition:(id)arg1;
- (void)musicClipViewControllerWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)musicClipViewControllerDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)musicClipViewController:(id)arg1 didStartTrimWithStartTime:(struct)arg2 duration:(struct)arg3 endTime:(struct)arg4;
- (void)musicClipViewController:(id)arg1 didChangeStartTime:(struct)arg2 duration:(struct)arg3 endTime:(struct)arg4;
- (void)musicClipViewController:(id)arg1 didFinishTrimWithStartTime:(struct)arg2 duration:(struct)arg3 endTime:(struct)arg4;
- (void)setMusicTrimCurrentTimeRange:(struct)arg1;
- (struct)musicTrimCurrentTimeRange;
- (void)playTrimmedMusicFromCurrentTimeRange;
- (void)startWaveformProgressTimer;
- (void)stopWaveformProgressTimer;
- (void)waveformProgressTimerDidFire;
- (void)applyMusicTrimWithStartTime:(struct)arg1 duration:(struct)arg2;
- (id)musicTrimCurrentMusicFilePath;
- (struct)musicTrimTotalDurationForFilePath:(id)arg1;
- (void)enterMusicPanelForShoot;
- (void)musicPanel_disableMusicInCapsuleViewWhenPlayMusicInApp:(id)arg1;
- (void)musicPanel_playMusicInAppWithBGMSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)musicPanel_playMusicInAppWithBGMSelectedViewController:(id)arg1 didClickVolumeBtn:(id)arg2;
- (void)musicPanel_playMusicInAppWithBGMSelectedViewControllerWillClose:(id)arg1;
- (void)musicPanel_playMusicInAppWithBGMSelectedViewControllerDidClose:(id)arg1;
- (void)musicPanel_playMusicInAppWithBGMSelectedViewController:(id)arg1 didEditMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4;
- (BOOL)musicPanel_shouldDownloadMusicByApp:(id)arg1;
- (void)musicPanel_cacheMusicDataIfNeeded:(id)arg1 musicInfo:(id)arg2;
- (id)musicPanel_existingAppMusicFilePathWithMusicData:(id)arg1;
- (void)musicPanel_downloadAppMusicWithMusicData:(id)arg1 completion:(id /* block */)arg2;
- (void)musicPanel_getCamoReadyMusicFilePathWithMusicInfo:(id)arg1 musicData:(id)arg2 completion:(id /* block */)arg3;
- (int)musicPanel_bgmItemTypeForMusicInfo:(id)arg1;
- (void)musicPanel_dismissViewController:(id)arg1 andShowMusicTrimView:(id /* block */)arg2;
- (void)showMusicPanelVC;
- (void)mcResetAppliedMusicTrimState;
- (void)mcRegisterLocalMusicToCamoWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)mcRegisterAndPlayMusicInCamoWithFilePath:(id)arg1 registerMusicInfo:(id)arg2 musicInfo:(id)arg3 atTabIndex:(unsigned long long)arg4 index:(unsigned long long)arg5 queryWord:(id)arg6;
- (void)mcRegisterAndPlayMusicInCamoWithFilePath:(id)arg1 musicInfo:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 queryWord:(id)arg5;
- (void)mcPlayMusicInCamoWithFileURL:(id)arg1 musicInfo:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 queryWord:(id)arg5;
- (void)mcPlayMusicInCamoWithFileURL:(id)arg1 musicInfo:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 queryWord:(id)arg5 shouldResetTrim:(BOOL)arg6;
- (id)mcCamMusicDescWithMusicID:(id)arg1 localFilePath:(id)arg2;
- (id)mcCamMusicDescWithMusicID:(id)arg1 localFilePath:(id)arg2 startTime:(struct)arg3 duration:(struct)arg4;
- (void)mcManualSetPickingVCMusicOn:(BOOL)arg1;
- (void)mcSwitchMusicEntryViewToMusicSelectedStateWithInfo:(id)arg1;
- (void)mcSwitchMusicEntryViewToMusicUnSelectedState;
- (void)setupMusicPickingVM;
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
- (void)bgmSelectedViewController:(id)arg1 didClickVolumeBtn:(id)arg2;
- (void)bgmSelectedViewControllerDidRequestLocalImportAlbumVideo:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 prepareToPresentLocalImportInteractedVideoPickerWithCompletion:(id /* block */)arg2;
- (void)bgmSelectedViewControllerDidDismissLocalImportInteractedVideoPicker:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didEditMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4;
- (void)playMusicWithFileURL:(id)arg1 musicInfo:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 queryWord:(id)arg5;
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
- (void)getMusicFilePathDownloadedByCamoWithMusicInfo:(id)arg1 musicData:(id)arg2 completion:(id /* block */)arg3;
- (void)applyMusicInfoToCamoSession:(id)arg1 musicEnable:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateMusicEntryViewWithResultMusic:(id)arg1;
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
- (void)mj_setupSubviews;
- (void)mj_setupCloseButton;
- (void)mj_setupMusicCapsuleUI;
- (void)mj_setupContentView;
- (void)mj_resetContentViewConstraints;
- (CGSize)mj_calculateRenderViewSize;
- (void)mj_setupBottomMenuBar;
- (void)mj_setupPickerAssetsGenerateShootEffectEntryView;
- (void)mj_setupPhotoLibraryEntryView;
- (void)mj_setupMoreShootTemplatesEntryViewEntryView;
- (void)mj_setBottomMenuBarHidden:(BOOL)arg1;
- (void)mj_setupRecordButton;
- (void)mj_showRecordingDurationLabel;
- (void)mj_setupSideToolbar;
- (void)mj_setupFavTemplateEntrance;
- (void)mj_updateImportedAssetVisibilityWithCurrentTemplate:(id)arg1;
- (void)mj_addIlluminateLayerIfNeeded;
- (void)mj_addHollowEffectInFillInLightLayer;
- (void)mj_resetFillinLightFrame;
- (void)mj_removeIlluminateLayerIfNeeded;
- (void)mj_suspendIlluminateLayerForReferenceVideoMain;
- (void)mj_restoreIlluminateLayerAfterReferenceVideoMain;
- (void)setupGestures;
- (void)setupReferenceVideoGestures;
- (void)bindReferenceVideoGesturesToCurrentFloatingView;
- (void)handleReferenceVideoPanGesture:(id)arg1;
- (void)handleReferenceVideoTapGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePanPreview:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)configGestureRecognizerEnableAfterClearTemplate;
- (void)forceEnabledGestureRecognizers;
- (void)configGestureRecognizerEnableAfterUseTemplate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
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
- (void)turnOffFillInLight;
- (void)_resetScreenBrightness;
- (void)updateFillInLightStateIfNeededWhenCameraSwitchToPosition:(long long)arg1;
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
- (void)showFaceIDManagerView;
- (void)removeFaceIDManagerView;
- (void)updateRenderViewOnFaceIDCreationStarted;
- (void)updateRenderViewOnFaceIDCreationCancelled;
- (void)updateRenderViewOnFaceIDCreationFinished;
- (void)updateRenderViewOnFaceIDCreationFailed;
- (void)removeFaceIDCoverView;
- (void)setupFaceIDCoverView;
- (void)showFaceIDCoverView;
- (void)faceManagerViewDidTapCreateFaceID:(id)arg1;
- (void)faceManagerViewDidTapCreatingFaceID:(id)arg1;
- (void)faceManagerViewDidTapApplyFaceID:(id)arg1;
- (void)faceManagerViewDidTapManageFaceID:(id)arg1;
- (void)showFaceManagerLiteAppCreatePageWithEdit:(BOOL)arg1;
- (void)openFaceIDCreationLiteAppPageWithEdit:(BOOL)arg1;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (BOOL)isShowingAnyBubbleSwitch;
- (void)dismissBubbleSwitches;
- (id)_getReportNameWithFaceGender:(long long)arg1;
- (void)faceGenderSwitch:(id)arg1 didSwitchToGender:(long long)arg2;
- (id)_getReportNameWithCountdownTimerMode:(unsigned long long)arg1;
- (void)countdownTimerSwitch:(id)arg1 didSwitchToMode:(unsigned long long)arg2;
- (void)handleSwitchCountdownTimerToMode:(unsigned long long)arg1;
- (id)_getReportNameWithRecordingTimerMode:(unsigned long long)arg1;
- (void)recordingTimerSwitch:(id)arg1 didSwitchToMode:(unsigned long long)arg2;
- (void)handleSwitchRecordingTimerToMode:(unsigned long long)arg1;
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
- (void)handleSwitchFillInLightToMode:(unsigned long long)arg1;
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
- (void)updateBeautyMainPanelLayout;
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
- (void)updateToolBoxPanelBackgroundWithAsset;
- (void)didTapOnChangeButtonInShootChangeBackgroundView:(id)arg1;
- (void)didTapOnDeleteButtonInShootChangeBackgroundView:(id)arg1;
- (BOOL)showAIGCAlertViewIfNeeded;
- (void)showAIGCAlertView;
- (void)_showAIGCAlertViewPanelStyle;
- (void)_showAIGCAlertViewAlertStyle;
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
- (void)fallbackToNormalAIGCFinishFlowForReedit;
- (BOOL)shouldDismissPreviewBeforeReedit;
- (BOOL)validateReeditContextWithEntryParams:(id)arg1 shootComposingViewController:(id)arg2;
- (void)reopenMovieComposingForReeditWithEntryParams:(id)arg1 shootComposingViewController:(id)arg2;
- (void)dismissPreviewAndReopenMovieComposingForReeditWithEntryParams:(id)arg1 shootComposingViewController:(id)arg2;
- (void)cleanupCameraSessionAndReopenMovieComposingForReeditWithEntryParams:(id)arg1 shootComposingViewController:(id)arg2;
- (void)presentMovieComposingForAIGCReeditWithEntryParams:(id)arg1;
- (void)prepareReeditCreationParamsWithCompletion:(id /* block */)arg1;
- (void)showAIGCPlaceholderOnRenderView;
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
- (id)aigcAsyncGenerationStateBarGetReportDict;
- (void)_didLeaveShootComposingOnAIGCAsyncGenerating;
- (void)actionSheetCancel:(id)arg1;
- (void)registerAIGCAsyncNotifications;
- (void)unregisterAIGCAsyncNotifications;
- (void)_handleAIGCAsyncDidRecevieCreationResponseStart:(id)arg1;
- (void)_handleAIGCAsyncDidRecevieCreationResponseNoti:(id)arg1;
- (void)_handleAIGCAsyncDidRecevieQueryResponseNoti:(id)arg1;
- (void)removeAIGCAsyncActionSheetIfNeeded;
- (void)_turnOffFillinLightIfNeededOnAIGCCreationStart;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)layoutSubviews;
- (BOOL)shouldUpdateDuoLayout;
- (void)setupDuoNavigationLayout;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (void)updateDuoNavigationInsets;
- (void)registerWeChatEXTENSION;
- (void)unRegisterWeChatEXTENSION;
- (void)initViewsState;
- (BOOL)shouldShowMoreTemplateEntry;
- (BOOL)shouldShowMovieAlbumEntry;
- (void)bindViews;
- (void)hideToastIfNeeded;
- (void)shootComposingViewModel:(id)arg1 audioModuleInterruptionBegin:(id)arg2 param:(id)arg3;
- (void)shootComposingViewModel:(id)arg1 recordingDidFail:(id)arg2;
- (void)shootComposingViewModel:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)shootComposingViewModel:(id)arg1 needRequestAIGC:(id)arg2;
- (void)shootComposingViewModelOnAIGCProcessStarted:(id)arg1;
- (void)shootComposingViewModelOnAIGCProcessSucceed:(id)arg1;
- (void)shootComposingViewModel:(id)arg1 onAIGCRequestConditionNotMet:(id)arg2;
- (void)shootComposingViewModel:(id)arg1 onAIGCProcessFailed:(id)arg2;
- (void)shootComposingViewModelDidPresentFirstFrame:(id)arg1;
- (void)shootComposingViewModel:(id)arg1 didPresentFirstFrameAfterSwitchTemplate:(id)arg2;
- (void)shootComposingViewModelWillStartSwitchCamera:(id)arg1 isTemplateSwitched:(BOOL)arg2;
- (void)shootComposingViewModelDidFinishSwitchCamera:(id)arg1;
- (void)shootComposingViewModelDidTimeoutSwitchCamera:(id)arg1 taskID:(id)arg2;
- (void)_easeOutBlurMaskEffectIfNeededWhenReverseCameraWithSwitchTemplate;
- (void)_easeOutBlurMaskEffectIfNeededWhenReverseCameraWithoutSwitchTemplate;
- (void)_resetReverseCameraResult;
- (void)didClickOnAlbumEntryViewForShoot:(id)arg1;
- (void)handleAlbumEntryForShootAction;
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
- (void)_pauseComposingInnerOnApplicationWillResignActive;
- (void)resumeComposingOnApplicationDidBecomeActive;
- (void)stopRecordingVideoIfNeeded;
- (void)startNormalLoadingWithText:(id)arg1 blocked:(BOOL)arg2;
- (id)genEditViewControllerUIConfigWithPortraitAsset:(BOOL)arg1;
- (id)_finderTemplateMusicIdWithMusicId:(id)arg1;
- (id)genFinderTemplateInfoResultWithCheckSum:(id)arg1 userInfo:(id)arg2;
- (id)genFinderTemplateBindedEventParams;
- (void)impactFeedback;
- (id)getCurrentSelectedTemplateId;
- (id)getCurrentSelectedTemplateMusicId;
- (void)switchToTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)updateFavoriteStatusForTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)retryUpdateTemplateItemFavoriteStatus:(id)arg1 retryCount:(long long)arg2 maxRetryCount:(long long)arg3 retryDelay:(double)arg4 completion:(id /* block */)arg5;
- (void)switchToEmptyTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToEmptyTemplateAsDefaultLoadWithItem:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToNonEmptyTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)registerTemplateForReeditCreationIfNeeded;
- (void)updateFaceIDAIGCCreationViewStateIfNeeded;
- (void)refetchFollowShootTemplateIfNeeded;
- (void)updateTemplateLoadProgress:(float)arg1;
- (void)syncSupportAssetGeneratedWithCurrentTemplate:(id)arg1;
- (id)buildCamTemplateOverridingParamsWithFilePath:(id)arg1;
- (void)switchToNonEmptyTemplateForDuetShootingWithItem:(id)arg1 completion:(id /* block */)arg2;
- (void)showSubviewsAfterCameraSessionStartupSucceed;
- (void)fetchUserLocationIfNeeded:(id)arg1;
- (id)currentViewController;
- (void)shootComposingTemplateListView:(id)arg1 didSelectTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 willDeselectTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 willDisplayTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didExitVisibleAreaTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didFirstTimeLoadingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)preloadMJTemplateResourceWithCurrentIndexIfNeeded:(unsigned long long)arg1;
- (void)shootComposingTemplateListViewDataDidChange:(id)arg1;
- (void)shootComposingTemplateListViewFetchDataDidFail:(id)arg1;
- (void)shootComposingTemplateListViewFetchTargetTemplateFailed:(id)arg1;
- (void)shootComposingTemplateListView:(id)arg1 focusedTemplateItemDidChange:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didTapMoreEntry:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didTapTitleEntry:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)deleteLocalCaptureImageFileIFNeeded;
- (void)removeRecordingDurationLabel;
- (void)setIsPickerEditingEnabled:(BOOL)arg1;
- (void)initFirstOrientation:(long long)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (id)flashTipsLabel;
- (void)startPhotographInRecordButton:(id)arg1;
- (BOOL)startRecordingInRecordButton:(id)arg1;
- (void)startCountdownIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)stopRecordingInRecordButton:(id)arg1;
- (void)cancelOperationsForSizeTransition;
- (void)didStartRecording;
- (void)_startDetectRecordingDidReachedMaximumDurationWithRecordID:(id)arg1;
- (id)generateMJRecordingSettings;
- (void)didFinishRecordingWithType:(unsigned long long)arg1;
- (void)handleCancelRecordingButtonAction;
- (void)didCancelRecording;
- (void)didCancelRecordingWithCompletion:(id /* block */)arg1;
- (void)resetRecordingState;
- (void)didStartPhotographing;
- (float)getRecordingMaximummDurationForTemplate;
- (double)getRecordingMaximummDurationForEmptyTemplate;
- (double)getRecordMinimumDurationInSeconds;
- (void)hideViewsOnVideoRecordingDidStart;
- (void)showViewsOnVideoRecordingDidCancel;
- (void)photoLibraryEntryButtonDidTouchUpInside:(id)arg1;
- (void)moreShootTemplatesEntryButtonDidTouchUpInside;
- (void)setTemplateReleatedBtnUserInteractionEnabled:(BOOL)arg1;
- (void)delaySetTemplateReleatedUIInteractive:(BOOL)arg1;
- (void)delaySetTemplateReleatedUIInteractive:(BOOL)arg1 delayTime:(double)arg2;
- (void)showTemplateSwitchLoadingView;
- (void)removeTemplateSwitchLoadingView;
- (void)setCamEffectInspectorMode:(unsigned long long)arg1;
- (double)topPosition;
- (void)setTopPosition:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)viewModel;
- (id)templatePanelHalfScreenVC;
- (void)setTemplatePanelHalfScreenVC:(id)arg1;
- (id)musicVolumePanelVC;
- (void)setMusicVolumePanelVC:(id)arg1;
- (id)musicClipVC;
- (void)setMusicClipVC:(id)arg1;
- (id)visagePanelVC;
- (void)setVisagePanelVC:(id)arg1;
- (id)toolboxPanelVC;
- (void)setToolboxPanelVC:(id)arg1;
- (id)toolboxSheetVC;
- (void)setToolboxSheetVC:(id)arg1;
- (BOOL)hasConfiguredDuoNavigationLayout;
- (void)setHasConfiguredDuoNavigationLayout:(BOOL)arg1;
- (CGSize)lastDuoLayoutSize;
- (void)setLastDuoLayoutSize:(CGSize)arg1;
- (UIEdgeInsets)lastDuoLayoutSafeAreaInsets;
- (void)setLastDuoLayoutSafeAreaInsets:(UIEdgeInsets)arg1;
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
- (unsigned long long)musicDownloadSessionID;
- (void)setMusicDownloadSessionID:(unsigned long long)arg1;
- (BOOL)hasShowTempalteModeSwitchTips;
- (void)setHasShowTempalteModeSwitchTips:(BOOL)arg1;
- (id)currentTemplateParams;
- (void)setCurrentTemplateParams:(id)arg1;
- (id)showingToast;
- (void)setShowingToast:(id)arg1;
- (BOOL)hasShownMicMutedToast;
- (void)setHasShownMicMutedToast:(BOOL)arg1;
- (id)cameraSwitchButton;
- (void)setCameraSwitchButton:(id)arg1;
- (id)sideToolbar;
- (void)setSideToolbar:(id)arg1;
- (id)bottomMenuBar;
- (void)setBottomMenuBar:(id)arg1;
- (id)sideToolboxEntryView;
- (void)setSideToolboxEntryView:(id)arg1;
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
- (id)switchCameraButton;
- (void)setSwitchCameraButton:(id)arg1;
- (id)templatePickAssetEntry;
- (void)setTemplatePickAssetEntry:(id)arg1;
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
- (id)countdownCancelButton;
- (void)setCountdownCancelButton:(id)arg1;
- (id)returnButtonForVoiceOver;
- (void)setReturnButtonForVoiceOver:(id)arg1;
- (id)returnButtonForPageSheetVoiceOver;
- (void)setReturnButtonForPageSheetVoiceOver:(id)arg1;
- (id)returnButtonForToolboxSheetVoiceOver;
- (void)setReturnButtonForToolboxSheetVoiceOver:(id)arg1;
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
- (id)aigcStartSnapshotImage;
- (void)setAigcStartSnapshotImage:(id)arg1;
- (id)aigcPlaceholderView;
- (void)setAigcPlaceholderView:(id)arg1;
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
- (id)aigcAsyncCancelActionSheet;
- (void)setAigcAsyncCancelActionSheet:(id)arg1;
- (id)templateSwitchLoadingToast;
- (void)setTemplateSwitchLoadingToast:(id)arg1;
- (id)feedbackGenerator;
- (void)setFeedbackGenerator:(id)arg1;
- (id)fillinLightBrightBackgroundView;
- (void)setFillinLightBrightBackgroundView:(id)arg1;
- (id)shootTemplateGuideWordingLabel;
- (void)setShootTemplateGuideWordingLabel:(id)arg1;
- (id)fullScreenTemplateLoadingView;
- (void)setFullScreenTemplateLoadingView:(id)arg1;
- (id)composingViewLayout;
- (void)setComposingViewLayout:(id)arg1;
- (id)faceIDManagerView;
- (void)setFaceIDManagerView:(id)arg1;
- (id)faceIDCoverView;
- (void)setFaceIDCoverView:(id)arg1;
- (id)referenceVideoView;
- (void)setReferenceVideoView:(id)arg1;
- (id)referenceVideoPanGesture;
- (void)setReferenceVideoPanGesture:(id)arg1;
- (id)referenceVideoTapGesture;
- (void)setReferenceVideoTapGesture:(id)arg1;
- (CGRect)referenceVideoCameraMainFrame;
- (void)setReferenceVideoCameraMainFrame:(CGRect)arg1;
- (CGRect)referenceVideoCurrentFloatingFrame;
- (void)setReferenceVideoCurrentFloatingFrame:(CGRect)arg1;
- (CGRect)referenceVideoExpandedFloatingFrame;
- (void)setReferenceVideoExpandedFloatingFrame:(CGRect)arg1;
- (BOOL)hasRecordedReferenceVideoCameraMainFrame;
- (void)setHasRecordedReferenceVideoCameraMainFrame:(BOOL)arg1;
- (BOOL)referenceVideoIsMain;
- (void)setReferenceVideoIsMain:(BOOL)arg1;
- (BOOL)hasReportedReferenceVideoWindowExposure;
- (void)setHasReportedReferenceVideoWindowExposure:(BOOL)arg1;
- (BOOL)referenceVideoInteractionLocked;
- (void)setReferenceVideoInteractionLocked:(BOOL)arg1;
- (BOOL)referenceVideoIsAnimating;
- (void)setReferenceVideoIsAnimating:(BOOL)arg1;
- (BOOL)referenceVideoNeedsResumeWhenApplicationActive;
- (void)setReferenceVideoNeedsResumeWhenApplicationActive:(BOOL)arg1;
- (BOOL)hasSavedReferenceVideoCameraAppearance;
- (void)setHasSavedReferenceVideoCameraAppearance:(BOOL)arg1;
- (double)referenceVideoOriginalContentCornerRadius;
- (void)setReferenceVideoOriginalContentCornerRadius:(double)arg1;
- (float)referenceVideoOriginalContentShadowOpacity;
- (void)setReferenceVideoOriginalContentShadowOpacity:(float)arg1;
- (CGSize)referenceVideoOriginalContentShadowOffset;
- (void)setReferenceVideoOriginalContentShadowOffset:(CGSize)arg1;
- (double)referenceVideoOriginalContentShadowRadius;
- (void)setReferenceVideoOriginalContentShadowRadius:(double)arg1;
- (id)referenceVideoOriginalContentShadowColor;
- (void)setReferenceVideoOriginalContentShadowColor:(id)arg1;
- (double)referenceVideoOriginalRenderCornerRadius;
- (void)setReferenceVideoOriginalRenderCornerRadius:(double)arg1;
- (BOOL)referenceVideoOriginalRenderMasksToBounds;
- (void)setReferenceVideoOriginalRenderMasksToBounds:(BOOL)arg1;
- (void).cxx_destruct;
@end
