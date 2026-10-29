@interface VoIPCallBufferSnapshot : NSObject
{
    NSArray * _localAudioPackets; // +0x8
    NSArray * _remoteAudioPackets; // +0x10
    NSArray * _uiStateTimeline; // +0x18
    VoIPCallSDKVideoSnapshot * _sdkVideoSnapshot; // +0x20
    unsigned long long _freezeTimestampNs; // +0x28
}
- (id)localAudioPackets;
- (void)setLocalAudioPackets:(id)arg1;
- (id)remoteAudioPackets;
- (void)setRemoteAudioPackets:(id)arg1;
- (id)uiStateTimeline;
- (void)setUiStateTimeline:(id)arg1;
- (id)sdkVideoSnapshot;
- (void)setSdkVideoSnapshot:(id)arg1;
- (unsigned long long)freezeTimestampNs;
- (void)setFreezeTimestampNs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
