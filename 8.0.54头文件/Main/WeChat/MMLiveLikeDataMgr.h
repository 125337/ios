@interface MMLiveLikeDataMgr : MMUserService <MMServiceProtocol, MMLiveTaskMgrExt>
{
    BOOL _isPosting; // +0x8
    unsigned int _nextReqInterval; // +0xc
    SafeMutableDictionary * _likeInfoDict; // +0x10
    NSMutableArray * _postTaskQueue; // +0x18
    double _lastRespTimeInterval; // +0x20
    MMLiveLikePostTask * _postingTask; // +0x28
}
+ (id)getLikeCountLabel:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)postLiveLikeWithTaskId:(id)arg1 isClipMode:(BOOL)arg2;
- (unsigned long long)getLikeCountForAudienceWithTaskId:(id)arg1;
- (unsigned long long)getOthersLikeCountForAudienceWithTaskId:(id)arg1;
- (unsigned long long)getLikeCountForAchorWithTaskId:(id)arg1;
- (void)setLikeCount:(unsigned long long)arg1 forTaskId:(id)arg2;
- (void)updateLikeCountWithoutCreate:(unsigned long long)arg1 forTaskId:(id)arg2;
- (void)addLiveLikePostWithTaskId:(id)arg1 isClipMode:(BOOL)arg2;
- (id)getLiveLikePostTask:(id)arg1;
- (void)invokePostNextTask;
- (void)delayPostNextTask;
- (void)postNextTask;
- (id)getMergedPostTask;
- (id)getLikeInfoWithTaskId:(id)arg1;
- (id)getLikeInfoWithoutCreatedWithTaskId:(id)arg1;
- (void)cancelPostingTask;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)postTaskQueue;
- (id)likeInfoDict;
- (BOOL)applyLikeWithPostTask:(id)arg1;
- (void)handleApplyLikeResult:(id)arg1 interval:(unsigned int)arg2 forTaskId:(id)arg3;
- (void)setLikeInfoDict:(id)arg1;
- (BOOL)isPosting;
- (void)setIsPosting:(BOOL)arg1;
- (void)setPostTaskQueue:(id)arg1;
- (unsigned int)nextReqInterval;
- (void)setNextReqInterval:(unsigned int)arg1;
- (double)lastRespTimeInterval;
- (void)setLastRespTimeInterval:(double)arg1;
- (id)postingTask;
- (void)setPostingTask:(id)arg1;
- (void).cxx_destruct;
@end

