@interface HearingAidVolumeConfirmLogic : NSObject <SystemVolumeExt>
{
    id <HearingAidVoiceChangeDelegate> _delegate; // +0x8
    HearingAidPlayer * _player; // +0x10
    double _lockVolume; // +0x18
    double _originVolume; // +0x20
}
- (void)start;
- (BOOL)playAudio:(id /* block */)arg1;
- (void)autoPlayAudio;
- (BOOL)resumeAudio;
- (BOOL)pauseAudio;
- (BOOL)isPlaying;
- (void)stop;
- (void)resetLockVolume;
- (void)confirmVolume;
- (double)volumeChange:(BOOL)arg1;
- (double)getCurrentVolume;
- (void)setVolume:(float)arg1;
- (void)onSystemVolumeChangeFrom:(float)arg1 to:(float)arg2 reason:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (double)lockVolume;
- (void)setLockVolume:(double)arg1;
- (double)originVolume;
- (void)setOriginVolume:(double)arg1;
- (void).cxx_destruct;
@end
