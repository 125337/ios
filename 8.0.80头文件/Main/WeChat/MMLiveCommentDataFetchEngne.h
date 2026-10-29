@interface MMLiveCommentDataFetchEngne : NSObject <MMLiveTaskMgrExt>
{
    BOOL _isSupportFrequencyLimit; // +0x8
    BOOL _forbidAppendSvrComment; // +0x9
    unsigned int _nextRequestDuration; // +0xc
    NSMutableDictionary * _fetchTagDict; // +0x10
    NSString * _uniqueId; // +0x18
    double _lastRequestTime; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initNotifications;
- (void)unInitNotifications;
- (void)startGetLiveCommentWithTaskId:(id)arg1 uniqueId:(id)arg2;
- (void)pauseLongPulling:(id)arg1;
- (void)continueLongPulling:(id)arg1;
- (void)stopGetLiveComment:(id)arg1;
- (void)resetFetchTagDict;
- (BOOL)checkIsOtherGetLiveComment;
- (void)continueFetchCommentWithTaskId:(id)arg1;
- (double)getOverLimitSequence;
- (BOOL)checkOverLimitSequence:(id)arg1;
- (id)commentDataMgr;
- (id)getUniqueIdForTaskId:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)fetchTagDict;
- (id)getCommentRequestTaskWithTaskId:(id)arg1;
- (id)getCommentRequestTaskWithoutCreatedWithTaskId:(id)arg1;
- (BOOL)applyGetLiveMessageWithTaskId:(id)arg1;
- (void)handleGetLiveMessage:(id)arg1 commentArray:(id)arg2 taskId:(id)arg3 nextRequestInterval:(unsigned int)arg4 isHistoryMsg:(BOOL)arg5;
- (void)willEnterForeground:(id)arg1;
- (void)checkLongPullingRequestLive;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (BOOL)isSupportFrequencyLimit;
- (void)setIsSupportFrequencyLimit:(BOOL)arg1;
- (BOOL)forbidAppendSvrComment;
- (void)setForbidAppendSvrComment:(BOOL)arg1;
- (void)setFetchTagDict:(id)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (unsigned int)nextRequestDuration;
- (void)setNextRequestDuration:(unsigned int)arg1;
- (double)lastRequestTime;
- (void)setLastRequestTime:(double)arg1;
- (void).cxx_destruct;
@end
