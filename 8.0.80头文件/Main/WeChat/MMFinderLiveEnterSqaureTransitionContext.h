@interface MMFinderLiveEnterSqaureTransitionContext : MMFinderLiveTransitionContext
{
    BOOL _isGesturePanEnter; // +0x8
    double _duration; // +0x10
    MMFinderLiveHomePageBottomPlayerView * _playerBottomView; // +0x18
    UIView * _playerControlView; // +0x20
    UIView * _liveView; // +0x28
    UIView * _navBar; // +0x30
    UIImageView * _snapshotLiveView; // +0x38
    UIView * _liveRoomView; // +0x40
    UIImageView * _snapshotLiveViewVideoContainer; // +0x48
    double _snapshotLiveViewTopOffset; // +0x50
    UIView * _transitionToView; // +0x58
    CGRect _initialPlayerBottomViewFrame; // +0x60
    CGRect _initialLiveFrame; // +0x80
    CGRect _finalPlayerBottomViewFrame; // +0xa0
    CGRect _finalLiveFrame; // +0xc0
}
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)playerBottomView;
- (void)setPlayerBottomView:(id)arg1;
- (id)playerControlView;
- (void)setPlayerControlView:(id)arg1;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)snapshotLiveView;
- (void)setSnapshotLiveView:(id)arg1;
- (id)liveRoomView;
- (void)setLiveRoomView:(id)arg1;
- (id)snapshotLiveViewVideoContainer;
- (void)setSnapshotLiveViewVideoContainer:(id)arg1;
- (CGRect)initialPlayerBottomViewFrame;
- (void)setInitialPlayerBottomViewFrame:(CGRect)arg1;
- (CGRect)initialLiveFrame;
- (void)setInitialLiveFrame:(CGRect)arg1;
- (CGRect)finalPlayerBottomViewFrame;
- (void)setFinalPlayerBottomViewFrame:(CGRect)arg1;
- (CGRect)finalLiveFrame;
- (void)setFinalLiveFrame:(CGRect)arg1;
- (double)snapshotLiveViewTopOffset;
- (void)setSnapshotLiveViewTopOffset:(double)arg1;
- (id)transitionToView;
- (void)setTransitionToView:(id)arg1;
- (BOOL)isGesturePanEnter;
- (void)setIsGesturePanEnter:(BOOL)arg1;
- (void).cxx_destruct;
@end
