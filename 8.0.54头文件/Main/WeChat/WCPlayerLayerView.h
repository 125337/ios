@interface WCPlayerLayerView : UIView
{
    unsigned int _taskId; // +0x8
    AVPlayerLayer * _playerLayer; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)isReadyForDisplay;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (id)getPlayerLayer;
- (void)setPlayer:(id)arg1;
- (void)layoutSubviews;
- (void)setVideoGravity:(id)arg1;
- (void)resetView;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (void).cxx_destruct;
@end

