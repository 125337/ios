@interface MMFinderLiveView : MMLiveView <MMLiveViewDirtyNotifyExt, MMLivePivotCollecitonViewZoomAnimatorExt, TXPIPManagerExt>
{
    NSMutableDictionary * _attachWidgetLayerDict; // +0x8
    NSMutableDictionary * _attachWidgetContainerDict; // +0x10
    MMFinderLiveViewController * _finderLiveViewController; // +0x18
    UIView * _overLoadErrorIcon; // +0x20
    UIView * _overLoadErrorText; // +0x28
    UIView * _overLoadErrorPage; // +0x30
    CGSize _lastLayoutSize; // +0x38
}
- (void)layoutOverloadErrorPage;
- (void)showOverloadErrorPage:(id)arg1;
- (void)handleForAttachWidgetsInOperationView:(id)arg1;
- (void)layoutUIForAttachWidgets;
- (void)insertAttachWidget:(id)arg1 atLayer:(unsigned long long)arg2;
- (id)getUserMicWidgetContainerView;
- (id)getAttachWidgetDictInLayerIndex:(unsigned long long)arg1;
- (id)getAttachWidgetContainerForLayerIndex:(unsigned long long)arg1;
- (void)attachAttachWidgetContainerForLayerIndex:(unsigned long long)arg1;
- (id)getSortedContainerIndexNumArr;
- (void)clearAttachWidgets;
- (void)onLiveViewDirtyNotify:(id)arg1;
- (void)handleForAudioMicFromAudienceUserOperationViewRefresh:(id)arg1 inCDN:(BOOL)arg2;
- (void)handleForAudioMicFromAudienceUserHeadImageViewRefresh:(id)arg1 inCDN:(BOOL)arg2;
- (void)handleForAudioMicFromAudienceUserNickLabelRefresh:(id)arg1 inCDN:(BOOL)arg2;
- (BOOL)isUseCDN;
- (BOOL)shouldHideNicknameInAudioMicWidgets;
- (void)refreshLiveMinimizeAudioMicWidgets;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutSubviews;
- (void)layoutAvatarView;
- (void)addAvatarView;
- (void)preloadAvatarView;
- (void)updateWeAvatarView;
- (void)updateInnerWindowSize:(CGSize)arg1;
- (BOOL)CGSizeEqualBetween:(CGSize)arg1 And:(CGSize)arg2;
- (void)layoutCDNView;
- (void)prepareForMaximizeMode;
- (void)prepareForMinimizeMode;
- (id)audioModeCoverImageUrlString;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (CGRect)getLocalAudioModeMinimizeSrcFrame;
- (id)getLiveStateText;
- (CGRect)getZoomOutTargetVideoViewFrame;
- (CGRect)getZoomInTargetVideoViewFrame;
- (void)doZoomInAnimator;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomIn;
- (void)doZoomOutAnimator;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomOut;
- (id)finderLiveViewController;
- (id)attachWidgetLayerDict;
- (id)attachWidgetContainerDict;
- (void)notifyConnectMicStateChangedIfNeeded;
- (void)handleAvatarPan:(id)arg1;
- (CGPoint)restrictAvatar:(CGPoint)arg1 InView:(id)arg2 withViewBoundsSize:(CGSize)arg3;
- (void)handleAvatarTap:(id)arg1;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (void)insertConnectMicViewsToPIPRenderLayer;
- (id)audienceLogReporter;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void)setAttachWidgetLayerDict:(id)arg1;
- (void)setAttachWidgetContainerDict:(id)arg1;
- (void)setFinderLiveViewController:(id)arg1;
- (id)overLoadErrorIcon;
- (void)setOverLoadErrorIcon:(id)arg1;
- (id)overLoadErrorText;
- (void)setOverLoadErrorText:(id)arg1;
- (id)overLoadErrorPage;
- (void)setOverLoadErrorPage:(id)arg1;
- (void).cxx_destruct;
@end

