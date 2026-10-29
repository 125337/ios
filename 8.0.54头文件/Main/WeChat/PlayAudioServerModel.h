@interface PlayAudioServerModel : NSObject <AVAudioPlayerDelegate>
{
    double nextTime; // +0x8
    int current; // +0x10
    double eventSpacingTime; // +0x18
    double eventSpacingCalibrationTime; // +0x20
    BOOL _audioPlayFinish; // +0x28
    long long _playerID; // +0x30
    long long _playerType; // +0x38
    long long _playedCount; // +0x40
    long long _runLoopCount; // +0x48
    NSString * _resourcePath; // +0x50
    id /* block */ _errorCallBack; // +0x58
    double _delayTime; // +0x60
    double _offsetTime; // +0x68
    double _firstPlayTime; // +0x70
    double _allTime; // +0x78
    NSArray * _playIDAry; // +0x80
    NSArray * _truncatedHapticAry; // +0x88
    AVAudioPlayer * _audioPlayer; // +0x90
    AACWeakTimer * _timer; // +0x98
    AACWeakTimer * _AudioServerPlayerTimer; // +0xa0
    AACWeakTimer * _audioPlayerTimer; // +0xa8
    AACWeakTimer * _systemVibrationPlayerTimer; // +0xb0
    id /* block */ _playBlock; // +0xb8
    id /* block */ _playNextBlock; // +0xc0
    id /* block */ _playProgress; // +0xc8
    double _startTime; // +0xd0
}
- (id)init;
- (void)setPlayIDAry:(id)arg1;
- (void)startPlay;
- (void)stopPlay;
- (void)seekToPlay:(int)arg1;
- (void)setAudioPlayerOffsetTime:(double)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)playOver:(id /* block */)arg1;
- (void)setPlayNext:(id /* block */)arg1 playProgress:(id /* block */)arg2;
- (void)registModelAudioPlayer:(id)arg1;
- (void)timeOut:(id)arg1;
- (void)prepareToPlay;
- (void)playSystemVibrationWithIndex:(long long)arg1;
- (void)systemVibrationPaly:(id)arg1;
- (void)fastVibrationPaly:(id)arg1;
- (void)callNext;
- (void)begainAudioPlay:(id)arg1;
- (long long)getPlayCurrentID:(int)arg1;
- (void)dealloc;
- (long long)playerID;
- (void)setPlayerID:(long long)arg1;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
- (long long)playedCount;
- (void)setPlayedCount:(long long)arg1;
- (long long)runLoopCount;
- (void)setRunLoopCount:(long long)arg1;
- (id)resourcePath;
- (void)setResourcePath:(id)arg1;
- (id /* block */)errorCallBack;
- (void)setErrorCallBack:(id /* block */)arg1;
- (double)delayTime;
- (void)setDelayTime:(double)arg1;
- (double)offsetTime;
- (void)setOffsetTime:(double)arg1;
- (double)firstPlayTime;
- (void)setFirstPlayTime:(double)arg1;
- (double)allTime;
- (void)setAllTime:(double)arg1;
- (id)playIDAry;
- (id)truncatedHapticAry;
- (void)setTruncatedHapticAry:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)AudioServerPlayerTimer;
- (void)setAudioServerPlayerTimer:(id)arg1;
- (id)audioPlayerTimer;
- (void)setAudioPlayerTimer:(id)arg1;
- (id)systemVibrationPlayerTimer;
- (void)setSystemVibrationPlayerTimer:(id)arg1;
- (id /* block */)playBlock;
- (void)setPlayBlock:(id /* block */)arg1;
- (id /* block */)playNextBlock;
- (void)setPlayNextBlock:(id /* block */)arg1;
- (id /* block */)playProgress;
- (void)setPlayProgress:(id /* block */)arg1;
- (BOOL)audioPlayFinish;
- (void)setAudioPlayFinish:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end

