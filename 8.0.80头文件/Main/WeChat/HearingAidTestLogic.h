@interface HearingAidTestLogic : NSObject
{
    HearingAidPlayer * _player; // +0x8
    NSString * _audioName; // +0x10
    id /* block */ _timeoutTask; // +0x18
    unsigned long long _curTestingAudio; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)startTest:(unsigned long long)arg1 onTimeout:(id /* block */)arg2 onComplete:(id /* block */)arg3;
- (BOOL)pauseTest;
- (BOOL)resumeTest;
- (BOOL)stopTest;
- (void)cancelTimeoutTask;
- (unsigned long long)testingAudio;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (id)getAudioName;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)audioName;
- (void)setAudioName:(id)arg1;
- (id /* block */)timeoutTask;
- (void)setTimeoutTask:(id /* block */)arg1;
- (unsigned long long)curTestingAudio;
- (void)setCurTestingAudio:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
