@interface WCFinderLiveGiftStarCGIHelper : NSObject
+ (BOOL)getGiftStarInfoWithLiveTaskId:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
+ (BOOL)getGiftStarHistoryUnlockRecordWithLiveTaskId:(id)arg1 lastBuffer:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
+ (BOOL)getGiftStarRankBoardWithLiveTaskId:(id)arg1 rankBoardId:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
@end
