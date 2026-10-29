@interface HearingAidChooseModePairLogic : NSObject
{
    id <ChooseModelLogicDelegate> _delegate; // +0x8
    HearingAidPlayer * _player; // +0x10
    unsigned long long _audio1; // +0x18
    unsigned long long _audio2; // +0x20
    id /* block */ _callback; // +0x28
    id /* block */ _timeoutTask; // +0x30
}
- (id)initWithAudio1:(unsigned long long)arg1 audio2:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (void)dealloc;
- (BOOL)start:(BOOL)arg1 autoNext:(BOOL)arg2;
- (id)getAudioPath:(unsigned long long)arg1;
- (id)getAudioPath:(unsigned long long)arg1 isAbsolutePath:(BOOL)arg2;
- (BOOL)stop;
- (BOOL)resume;
- (BOOL)pause;
- (BOOL)isPlaying:(BOOL)arg1;
- (BOOL)isPause:(BOOL)arg1;
- (id)getAudioName:(BOOL)arg1;
- (id)getAudioName:(BOOL)arg1 requireFileName:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (unsigned long long)audio1;
- (void)setAudio1:(unsigned long long)arg1;
- (unsigned long long)audio2;
- (void)setAudio2:(unsigned long long)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id /* block */)timeoutTask;
- (void)setTimeoutTask:(id /* block */)arg1;
- (void).cxx_destruct;
@end
