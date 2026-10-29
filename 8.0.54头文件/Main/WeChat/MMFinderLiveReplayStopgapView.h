@interface MMFinderLiveReplayStopgapView : UIView <MMFinderLiveWcPlayerViewModelDelegate>
{
    id <MMFinderLiveReplayStopgapViewDelegate> _delegate; // +0x8
    MMFinderLiveWcPlayerView * _playerView; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    unsigned long long _countdownValue; // +0x20
    MMTimer * _countdownTimer; // +0x28
    MMFinderLiveReplayStopgapPlayerViewModel * _playerViewModel; // +0x30
    UIView * _containerView; // +0x38
    UIView * _blurView; // +0x40
    UIView * _fadeTransitionView; // +0x48
    UIView * _titleContainerView; // +0x50
    UIImageView * _liveBrandIconView; // +0x58
    UILabel * _titleView; // +0x60
    UILabel * _subtitleView; // +0x68
    UIView * _countdownContainerView; // +0x70
    UILabel * _countdownLabel; // +0x78
    UILabel * _countdownDescriptionLabel; // +0x80
    CGSize _videoSize; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)start;
- (void)beginCompletion;
- (void)layoutSubviews;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)onMinimizeWindowDismissLiveView:(id)arg1;
- (void)onLiveWcPlayerVideoSizeChange:(id)arg1 videoSize:(CGSize)arg2;
- (void)countdownTick;
- (void)beginCompletionTransition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)countdownValue;
- (void)setCountdownValue:(unsigned long long)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (id)playerViewModel;
- (void)setPlayerViewModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)fadeTransitionView;
- (void)setFadeTransitionView:(id)arg1;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg1;
- (id)liveBrandIconView;
- (void)setLiveBrandIconView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)subtitleView;
- (void)setSubtitleView:(id)arg1;
- (id)countdownContainerView;
- (void)setCountdownContainerView:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)countdownDescriptionLabel;
- (void)setCountdownDescriptionLabel:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

