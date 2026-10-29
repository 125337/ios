@interface MMLiveLikeDataMgr : MMUserService <MMServiceProtocol, MMLiveTaskMgrExt>
{
    BOOL _isPosting; // +0x8
    unsigned int _nextReqInterval; // +0xc
    SafeMutableDictionary * _likeInfoDict; // +0x10
    NSMutableArray * _postTaskQueue; // +0x18
    double _lastRespTimeInterval; // +0x20
    SafeMutableDictionary * _previousLikeCountDic; // +0x28
    MMLiveLikePostTask * _postingTask; // +0x30
}
+ (id)getLikeCountLabel:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)postLiveLikeWithTaskId:(id)arg1 isClipMode:(BOOL)arg2;
- (void)postBottomButtonLikeWithTaskId:(id)arg1 isClipMode:(BOOL)arg2;
- (void)postLiveLikeWithTaskId:(id)arg1 isClipMode:(BOOL)arg2 isDoubleClicked:(BOOL)arg3;
- (void)postLiveLikeWithTaskId:(id)arg1 isClipMode:(BOOL)arg2 isDoubleClicked:(BOOL)arg3 fromBottomButton:(BOOL)arg4;
- (unsigned long long)getLikeCountForAudienceWithTaskId:(id)arg1;
- (unsigned long long)getOthersLikeCountForAudienceWithTaskId:(id)arg1;
- (unsigned long long)getLikeCountForAchorWithTaskId:(id)arg1;
- (unsigned long long)getDisplayLikeCountWithTaskId:(id)arg1;
- (void)setLikeCount:(unsigned long long)arg1 forTaskId:(id)arg2;
- (void)updateLikeCountWithoutCreate:(unsigned long long)arg1 forTaskId:(id)arg2;
- (void)addLiveLikePostWithTaskId:(id)arg1 isClipMode:(BOOL)arg2 isDoubleClick:(BOOL)arg3 fromBottomButton:(BOOL)arg4;
- (id)getLiveLikePostTask:(id)arg1;
- (void)invokePostNextTask;
- (void)delayPostNextTask;
- (void)postNextTask;
- (id)getMergedPostTask;
- (id)getLikeInfoWithTaskId:(id)arg1;
- (id)getLikeInfoWithoutCreatedWithTaskId:(id)arg1;
- (void)cancelPostingTask;
- (unsigned long long)getPreviousLikeCountWithTaskId:(id)arg1;
- (void)updatePreviousLikeCountWithIncreaseCount:(unsigned long long)arg1 taskId:(id)arg2;
- (void)clearPreviousLikeCountWithTaskId:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)postTaskQueue;
- (id)likeInfoDict;
- (id)previousLikeCountDic;
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
- (void)setPreviousLikeCountDic:(id)arg1;
- (id)postingTask;
- (void)setPostingTask:(id)arg1;
- (void).cxx_destruct;
@end
