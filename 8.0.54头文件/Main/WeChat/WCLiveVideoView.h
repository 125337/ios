@interface WCLiveVideoView : UIImageView <MoveWithTouchAlgorithmDelegate>
{
    id <WCLiveVideoViewDelegate> _delegate; // +0x8
    UIView * _frontView; // +0x10
    MoveWithTouchAlgorithm * _moveAlgorithm; // +0x18
    CGPoint _currentOrigin; // +0x20
}
- (void)supportDragIn:(CGRect)arg1 allowAdsorbToWindow:(BOOL)arg2;
- (void)supportDrag;
- (void)unSupportDrag;
- (void)adsorbToWindow;
- (void)setHidden:(BOOL)arg1;
- (void)addFrontView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)createMoveAlgorithm;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (BOOL)shouldLockToPortrait;
- (BOOL)shouldForcePortrait;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGPoint)currentOrigin;
- (void)setCurrentOrigin:(CGPoint)arg1;
- (id)frontView;
- (void)setFrontView:(id)arg1;
- (id)moveAlgorithm;
- (void)setMoveAlgorithm:(id)arg1;
- (void).cxx_destruct;
@end

