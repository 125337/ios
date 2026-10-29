@interface WxpayLFSPagTargetPlayer : NSObject <WxpayPagTargetPlayer>
{
    PAGPlayer * _player; // +0x8
    NSArray * _surfaces; // +0x10
}
- (long long)currentFrame;
- (BOOL)prime:(double)arg1;
- (BOOL)present:(double)arg1 bufferIndex:(unsigned long long)arg2 changed:(BOOL *)arg3;
- (void)close;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)surfaces;
- (void)setSurfaces:(id)arg1;
- (void).cxx_destruct;
@end
