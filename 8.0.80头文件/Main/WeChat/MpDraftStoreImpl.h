@interface MpDraftStoreImpl : NSObject <MpDraftStoreApi>
+ (id)ioQueue;
- (void)loadDraftWithCompletion:(id /* block */)arg1;
- (void)saveDraftBytes:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteDraftWithCompletion:(id /* block */)arg1;
- (void)hasDraftWithCompletion:(id /* block */)arg1;
@end
