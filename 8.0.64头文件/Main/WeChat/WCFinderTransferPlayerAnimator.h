@interface WCFinderTransferPlayerAnimator : NSObject <WCFinderTrailingAnimator>
{
    id <WCFinderTransferPlayerDelegate> _delegate; // +0x8
    WCPlayerView * _enterPlayerView; // +0x10
    WCFinderDataItem * _enterDataItem; // +0x18
    CGRect _enterPlayerFrame; // +0x20
}
- (void)setPlayer:(id)arg1 forDataItem:(id)arg2 globalDisplayFrame:(CGRect)arg3;
- (void)beforeAnimation:(id)arg1 takeVideoPlayer:(id)arg2;
- (void)startAnimation:(id)arg1;
- (void)beforeExpandAnimation:(id)arg1 playerView:(id)arg2;
- (void)startExpandAnimation:(id)arg1;
- (void)onAnimationComplete:(BOOL)arg1 context:(id)arg2;
- (void)onExpandAnimationComplete:(BOOL)arg1 context:(id)arg2;
- (void)beforeClosureAnimation:(id)arg1 playerView:(id)arg2;
- (void)startClosureAnimation:(id)arg1;
- (void)onClosureAnimationComplete:(BOOL)arg1 context:(id)arg2;
- (BOOL)shouldDragDownAsCard;
- (BOOL)shouldGestureClosureAsCard;
- (id)enterPassPlayerTid;
- (BOOL)closureTakePlayer;
- (id)chooseAnimatorWithOther:(id /* block */)arg1 context:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)enterPlayerView;
- (void)setEnterPlayerView:(id)arg1;
- (id)enterDataItem;
- (void)setEnterDataItem:(id)arg1;
- (CGRect)enterPlayerFrame;
- (void)setEnterPlayerFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
