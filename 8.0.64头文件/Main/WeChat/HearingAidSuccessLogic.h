@interface HearingAidSuccessLogic : NSObject
{
    HearingAidPlayer * _player; // +0x8
    id /* block */ _timeoutTask; // +0x10
    unsigned long long _curMode; // +0x18
    NSString * _audioPath; // +0x20
}
- (id)init;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (BOOL)pauseTest;
- (BOOL)resumeTest;
- (BOOL)startPlay:(unsigned long long)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id /* block */)timeoutTask;
- (void)setTimeoutTask:(id /* block */)arg1;
- (unsigned long long)curMode;
- (void)setCurMode:(unsigned long long)arg1;
- (id)audioPath;
- (void)setAudioPath:(id)arg1;
- (void).cxx_destruct;
@end
