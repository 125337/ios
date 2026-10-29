@interface MMFinderLiveLikeAudienceDataMgr : MMUserService <WCFinderLiveExt, MMServiceProtocol, MMLiveTaskMgrExt>
{
    BOOL _isPosting; // +0x8
    unsigned int _nextReqInterval; // +0xc
    NSMutableArray * _postTaskQueue; // +0x10
    MMFinderLiveLikeAudiencePostTask * _postingTask; // +0x18
    double _lastRespTime; // +0x20
    NSMutableDictionary * _likeInfoDict; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)postLikeWithTaskId:(id)arg1 micId:(id)arg2 finderUserName:(id)arg3 isDoubleClickLike:(BOOL)arg4;
- (unsigned long long)getDisplayLikeCountWithTaskId:(id)arg1 micId:(id)arg2;
- (unsigned long long)getOthersDisplayLikeCountWithTaskId:(id)arg1 micId:(id)arg2;
- (void)updateDisplayLikeCount:(unsigned long long)arg1 forTaskId:(id)arg2 micId:(id)arg3;
- (id)getLikeInfoWithTaskId:(id)arg1 micId:(id)arg2;
- (void)addLikePostWithTaskId:(id)arg1 micId:(id)arg2 finderUserName:(id)arg3 isDoubleClickLike:(BOOL)arg4;
- (id)getLikePostTaskWithTaskId:(id)arg1 micId:(id)arg2;
- (void)invokePostNextTask;
- (void)delayPostNextTask;
- (void)postNextTask;
- (void)handlePostLikeResult:(BOOL)arg1 interval:(unsigned int)arg2 error:(id)arg3;
- (void)cancelPostingTask;
- (id)postTaskQueue;
- (id)likeInfoDict;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onGetLikeAudienceHighlightCheerUserInfoWithTaskId:(id)arg1 userInfoList:(id)arg2;
- (void)setPostTaskQueue:(id)arg1;
- (id)postingTask;
- (void)setPostingTask:(id)arg1;
- (BOOL)isPosting;
- (void)setIsPosting:(BOOL)arg1;
- (unsigned int)nextReqInterval;
- (void)setNextReqInterval:(unsigned int)arg1;
- (double)lastRespTime;
- (void)setLastRespTime:(double)arg1;
- (void)setLikeInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
