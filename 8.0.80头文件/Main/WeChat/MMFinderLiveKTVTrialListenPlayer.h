@interface MMFinderLiveKTVTrialListenPlayer : NSObject
{
    BOOL _isStart; // +0x8
    BOOL _isStartPlaySucc; // +0x9
    BOOL _isPlayToSingingEndPosition; // +0xa
    BOOL _isEnd; // +0xb
    MMLiveTaskId * _taskId; // +0x10
    MMLiveTask * _liveTask; // +0x18
    TrialListenBGMInfo * _bgmAudioInfo; // +0x20
    id /* block */ _startCallback; // +0x28
    id /* block */ _endCallback; // +0x30
    unsigned long long _startSeq; // +0x38
    long long _bgmChnlId; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)configAudioParamSettings;
- (void)dealloc;
- (id)getAudioMgrInternal;
- (id)currentLiveTask;
- (void)clearPlayingState;
- (void)playBGM:(int)arg1 path:(id)arg2 startBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)seekToPosition:(long long)arg1;
- (void)handlePlayMusicStart:(long long)arg1;
- (void)handlePlayMusicProgress:(long long)arg1 allDuration:(long long)arg2;
- (void)handlePlayMusicEnd:(long long)arg1;
- (void)startPlayResultAutoCheck;
- (void)finishPlayResultAutoCheck;
- (void)autoCheckPlayResult;
- (void)cancelPlayResultAutoCheck;
- (void)checkIsPlayToSingEndPosition:(long long)arg1;
- (void)onPlayToSingEndPosition;
- (void)updateStartSeq;
- (void)prepareWithBGMInfo:(id)arg1 onStart:(id /* block */)arg2 onEnd:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (void)setBGMAbsVomlue:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)liveTask;
- (id)bgmAudioInfo;
- (void)setBgmAudioInfo:(id)arg1;
- (id /* block */)startCallback;
- (void)setStartCallback:(id /* block */)arg1;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg1;
- (unsigned long long)startSeq;
- (void)setStartSeq:(unsigned long long)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (BOOL)isStartPlaySucc;
- (void)setIsStartPlaySucc:(BOOL)arg1;
- (BOOL)isPlayToSingingEndPosition;
- (void)setIsPlayToSingingEndPosition:(BOOL)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (long long)bgmChnlId;
- (void)setBgmChnlId:(long long)arg1;
- (void).cxx_destruct;
@end
