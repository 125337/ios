@interface MJServerAIComposingTask : NSObject
{
    BOOL _allowsDefaultTemplateWithoutBGM; // +0x8
    BOOL _cancelled; // +0x9
    NSString * _taskID; // +0x10
    NSArray * _materialList; // +0x18
    NSString * _sessionID; // +0x20
    id /* block */ _progressBlock; // +0x28
    id /* block */ _completionBlock; // +0x30
    NSDate * _startDate; // +0x38
}
- (id)initWithMaterialList:(id)arg1 sessionID:(id)arg2;
- (void)startWithProgressBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)cancel;
- (void)queryTaskStatus;
- (void)handleQueryResponse:(id)arg1;
- (void)scheduleNextQuery;
- (BOOL)isTimeout;
- (void)updateProgress:(double)arg1 stageText:(id)arg2;
- (void)completeWithError:(id)arg1 result:(id)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (BOOL)allowsDefaultTemplateWithoutBGM;
- (void)setAllowsDefaultTemplateWithoutBGM:(BOOL)arg1;
- (id)materialList;
- (void)setMaterialList:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (void).cxx_destruct;
@end
