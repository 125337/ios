@interface LiveKTVAudioSettingCacheInfo : NSObject <PBCoding>
{
    BOOL _voiceEarEnabled; // +0x8
    int _volumeBGM; // +0xc
    int _volumeVoice; // +0x10
    int _pitchBGM; // +0x14
    int _bgmChnlId; // +0x18
    unsigned int _reverbType; // +0x1c
}
+ (void)PBArrayAdd_volumeBGM;
+ (void)PBArrayAdd_volumeVoice;
+ (void)PBArrayAdd_pitchBGM;
+ (void)PBArrayAdd_bgmChnlId;
+ (void)PBArrayAdd_reverbType;
+ (void)PBArrayAdd_voiceEarEnabled;
+ (void)initialize;
- (id)getPBPropertyTable;
- (int)volumeBGM;
- (void)setVolumeBGM:(int)arg1;
- (int)volumeVoice;
- (void)setVolumeVoice:(int)arg1;
- (int)pitchBGM;
- (void)setPitchBGM:(int)arg1;
- (int)bgmChnlId;
- (void)setBgmChnlId:(int)arg1;
- (unsigned int)reverbType;
- (void)setReverbType:(unsigned int)arg1;
- (BOOL)voiceEarEnabled;
- (void)setVoiceEarEnabled:(BOOL)arg1;
@end
