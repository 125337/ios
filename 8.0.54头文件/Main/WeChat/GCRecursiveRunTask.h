@interface GCRecursiveRunTask : NSObject
{
    BOOL _paused; // +0x8
    BOOL _isWaitForResponse; // +0x9
    BOOL _isEnd; // +0xa
    BOOL _needReRunWhenPauseResume; // +0xb
    NSString * _taskDesc; // +0x10
    double _delaySecondsForInvalidResult; // +0x18
    NSString * _curRunInformation; // +0x20
    id /* block */ _recursiveBlock; // +0x28
    id /* block */ _onResultBlock; // +0x30
    id /* block */ _checkResultValidBlock; // +0x38
    long long _runSeq; // +0x40
    double _lastRunTime; // +0x48
    NSMutableArray * _runInfoArray; // +0x50
    NSMutableDictionary * _receiveInfoDict; // +0x58
    NSString * _lastVersion; // +0x60
}
- (id)initWithBlock:(id /* block */)arg1;
- (BOOL)isEnd;
- (void)logStr:(id)arg1;
- (void)logWithForamt:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (id)recordInfoForSeq:(id)arg1;
- (void)run;
- (void)onTaskCompleteWithResult:(id)arg1;
- (void)appendAdditionalInfo:(id)arg1;
- (void)onTaskCompleteWithResult:(id)arg1 version:(id)arg2;
- (void)runWithDelaySeconds:(double)arg1;
- (void)exit:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)runTimeDesc;
- (id)taskDesc;
- (void)setTaskDesc:(id)arg1;
- (double)delaySecondsForInvalidResult;
- (void)setDelaySecondsForInvalidResult:(double)arg1;
- (BOOL)paused;
- (id)curRunInformation;
- (void)setCurRunInformation:(id)arg1;
- (BOOL)isWaitForResponse;
- (void)setIsWaitForResponse:(BOOL)arg1;
- (id /* block */)recursiveBlock;
- (void)setRecursiveBlock:(id /* block */)arg1;
- (void)setIsEnd:(BOOL)arg1;
- (id /* block */)onResultBlock;
- (void)setOnResultBlock:(id /* block */)arg1;
- (id /* block */)checkResultValidBlock;
- (void)setCheckResultValidBlock:(id /* block */)arg1;
- (long long)runSeq;
- (void)setRunSeq:(long long)arg1;
- (double)lastRunTime;
- (void)setLastRunTime:(double)arg1;
- (id)runInfoArray;
- (void)setRunInfoArray:(id)arg1;
- (id)receiveInfoDict;
- (void)setReceiveInfoDict:(id)arg1;
- (id)lastVersion;
- (void)setLastVersion:(id)arg1;
- (BOOL)needReRunWhenPauseResume;
- (void)setNeedReRunWhenPauseResume:(BOOL)arg1;
- (void).cxx_destruct;
@end

