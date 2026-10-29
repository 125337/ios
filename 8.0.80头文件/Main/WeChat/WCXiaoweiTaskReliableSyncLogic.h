@interface WCXiaoweiTaskReliableSyncLogic : CommonReliableSyncLogic
- (id)getRorkerQueueName;
- (void)doConfig;
- (void)asyncHandleCommonReliableResponseCore:(id)arg1 syncAction:(id)arg2 handleResultSuccess:(BOOL)arg3;
- (void)resetSyncKeyForFullSync;
@end
