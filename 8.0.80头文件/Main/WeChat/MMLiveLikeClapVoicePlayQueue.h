@interface MMLiveLikeClapVoicePlayQueue : NSObject
{
    BOOL _needPlaySelfClapVoice; // +0x8
    unsigned int _playSelfClapVoiceCnt; // +0xc
    MMLiveTaskId * _taskId; // +0x10
    unsigned long long _currentGlobalClapPlayTimes; // +0x18
    long long _globalClapVoiceType; // +0x20
    long long _nextGlobalClapVoiceType; // +0x28
    long long _selfClapVoiceType; // +0x30
    double _globalClapVoiceStartPlayTime; // +0x38
    double _lastGlobalClapVoiceEndTime; // +0x40
    id /* block */ _globalClapEndCallback; // +0x48
    id /* block */ _selfClapEndCallback; // +0x50
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)playGlobalLikeClapVoice:(long long)arg1 endCallback:(id /* block */)arg2;
- (void)stopPlayGlobalLikeClapVoice;
- (BOOL)playSelfLikeClapVoiceWithEndCallback:(id /* block */)arg1;
- (void)stopPlaySelfLikeClapVoice:(BOOL)arg1;
- (void)updateLikeClapVoiceVolumn;
- (void)innerStopPlaySelfLikeClapVoice;
- (id)getGlobalLikeClapVoicePath;
- (id)getSelfLikeClapVoicePath;
- (double)getGlobalClapPlayDurationForNewVoiceType;
- (void)updateGlobalClapType:(long long)arg1;
- (void)invokeGlobalLikeClapVoicePlay;
- (BOOL)checkNeedContinuePlayGlobalClap;
- (BOOL)isCurrentGlobalClapPlayOverLimitTimes;
- (void)setGlobalLikeClapVoiceVolume:(long long)arg1;
- (void)invokeSelfLikeClapVoicePlay;
- (void)setSelfLikeClapVoiceVolume:(long long)arg1;
- (BOOL)isSelfLikeClapVoiceOverMinDuration;
- (BOOL)checkNeedStopSelfLikeClapVoice;
- (BOOL)hasStartGlobalClap;
- (BOOL)hasStartSelfClap;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)currentGlobalClapPlayTimes;
- (void)setCurrentGlobalClapPlayTimes:(unsigned long long)arg1;
- (long long)globalClapVoiceType;
- (void)setGlobalClapVoiceType:(long long)arg1;
- (long long)nextGlobalClapVoiceType;
- (void)setNextGlobalClapVoiceType:(long long)arg1;
- (long long)selfClapVoiceType;
- (void)setSelfClapVoiceType:(long long)arg1;
- (double)globalClapVoiceStartPlayTime;
- (void)setGlobalClapVoiceStartPlayTime:(double)arg1;
- (double)lastGlobalClapVoiceEndTime;
- (void)setLastGlobalClapVoiceEndTime:(double)arg1;
- (BOOL)needPlaySelfClapVoice;
- (void)setNeedPlaySelfClapVoice:(BOOL)arg1;
- (unsigned int)playSelfClapVoiceCnt;
- (void)setPlaySelfClapVoiceCnt:(unsigned int)arg1;
- (id /* block */)globalClapEndCallback;
- (void)setGlobalClapEndCallback:(id /* block */)arg1;
- (id /* block */)selfClapEndCallback;
- (void)setSelfClapEndCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
