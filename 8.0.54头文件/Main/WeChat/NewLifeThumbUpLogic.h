@interface NewLifeThumbUpLogic : NSObject
{
    NSMutableDictionary * _feedThumbUpTempInfo; // +0x8
    NSMutableDictionary * _feedThumbUpOperationQueue; // +0x10
}
+ (void)updateMonotonicDataWithLocalDataItem:(id)arg1 thumbUp:(BOOL)arg2;
+ (id)tempMonotonicDataFromLocalDataItem:(id)arg1 isThumbUp:(BOOL)arg2;
+ (id)revertMonotonicDataFromLocalDataItem:(id)arg1;
+ (id)thumbUpRequestFromOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)isTempThumbUpForFeedId:(id)arg1;
- (void)enqueueThumbUpOperation:(id)arg1;
- (void)checkThumbUpOperation:(id)arg1;
- (void)performThumbUpOperation:(id)arg1 localDataItem:(id)arg2 completion:(id /* block */)arg3;
- (void)insertTempInfoForOperation:(id)arg1;
- (void)removeTempInfoForFeedId:(id)arg1;
- (id)feedThumbUpTempInfo;
- (void)setFeedThumbUpTempInfo:(id)arg1;
- (id)feedThumbUpOperationQueue;
- (void)setFeedThumbUpOperationQueue:(id)arg1;
- (void).cxx_destruct;
@end

