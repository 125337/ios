@interface MMDictationLogicV2 : NSObject <MMDictationTaskDelegate, IMMDictationLogic>
{
    NSHashTable * _observerList; // +0x8
    long long _scene; // +0x10
    NSData * _extraData; // +0x18
    NSString * _sessionId; // +0x20
    NSMutableArray * _taskList; // +0x28
    MMDictationTask * _currentTask; // +0x30
    NSString * _displayText; // +0x38
}
- (id)initWithScene:(long long)arg1;
- (id)observerList;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserver:(id /* block */)arg1;
- (BOOL)isRecording;
- (id)resultText;
- (void)setDictationExtraData:(id)arg1;
- (void)start;
- (void)stop:(long long)arg1;
- (void)clear;
- (void)MMDictationTaskDidStart:(id)arg1;
- (void)MMDictationTask:(id)arg1 onLevelMeter:(float)arg2;
- (void)MMDictationTask:(id)arg1 didGetText:(id)arg2;
- (void)MMDictationTaskDidEnd:(id)arg1 reason:(unsigned long long)arg2;
- (void)MMDictationTaskDidClear:(id)arg1;
- (void)cancelCheckDisplayText;
- (void)checkDisplayText;
- (void)_checkDisplayText;
- (void)_flushText:(id)arg1;
- (void)setObserverList:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (void).cxx_destruct;
@end
