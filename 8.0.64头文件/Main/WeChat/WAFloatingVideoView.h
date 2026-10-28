@interface WAFloatingVideoView : UIView <MoveWithTouchAlgorithmDelegate>
{
    UIView<WAStreamPlayerInterface> * _videoView; // +0x8
    UIView * _videoParentView; // +0x10
    UIView * _audioOnlyShadowView; // +0x18
    id <WAFloatingVideoDelegate> _delegate; // +0x20
    UIView * _interactiveView; // +0x28
    SightIconView * _loadingView; // +0x30
    MMUIButton * _closeBtn; // +0x38
    UIView * _progressView; // +0x40
    MoveWithTouchAlgorithm * _moveAlgorithm; // +0x48
}
- (id)initWithDelegate:(id)arg1;
- (void)setupSubviews;
- (void)updatePlayerView:(id)arg1;
- (void)showProgressViewWithProgress:(double)arg1;
- (void)hideInteractiveView;
- (void)showInteractiveView;
- (BOOL)isVideoViewFloating:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldLockToPortrait;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onOrientationChanged;
- (void)onVideoViewClosed;
- (void)onFloatingVideoClick;
- (void)removeVideoView;
- (id)getVideoView;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)videoParentView;
- (void)setVideoParentView:(id)arg1;
- (id)audioOnlyShadowView;
- (void)setAudioOnlyShadowView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interactiveView;
- (void)setInteractiveView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)moveAlgorithm;
- (void)setMoveAlgorithm:(id)arg1;
- (void).cxx_destruct;
@end
