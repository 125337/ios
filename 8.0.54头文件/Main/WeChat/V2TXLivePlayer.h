@interface V2TXLivePlayer : NSObject <V2TXLivePlayer>
{
    unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread; // +0x8
    Player * _player; // +0x10
    shared_ptr<liteav::live::V2TXLivePlayerObserverImpl> _client; // +0x18
    Config _config; // +0x28
    BOOL _clear_last_image; // +0xc8
}
- (id)init;
- (void)dealloc;
- (void)setObserver:(id)arg1;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (long long)setRenderView:(id)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setRenderFillMode:(long long)arg1;
- (long long)startPlay:(id)arg1;
- (long long)stopPlay;
- (int)isPlaying;
- (long long)pauseAudio;
- (long long)resumeAudio;
- (long long)pauseVideo;
- (long long)resumeVideo;
- (long long)setPlayoutVolume:(unsigned long long)arg1;
- (long long)setCacheParams:(double)arg1 maxTime:(double)arg2;
- (long long)switchStream:(id)arg1;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)snapshot;
- (long long)enableObserveVideoFrame:(BOOL)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (void)showDebugView:(BOOL)arg1;
- (long long)enableReceiveSeiMessage:(BOOL)arg1 payloadType:(int)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

