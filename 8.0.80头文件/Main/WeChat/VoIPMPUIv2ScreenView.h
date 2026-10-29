@interface VoIPMPUIv2ScreenView : VoIPMPUIv2View <VoIPOrientationServiceExtension, IVOIPExt, VoipUIManagerExt, VoIPScreenWindowViewDelegate>
{
    BOOL _isOrientationServiceEnable; // +0x8
    BOOL _isVideoMode; // +0x9
    BOOL _isCleared; // +0xa
    BOOL _isTalking; // +0xb
    BOOL _isEnding; // +0xc
    BOOL _isMiniInAppActived; // +0xd
    BOOL _isMainLocal; // +0xe
    BOOL _isCallee; // +0xf
    BOOL _isCameraLandscapeMode; // +0x10
    BOOL _isLocalCoveringRemote; // +0x11
    BOOL _horizontalSplitExperimentEnabled; // +0x12
    BOOL _isAnimatingForSplit; // +0x13
    BOOL _isAnimatingForSplitPrepartion; // +0x14
    BOOL _isAnimatingForSplitTips; // +0x15
    BOOL _isSubWindowViewZoomingIn; // +0x16
    BOOL _isSubWindowViewDragging; // +0x17
    BOOL _isSubWindowViewCenterSetuped; // +0x18
    BOOL _isUsingHalfContentHeightAsSplitActiveRegionHeight; // +0x19
    BOOL _isSubWindowViewDraggingFromSplit; // +0x1a
    BOOL _isSubWindowViewDraggingFromTopHalf; // +0x1b
    BOOL _horizontalSplitHintUnlocked; // +0x1c
    BOOL _isSplitTopTipsHidden; // +0x1d
    BOOL _isSplitBottomTipsHidden; // +0x1e
    BOOL _isSubWindowViewOutsided; // +0x1f
    BOOL _isSubWindowViewFolded; // +0x20
    BOOL _needDelayRefreshSubWindowDefaultSize; // +0x21
    BOOL _isMaskLayerEnabled; // +0x22
    BOOL _needRefreshVideoAspectAdaptationGeometryAfterGesture; // +0x23
    VoIPMPUIv2ScreenWindowView * _remoteWindowView; // +0x28
    VoIPMPUIv2ScreenWindowView * _localWindowView; // +0x30
    double _topBarHeight; // +0x38
    double _panelHeight; // +0x40
    id /* block */ _onTapEvent; // +0x48
    id /* block */ _didTapEvent; // +0x50
    id /* block */ _onMoveSubWindowViewEvent; // +0x58
    id /* block */ _didMoveSubWindowViewEvent; // +0x60
    id /* block */ _didScaleSubWindowViewEvent; // +0x68
    id /* block */ _didUpdateSubWindowGeometryEvent; // +0x70
    id /* block */ _didFoldSubWindowViewEvent; // +0x78
    id /* block */ _didUnFoldSubWindowViewEvent; // +0x80
    id /* block */ _didSwitchToSplitEvent; // +0x88
    id /* block */ _onRestoreEvent; // +0x90
    id /* block */ _onShowTipsEvent; // +0x98
    id /* block */ _onSetSplit; // +0xa0
    double _mainWindowViewRotateDegree; // +0xa8
    double _subWindowViewRotateDegree; // +0xb0
    VoIPMPUIv2View * _contentView; // +0xb8
    VoIPMPUIv2View * _tapView; // +0xc0
    VoIPMPUIv2SplitContext * _splitContext; // +0xc8
    double _startEnteringSplitActiveRegionTimestamp; // +0xd0
    double _splitTipsActiveRegionHeight; // +0xd8
    double _screenSplitDraggableAreaHeight; // +0xe0
    double _splitExitGestureBeganAt; // +0xe8
    id /* block */ _detectSplitExitPreviewBlock; // +0xf0
    unsigned long long _splitTipsLocation; // +0xf8
    unsigned long long _splitTopTipsStatus; // +0x100
    double _splitTopTipsViewHeight; // +0x108
    VoIPMPUIv2View * _splitTopTipsView; // +0x110
    VoIPMPUIv2ImageView * _splitTopTipsBackgroundImageView; // +0x118
    VoIPMPUIv2View * _splitTopTipsContainerView; // +0x120
    VoIPMPUIv2ImageView * _splitTopTipsIconImageView; // +0x128
    UILabel * _splitTopTipsLabel; // +0x130
    unsigned long long _splitBottomTipsStatus; // +0x138
    double _splitBottomTipsViewHeight; // +0x140
    VoIPMPUIv2View * _splitBottomTipsView; // +0x148
    VoIPMPUIv2ImageView * _splitBottomTipsBackgroundImageView; // +0x150
    VoIPMPUIv2View * _splitBottomTipsContainerView; // +0x158
    VoIPMPUIv2ImageView * _splitBottomTipsIconImageView; // +0x160
    UILabel * _splitBottomTipsLabel; // +0x168
    VoIPMPUIv2ImageView * _splitBackgroundImageView; // +0x170
    id /* block */ _detectSplitPreprationBlock; // +0x178
    unsigned long long _subWindowViewUnFoldType; // +0x180
    unsigned long long _willDragStatus; // +0x188
    double _currentSubWindowViewRotateDegree; // +0x190
    VoIPMPUIv2ScreenWindowSplitPanelView * _mainPanelView; // +0x198
    VoIPMPUIv2ScreenWindowSplitPanelView * _subPanelView; // +0x1a0
    VoIPMPUIv2View * _maskLayerView; // +0x1a8
    unsigned long long _resolvedVideoAspectAdaptationRenderPolicy; // +0x1b0
    CGPoint _switchToSplitPrepartionSubWindowViewDragToCenter; // +0x1b8
    CGSize _mainWindowViewSize; // +0x1c8
    CGPoint _subWindowViewCenter; // +0x1d8
    CGSize _subWindowViewSize; // +0x1e8
    CGSize _subWindowViewDefaultSize; // +0x1f8
    CGSize _subWindowViewMinScaleSize; // +0x208
    CGPoint _subWindowViewBeforeSplitCenter; // +0x218
    CGSize _subWindowViewBeforeSplitSize; // +0x228
    CGPoint _splitExitGestureStartCenter; // +0x238
    CGSize _subWindowViewCurrentScaleSize; // +0x248
}
+ (BOOL)p_currentLanguageUsesVerticalText;
+ (id)p_verticalCJKText:(id)arg1;
- (void)setIsCallee:(BOOL)arg1;
- (void)setupAudioInterruption:(BOOL)arg1;
- (BOOL)isMainRemote;
- (BOOL)isSubWindowLocal;
- (BOOL)isSubWindowRemote;
- (BOOL)isRemoteLandscapeModeOn;
- (void)adjustMainWindowViewParams;
- (void)adjustSubWindowViewParamsIfShouldRefreshSubWindowViewDefaultSize:(BOOL)arg1;
- (void)updateDefaultSmallWindowSize;
- (BOOL)isSubWindowLandscapeModeOn;
- (BOOL)p_isLegacyLandscapeSmallWindowSizeActive;
- (BOOL)p_shouldTransposeSubWindowDefaultSizeForRotate;
- (CGSize)calSubWindowViewDefaultSize;
- (CGSize)normalizedSubWindowViewDefaultSize:(CGSize)arg1;
- (CGSize)calSubWindowViewDefaultSizeWithIsLandscapeMode:(BOOL)arg1;
- (CGSize)getScreenViewSize;
- (CGSize)getDefaultSmallWindowSizeWithLandscapeMode:(BOOL)arg1;
- (void)setupSuspend:(BOOL)arg1 isRemote:(BOOL)arg2;
- (unsigned long long)p_resolvedSplitAxisForCurrentViewport;
- (unsigned long long)p_splitMemberForWindowView:(id)arg1;
- (unsigned long long)p_otherSplitMember:(unsigned long long)arg1;
- (BOOL)p_isSplitPhase:(unsigned long long)arg1;
- (BOOL)isSplit;
- (BOOL)isSplitPrepartion;
- (BOOL)isPreparingHorizontalSplitFromFloat;
- (BOOL)p_isWindowViewInLeadingSplitSlot:(id)arg1;
- (BOOL)p_isSubWindowViewOnTopWhenSplit;
- (BOOL)p_isHorizontalSplit;
- (CGSize)p_splitSlotSize;
- (unsigned long long)p_splitSlotForWindowView:(id)arg1;
- (unsigned long long)p_publicSplitAxis;
- (unsigned long long)p_publicSplitMemberForWindowView:(id)arg1;
- (id)p_splitEventUserInfoForWindowView:(id)arg1 slot:(unsigned long long)arg2;
- (void)p_notifyDidMoveSubWindowViewWithUserInfo:(id)arg1;
- (void)p_applySplitFrameToWindowView:(id)arg1 leading:(BOOL)arg2;
- (unsigned long long)p_splitEdgeForTipsLocation:(unsigned long long)arg1;
- (void)p_invalidateSplitGeneration;
- (void)p_handleSplitViewportChange;
- (void)p_transitionSplitToPhase:(unsigned long long)arg1 targetEdge:(unsigned long long)arg2 previewMember:(unsigned long long)arg3 freezeMemberOrder:(BOOL)arg4;
- (BOOL)isSplitEnabled;
- (BOOL)isSplitLocalOnTop;
- (unsigned long long)splitAxis;
- (unsigned long long)localSplitSlot;
- (BOOL)isSubWindowFolded;
- (BOOL)isSubFloatedAndFolded;
- (BOOL)shouldInterceptLeftEdgeGestureWithTouchPoint:(CGPoint)arg1;
- (void)p_beginHorizontalSplitExitGestureForWindowView:(id)arg1;
- (void)p_restoreStableSplitAfterCancelledExitPreviewWithUserInfo:(id)arg1 targetFoldScale:(double)arg2;
- (BOOL)p_cancelHorizontalSplitExitPreviewForWindowView:(id)arg1;
- (void)moveSubWindowViewToOrigin:(CGPoint)arg1 withSize:(CGSize)arg2;
- (void)moveSubWindowViewWithUserInfo:(id)arg1;
- (void)endToMoveSubWindowViewWithUserInfo:(id)arg1;
- (void)doSplit;
- (void)restoreWithWindowView:(id)arg1;
- (void)setSubWindowViewCenter:(CGPoint)arg1;
- (void)zoomSubWindowViewWithInCompletion:(id /* block */)arg1 outCompletion:(id /* block */)arg2;
- (id)mainWindowView;
- (id)subWindowView;
- (void)cancelAllWindowViewAnimation;
- (BOOL)isSubWindowViewInPreSplitDraggableAreaTop;
- (BOOL)isSubWindowViewInPreSplitDraggableAreaBottom;
- (BOOL)isSubWindowViewInScreenSplitActiveRegionTop;
- (BOOL)isSubWindowViewInScreenSplitActiveRegionBottom;
- (CGAffineTransform)contentTransformWithRotateDegree:(double)arg1;
- (void)layoutMainWindowViewWithIsSubWindowViewInScreenSplitActiveRegionTop:(BOOL)arg1 isSubWindowViewInScreenSplitActiveRegionBottom:(BOOL)arg2;
- (void)layoutSubWindowViewWithLastSubWindowViewFrame:(CGRect)arg1 isSubWindowViewInScreenSplitActiveRegionTop:(BOOL)arg2 isSubWindowViewInScreenSplitActiveRegionBottom:(BOOL)arg3;
- (void)layoutSplitBottomTips;
- (void)layoutSplitTopTips;
- (void)layoutSplitBackgroundImageView;
- (void)setIsTalking:(BOOL)arg1;
- (void)setupMaskLayer;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)adjustSubWindowPositionIfNeeded:(BOOL)arg1;
- (void)notifySubWindowGeometryDidStabilize;
- (void)setIsCameraLandscapeMode:(BOOL)arg1;
- (void)setIsMainLocal:(BOOL)arg1;
- (void)voIPOrientationServiceDidChangeDeviceOrientation;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)voIPOrientationServiceDidChangeMotionOrientation;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)OnRemoteLandscapeModeChange:(BOOL)arg1;
- (void)onVideoAspectAdaptationEnabledChanged:(BOOL)arg1;
- (void)onRemoteVideoFrameRatioChanged:(int)arg1;
- (BOOL)p_isVideoAspectAdaptationEnabled;
- (double)p_localVideoAspectAdaptationContainerHeightToWidthRatio;
- (double)p_remoteVideoAspectAdaptationHeightToWidthRatio;
- (BOOL)p_isVideoAspectAdaptationRemoteSameOrientation;
- (int)p_videoAspectAdaptationEncRatioForSize:(CGSize)arg1;
- (void)p_pushVideoAspectAdaptationRenderPolicy:(unsigned long long)arg1;
- (void)p_refreshVideoAspectAdaptationEncRatio;
- (void)p_refreshVideoAspectAdaptationRenderPolicyWithGeometry:(BOOL)arg1;
- (BOOL)isOrientationServiceEnable;
- (void)setIsOrientationServiceEnable:(BOOL)arg1;
- (BOOL)isVideoMode;
- (void)setIsVideoMode:(BOOL)arg1;
- (BOOL)isCleared;
- (void)setIsCleared:(BOOL)arg1;
- (BOOL)isTalking;
- (BOOL)isEnding;
- (void)setIsEnding:(BOOL)arg1;
- (id)remoteWindowView;
- (void)setRemoteWindowView:(id)arg1;
- (id)localWindowView;
- (void)setLocalWindowView:(id)arg1;
- (double)topBarHeight;
- (void)setTopBarHeight:(double)arg1;
- (double)panelHeight;
- (void)setPanelHeight:(double)arg1;
- (id /* block */)onTapEvent;
- (void)setOnTapEvent:(id /* block */)arg1;
- (id /* block */)didTapEvent;
- (void)setDidTapEvent:(id /* block */)arg1;
- (id /* block */)onMoveSubWindowViewEvent;
- (void)setOnMoveSubWindowViewEvent:(id /* block */)arg1;
- (id /* block */)didMoveSubWindowViewEvent;
- (void)setDidMoveSubWindowViewEvent:(id /* block */)arg1;
- (id /* block */)didScaleSubWindowViewEvent;
- (void)setDidScaleSubWindowViewEvent:(id /* block */)arg1;
- (id /* block */)didUpdateSubWindowGeometryEvent;
- (void)setDidUpdateSubWindowGeometryEvent:(id /* block */)arg1;
- (id /* block */)didFoldSubWindowViewEvent;
- (void)setDidFoldSubWindowViewEvent:(id /* block */)arg1;
- (id /* block */)didUnFoldSubWindowViewEvent;
- (void)setDidUnFoldSubWindowViewEvent:(id /* block */)arg1;
- (id /* block */)didSwitchToSplitEvent;
- (void)setDidSwitchToSplitEvent:(id /* block */)arg1;
- (id /* block */)onRestoreEvent;
- (void)setOnRestoreEvent:(id /* block */)arg1;
- (id /* block */)onShowTipsEvent;
- (void)setOnShowTipsEvent:(id /* block */)arg1;
- (id /* block */)onSetSplit;
- (void)setOnSetSplit:(id /* block */)arg1;
- (BOOL)isMiniInAppActived;
- (void)setIsMiniInAppActived:(BOOL)arg1;
- (BOOL)isMainLocal;
- (double)mainWindowViewRotateDegree;
- (void)setMainWindowViewRotateDegree:(double)arg1;
- (double)subWindowViewRotateDegree;
- (void)setSubWindowViewRotateDegree:(double)arg1;
- (BOOL)isCallee;
- (BOOL)isCameraLandscapeMode;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tapView;
- (void)setTapView:(id)arg1;
- (BOOL)isLocalCoveringRemote;
- (void)setIsLocalCoveringRemote:(BOOL)arg1;
- (id)splitContext;
- (void)setSplitContext:(id)arg1;
- (BOOL)horizontalSplitExperimentEnabled;
- (void)setHorizontalSplitExperimentEnabled:(BOOL)arg1;
- (CGPoint)switchToSplitPrepartionSubWindowViewDragToCenter;
- (void)setSwitchToSplitPrepartionSubWindowViewDragToCenter:(CGPoint)arg1;
- (BOOL)isAnimatingForSplit;
- (void)setIsAnimatingForSplit:(BOOL)arg1;
- (double)startEnteringSplitActiveRegionTimestamp;
- (void)setStartEnteringSplitActiveRegionTimestamp:(double)arg1;
- (BOOL)isAnimatingForSplitPrepartion;
- (void)setIsAnimatingForSplitPrepartion:(BOOL)arg1;
- (BOOL)isAnimatingForSplitTips;
- (void)setIsAnimatingForSplitTips:(BOOL)arg1;
- (double)splitTipsActiveRegionHeight;
- (void)setSplitTipsActiveRegionHeight:(double)arg1;
- (double)screenSplitDraggableAreaHeight;
- (void)setScreenSplitDraggableAreaHeight:(double)arg1;
- (CGSize)mainWindowViewSize;
- (void)setMainWindowViewSize:(CGSize)arg1;
- (BOOL)isSubWindowViewZoomingIn;
- (void)setIsSubWindowViewZoomingIn:(BOOL)arg1;
- (BOOL)isSubWindowViewDragging;
- (void)setIsSubWindowViewDragging:(BOOL)arg1;
- (CGPoint)subWindowViewCenter;
- (BOOL)isSubWindowViewCenterSetuped;
- (void)setIsSubWindowViewCenterSetuped:(BOOL)arg1;
- (CGSize)subWindowViewSize;
- (void)setSubWindowViewSize:(CGSize)arg1;
- (CGSize)subWindowViewDefaultSize;
- (void)setSubWindowViewDefaultSize:(CGSize)arg1;
- (CGSize)subWindowViewMinScaleSize;
- (void)setSubWindowViewMinScaleSize:(CGSize)arg1;
- (CGPoint)subWindowViewBeforeSplitCenter;
- (void)setSubWindowViewBeforeSplitCenter:(CGPoint)arg1;
- (CGSize)subWindowViewBeforeSplitSize;
- (void)setSubWindowViewBeforeSplitSize:(CGSize)arg1;
- (BOOL)isUsingHalfContentHeightAsSplitActiveRegionHeight;
- (void)setIsUsingHalfContentHeightAsSplitActiveRegionHeight:(BOOL)arg1;
- (BOOL)isSubWindowViewDraggingFromSplit;
- (void)setIsSubWindowViewDraggingFromSplit:(BOOL)arg1;
- (BOOL)isSubWindowViewDraggingFromTopHalf;
- (void)setIsSubWindowViewDraggingFromTopHalf:(BOOL)arg1;
- (BOOL)horizontalSplitHintUnlocked;
- (void)setHorizontalSplitHintUnlocked:(BOOL)arg1;
- (double)splitExitGestureBeganAt;
- (void)setSplitExitGestureBeganAt:(double)arg1;
- (CGPoint)splitExitGestureStartCenter;
- (void)setSplitExitGestureStartCenter:(CGPoint)arg1;
- (id /* block */)detectSplitExitPreviewBlock;
- (void)setDetectSplitExitPreviewBlock:(id /* block */)arg1;
- (unsigned long long)splitTipsLocation;
- (void)setSplitTipsLocation:(unsigned long long)arg1;
- (unsigned long long)splitTopTipsStatus;
- (void)setSplitTopTipsStatus:(unsigned long long)arg1;
- (BOOL)isSplitTopTipsHidden;
- (void)setIsSplitTopTipsHidden:(BOOL)arg1;
- (double)splitTopTipsViewHeight;
- (void)setSplitTopTipsViewHeight:(double)arg1;
- (id)splitTopTipsView;
- (void)setSplitTopTipsView:(id)arg1;
- (id)splitTopTipsBackgroundImageView;
- (void)setSplitTopTipsBackgroundImageView:(id)arg1;
- (id)splitTopTipsContainerView;
- (void)setSplitTopTipsContainerView:(id)arg1;
- (id)splitTopTipsIconImageView;
- (void)setSplitTopTipsIconImageView:(id)arg1;
- (id)splitTopTipsLabel;
- (void)setSplitTopTipsLabel:(id)arg1;
- (unsigned long long)splitBottomTipsStatus;
- (void)setSplitBottomTipsStatus:(unsigned long long)arg1;
- (BOOL)isSplitBottomTipsHidden;
- (void)setIsSplitBottomTipsHidden:(BOOL)arg1;
- (double)splitBottomTipsViewHeight;
- (void)setSplitBottomTipsViewHeight:(double)arg1;
- (id)splitBottomTipsView;
- (void)setSplitBottomTipsView:(id)arg1;
- (id)splitBottomTipsBackgroundImageView;
- (void)setSplitBottomTipsBackgroundImageView:(id)arg1;
- (id)splitBottomTipsContainerView;
- (void)setSplitBottomTipsContainerView:(id)arg1;
- (id)splitBottomTipsIconImageView;
- (void)setSplitBottomTipsIconImageView:(id)arg1;
- (id)splitBottomTipsLabel;
- (void)setSplitBottomTipsLabel:(id)arg1;
- (id)splitBackgroundImageView;
- (void)setSplitBackgroundImageView:(id)arg1;
- (id /* block */)detectSplitPreprationBlock;
- (void)setDetectSplitPreprationBlock:(id /* block */)arg1;
- (BOOL)isSubWindowViewOutsided;
- (void)setIsSubWindowViewOutsided:(BOOL)arg1;
- (BOOL)isSubWindowViewFolded;
- (void)setIsSubWindowViewFolded:(BOOL)arg1;
- (unsigned long long)subWindowViewUnFoldType;
- (void)setSubWindowViewUnFoldType:(unsigned long long)arg1;
- (CGSize)subWindowViewCurrentScaleSize;
- (void)setSubWindowViewCurrentScaleSize:(CGSize)arg1;
- (unsigned long long)willDragStatus;
- (void)setWillDragStatus:(unsigned long long)arg1;
- (double)currentSubWindowViewRotateDegree;
- (void)setCurrentSubWindowViewRotateDegree:(double)arg1;
- (id)mainPanelView;
- (void)setMainPanelView:(id)arg1;
- (id)subPanelView;
- (void)setSubPanelView:(id)arg1;
- (BOOL)needDelayRefreshSubWindowDefaultSize;
- (void)setNeedDelayRefreshSubWindowDefaultSize:(BOOL)arg1;
- (id)maskLayerView;
- (void)setMaskLayerView:(id)arg1;
- (BOOL)isMaskLayerEnabled;
- (void)setIsMaskLayerEnabled:(BOOL)arg1;
- (unsigned long long)resolvedVideoAspectAdaptationRenderPolicy;
- (void)setResolvedVideoAspectAdaptationRenderPolicy:(unsigned long long)arg1;
- (BOOL)needRefreshVideoAspectAdaptationGeometryAfterGesture;
- (void)setNeedRefreshVideoAspectAdaptationGeometryAfterGesture:(BOOL)arg1;
- (void).cxx_destruct;
@end
