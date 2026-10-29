@interface MMFinderLivedConnectMicAudiencePreviewCameraView : UIView <MMLiveTrtcRenderingNotificationDelegate, MMFinderLiveGestureAnimationContainerViewDelegate>
{
    BOOL _activeMode; // +0x8
    UIView * _activeRenderTargetView; // +0x10
    MMFinderLiveGestureAnimationContainerView * _gestureAnimationContainerView; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    CGRect _clearArea; // +0x28
}
- (id)initWithTaskId:(id)arg1 activeMode:(BOOL)arg2;
- (void)setActiveMode:(BOOL)arg1;
- (void)setClearArea:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (void)initializeComponents;
- (id)liveTask;
- (id)activeRenderTargetView;
- (void)setActiveRenderTargetView:(id)arg1;
- (BOOL)activeMode;
- (CGRect)clearArea;
- (id)gestureAnimationContainerView;
- (void)setGestureAnimationContainerView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
