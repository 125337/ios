@interface TAVMediaPlayerView : UIView <TAVMediaViewProtocol>
{
    BOOL _shouldAnimation; // +0x8
    BOOL _paused; // +0x9
    unsigned long long _fillMode; // +0x10
    AVPlayer * _player; // +0x18
}
+ (Class)layerClass;
- (void)updateLayerFillMode;
- (id)player;
- (void)setPlayer:(id)arg1;
- (CGRect)videoRect;
- (void)refreshView;
- (unsigned long long)fillMode;
- (void)setFillMode:(unsigned long long)arg1;
- (BOOL)shouldAnimation;
- (void)setShouldAnimation:(BOOL)arg1;
- (BOOL)isPaused;
- (void)setPaused:(BOOL)arg1;
- (void).cxx_destruct;
@end

