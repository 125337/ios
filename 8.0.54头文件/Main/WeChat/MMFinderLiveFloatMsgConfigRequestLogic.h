@interface MMFinderLiveFloatMsgConfigRequestLogic : NSObject
{
    BOOL _isFetching; // +0x8
    BOOL _isFetchingWecoinBalance; // +0x9
    BOOL _isWecoinBalanceUpdated; // +0xa
    id /* block */ _floatMsgConfigUpdateCallback; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    unsigned long long _requestSeq; // +0x20
    unsigned long long _wecoinBalance; // +0x28
    MMFinderLiveFloatMsgResourceManager * _resourceMgr; // +0x30
}
+ (unsigned long long)getExtraInfoContent:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)fetchFloatMsgConfig:(long long)arg1;
- (void)clearExpiredStayTimeFloatMsgAndRefetchIfNeeded;
- (void)refreshWecoinBalanceIfNeeded;
- (long long)canSendFloatMsg:(id)arg1;
- (void)increaseRequestSeq;
- (id)getSortedFloatMsgList:(id)arg1;
- (void)syncLocalFileStateFromFloatMsgList:(id)arg1 toList:(id)arg2;
- (void)downloadFloatMsgDecorationResourcesWithSuccessCompletion:(id /* block */)arg1;
- (id)liveTask;
- (id /* block */)floatMsgConfigUpdateCallback;
- (void)setFloatMsgConfigUpdateCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)requestSeq;
- (void)setRequestSeq:(unsigned long long)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (unsigned long long)wecoinBalance;
- (void)setWecoinBalance:(unsigned long long)arg1;
- (BOOL)isFetchingWecoinBalance;
- (void)setIsFetchingWecoinBalance:(BOOL)arg1;
- (BOOL)isWecoinBalanceUpdated;
- (void)setIsWecoinBalanceUpdated:(BOOL)arg1;
- (id)resourceMgr;
- (void)setResourceMgr:(id)arg1;
- (void).cxx_destruct;
@end

