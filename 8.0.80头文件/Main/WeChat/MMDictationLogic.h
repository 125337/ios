@interface MMDictationLogic : NSObject <MMDictationTaskDelegate, IMMDictationLogic>
{
    BOOL _enableOfflineMode; // +0x8
    BOOL _shouldCover; // +0x9
    NSHashTable * _observerList; // +0x10
    long long _scene; // +0x18
    long long _defaultStopMode; // +0x20
    NSData * _extraData; // +0x28
    NSString * _sessionId; // +0x30
    MMDictationTask * _currentTask; // +0x38
    NSString * _displayText; // +0x40
    unsigned long long _lastFlushTime; // +0x48
}
- (id)initWithScene:(long long)arg1;
- (id)observerList;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserver:(id /* block */)arg1;
- (BOOL)isRecording;
- (BOOL)isWaitingForEndFlag;
- (id)resultText;
- (void)setScene:(long long)arg1;
- (void)setDictationExtraData:(id)arg1;
- (id)currentVoiceId;
- (void)start;
- (void)stop:(long long)arg1;
- (void)stop:(long long)arg1 mode:(long long)arg2;
- (void)clear;
- (void)startWaitEndFlagTimeoutForTask:(id)arg1;
- (void)MMDictationTaskDidStart:(id)arg1;
- (void)MMDictationTask:(id)arg1 onLevelMeter:(float)arg2;
- (void)MMDictationTask:(id)arg1 didGetText:(id)arg2 shouldCover:(BOOL)arg3;
- (void)MMDictationTaskDidStopRecord:(id)arg1 reason:(unsigned long long)arg2;
- (void)MMDictationTaskDidEnd:(id)arg1 reason:(unsigned long long)arg2;
- (void)MMDictationTask:(id)arg1 onPcmDataOut:(id)arg2;
- (void)cancelCheckDisplayText;
- (void)checkDisplayText;
- (void)_checkDisplayText;
- (void)_flushText:(id)arg1;
- (void)_forceFlushText:(id)arg1;
- (void)setObserverList:(id)arg1;
- (long long)scene;
- (long long)defaultStopMode;
- (void)setDefaultStopMode:(long long)arg1;
- (BOOL)enableOfflineMode;
- (void)setEnableOfflineMode:(BOOL)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (BOOL)shouldCover;
- (void)setShouldCover:(BOOL)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (unsigned long long)lastFlushTime;
- (void)setLastFlushTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
