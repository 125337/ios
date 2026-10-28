@interface WCPlayerImagePlayerViewController : NSObject <WCPlayerControlProtocol>
{
    id <WCPlayerImagePlayerViewControllerDelegate> _delegate; // +0x8
    WCPlayerView * _playerView; // +0x10
}
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void).cxx_destruct;
@end
