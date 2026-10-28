@interface TXChorusMusicPlayer : NSObject
{
    shared_ptr<(anonymous namespace)::TXChorusPlayerCallback> callback_; // +0x8
    unique_ptr<liteav::chorus::ChorusPlayerImpl, std::default_delete<liteav::chorus::ChorusPlayerImpl>> player_; // +0x18
    TRTCCloud * cloud_; // +0x20
    TRTCCloud * subCloud_; // +0x28
}
+ (id)createPlayerWithTrtcCloud:(id)arg1 roomId:(id)arg2 delegate:(id)arg3;
- (id)initWithTrtcCloud:(id)arg1 roomId:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)setChorusRole:(long long)arg1 trtcParamsForPlayer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)loadMusic:(id)arg1;
- (void)loadExternalMusic:(id)arg1;
- (void)start;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)seek:(long long)arg1;
- (void)switchMusicTrack:(long long)arg1;
- (void)setPlayoutVolume:(int)arg1;
- (void)setPublishVolume:(int)arg1;
- (void)setMusicPitch:(float)arg1;
- (void)callExperimentalAPI:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
