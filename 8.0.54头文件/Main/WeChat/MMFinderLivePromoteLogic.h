@interface MMFinderLivePromoteLogic : NSObject
{
    BOOL _isFetching; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    id /* block */ _completion; // +0x18
    WCFinderLiveBaseCgi * _addPromoteCGI; // +0x20
    WCFinderLiveBaseCgi * _sendPromoteCGI; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)fetchPromoteList:(id /* block */)arg1;
- (void)addPromoteItem:(id)arg1 completion:(id /* block */)arg2;
- (void)removePromoteItem:(id)arg1 completion:(id /* block */)arg2;
- (void)sendPromoteItem:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelPromoteItem:(id)arg1 completion:(id /* block */)arg2;
- (void)onPromoteManageDidClose;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)addPromoteCGI;
- (void)setAddPromoteCGI:(id)arg1;
- (id)sendPromoteCGI;
- (void)setSendPromoteCGI:(id)arg1;
- (void).cxx_destruct;
@end

