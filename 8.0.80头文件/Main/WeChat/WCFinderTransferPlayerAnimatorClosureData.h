@interface WCFinderTransferPlayerAnimatorClosureData : NSObject
{
    UIView * _moveBox; // +0x8
    WCPlayerView * _playerView; // +0x10
    CGAffineTransform _fromTransform; // +0x18
}
- (id)moveBox;
- (void)setMoveBox:(id)arg1;
- (CGAffineTransform)fromTransform;
- (void)setFromTransform:(CGAffineTransform)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void).cxx_destruct;
@end
