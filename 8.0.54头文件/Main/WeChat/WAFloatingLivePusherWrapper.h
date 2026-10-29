@interface WAFloatingLivePusherWrapper : WAFloatingViewBaseWrapper
{
    id <ITXLivePushJSAdapter> _livePusher; // +0x8
}
- (id)livePusher;
- (id)playerView;
- (void)pause;
- (void)play;
- (void)stop;
- (void)setLivePusher:(id)arg1;
- (void).cxx_destruct;
@end

