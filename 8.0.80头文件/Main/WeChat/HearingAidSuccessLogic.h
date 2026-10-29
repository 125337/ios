@interface HearingAidSuccessLogic : NSObject
{
    BOOL _isFromInit; // +0x8
    HearingAidPlayer * _player; // +0x10
    id /* block */ _timeoutTask; // +0x18
    unsigned long long _curMode; // +0x20
    NSString * _audioPath; // +0x28
}
- (id)init;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (BOOL)pauseTest;
- (BOOL)resumeTest;
- (BOOL)startPlay:(unsigned long long)arg1 isInit:(BOOL)arg2 onComplete:(id /* block */)arg3;
- (void)dataReport:(BOOL)arg1;
- (BOOL)isFromInit;
- (void)setIsFromInit:(BOOL)arg1;
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
