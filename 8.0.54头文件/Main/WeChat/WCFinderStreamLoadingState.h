@interface WCFinderStreamLoadingState : NSObject
{
    BOOL _isFetching; // +0x8
    BOOL _hasFetched; // +0x9
    id <WCFinderStreamLoadingStateDelegate> _delegate; // +0x10
    NSString * _errorMsg; // +0x18
    NSData * _nextBuff; // +0x20
    NSMutableArray * _waitBlocks; // +0x28
    id /* block */ _cancelBlock; // +0x30
}
+ (void)removeAllObserver:(id)arg1;
- (void)configFooterView:(id)arg1;
- (void)begin:(id /* block */)arg1;
- (void)beginCancelSupport:(id /* block */)arg1;
- (void)cancelRequest:(BOOL)arg1;
- (void)onFailedWithMsg:(id)arg1;
- (void)onSuccess:(BOOL)arg1 nextBuff:(id)arg2;
- (BOOL)hasMore;
- (BOOL)addWaitLoadingBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (BOOL)hasFetched;
- (void)setHasFetched:(BOOL)arg1;
- (id)nextBuff;
- (void)setNextBuff:(id)arg1;
- (id)waitBlocks;
- (void)setWaitBlocks:(id)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

