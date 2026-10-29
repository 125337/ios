@interface WCPlayerLayerView : UIView
{
    BOOL _isPipScene; // +0x8
    unsigned int _taskId; // +0xc
    AVPlayerLayer * _playerLayer; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 taskId:(unsigned int)arg2 isPipScene:(BOOL)arg3;
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
- (BOOL)isPipScene;
- (void)setIsPipScene:(BOOL)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (void).cxx_destruct;
@end
