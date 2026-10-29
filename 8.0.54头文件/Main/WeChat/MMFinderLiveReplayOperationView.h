@interface MMFinderLiveReplayOperationView : UIView <UIGestureRecognizerDelegate, WCFinderLiveReplayControlDelegate, WCFinderLiveFullScreenGestureDelegate>
{
    BOOL _isHiddenContent; // +0x8
    id <MMFinderLiveReplayOperationViewDelegate> _operationDelegate; // +0x10
    WCFinderLiveReplayControlView * _controlView; // +0x18
    MMLiveRewardGiftRecievingAnimationView * _giftReceivingAnimationView; // +0x20
    MMFinderLiveReplayView * _replayView; // +0x28
    WCFinderLiveFullScreenGestureRecognizer * _fullScreenGesture; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
    MMLiveGradientView * _topShadowView; // +0x40
    MMLiveGradientView * _bottomShadowView; // +0x48
    MMFinderLiveTask * _finderLiveTask; // +0x50
    MMFinderLiveReplayTaskId * _replayTaskId; // +0x58
    MMFinderLiveTaskId * _taskId; // +0x60
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithLiveTask:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)onEnterLive;
- (void)onGetLiveInfo;
- (void)onReplayLiveInfoUpdate;
- (void)onGetDetailDataItem;
- (void)onExitLive;
- (void)configureOperationViewWithConnectMicState:(id)arg1 connectMicStateValid:(BOOL)arg2 anchorInAudioMode:(BOOL)arg3 isScreenSharing:(BOOL)arg4;
- (void)layoutUI;
- (void)layoutReplayControlView;
- (void)layoutShadowView;
- (void)createReplayControlView;
- (id)createHLSPlayerConfig;
- (void)setIsHiddenContent:(BOOL)arg1;
- (id)liveTask;
- (id)replayTask;
- (BOOL)shouldHideTopMaskWhenCLeanScreen;
- (BOOL)shouldHideBottomMaskWhenCLeanScreen;
- (void)addFullScreenGesture;
- (void)showContents;
- (void)hideContents;
- (BOOL)shouldAllowProgressManipulationByPanning;
- (void)onFullScreenSingleTap;
- (BOOL)handleForFullScreenSingleTap;
- (void)onPanned:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onVideoSizeChange:(CGSize)arg1;
- (id)getPreviewContainerSuperView;
- (double)getProgrressBarLeft;
- (double)getProgrressBarRight;
- (BOOL)isFullScreenGestureShouldReceiveTouch:(id)arg1;
- (BOOL)isFullScreenPanGestureShouldReceiveTouch:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)giftReceivingAnimationView;
- (id)replayView;
- (void)setReplayView:(id)arg1;
- (id)fullScreenGesture;
- (void)setFullScreenGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)topShadowView;
- (void)setTopShadowView:(id)arg1;
- (id)bottomShadowView;
- (void)setBottomShadowView:(id)arg1;
- (id)finderLiveTask;
- (void)setFinderLiveTask:(id)arg1;
- (id)replayTaskId;
- (void)setReplayTaskId:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isHiddenContent;
- (void).cxx_destruct;
@end

