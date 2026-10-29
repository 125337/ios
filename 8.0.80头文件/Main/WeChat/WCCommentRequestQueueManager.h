@interface WCCommentRequestQueueManager : MMUserService <MMServiceProtocol>
{
    BOOL _isProcessing; // +0x8
    NSMutableArray * _requestQueue; // +0x10
    WCCommentContentCgiHelper * _currentCgiHelper; // +0x18
    NSMutableSet * _requestSnsEmojiInfoObjSet; // +0x20
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x28
}
+ (id)sharedQueue;
- (id)init;
- (void)enqueueCommentRequests:(id)arg1;
- (void)enqueueSingleCommentRequest:(id)arg1;
- (BOOL)isRequestingSnsEmojiInfoObjWithMd5:(id)arg1;
- (void)addMd5ToRequestSnsEmojiInfoObjSet:(id)arg1;
- (void)removeMd5FromRequestSnsEmojiInfoObjSet:(id)arg1;
- (void)processNextBatch;
- (void)updateCommentInfoWithContentResults:(id)arg1;
- (void)_safeOperate:(id /* block */)arg1;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg1;
- (id)currentCgiHelper;
- (void)setCurrentCgiHelper:(id)arg1;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
- (id)requestSnsEmojiInfoObjSet;
- (void)setRequestSnsEmojiInfoObjSet:(id)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
