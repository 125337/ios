@interface MJServerAIAssetOrderCoordinator : NSObject
{
    WCFinderVideoProducerViewModel * _viewModel; // +0x8
    id /* block */ _resultHandler; // +0x10
    NSArray * _originalSegmentIDs; // +0x18
    long long _state; // +0x20
}
- (id)initWithViewModel:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)beginWithOriginalSegmentIDs:(id)arg1;
- (void)commitTargetSegmentIDs:(id)arg1;
- (void)cancel;
- (void)commitChangedTargetSegmentIDs:(id)arg1;
- (void)beginRollbackAndCancelWithReason:(id)arg1;
- (void)restoreOriginalOrder;
- (void)finishRollbackWithSuccess:(BOOL)arg1;
- (BOOL)isOriginalOrderRestored;
- (BOOL)isOperationPending;
- (void)updateState:(long long)arg1 reason:(id)arg2;
- (void)completeWithResult:(long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)resultHandler;
- (void)setResultHandler:(id /* block */)arg1;
- (id)originalSegmentIDs;
- (void)setOriginalSegmentIDs:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void).cxx_destruct;
@end
