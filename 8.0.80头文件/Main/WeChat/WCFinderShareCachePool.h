@interface WCFinderShareCachePool : NSObject
{
    WCFinderWCDB * _database; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSArray * _records; // +0x18
    NSMutableDictionary * _reservations; // +0x20
    NSMutableSet * _invalidTids; // +0x28
}
- (id)initWithDatabase:(id)arg1;
- (void)reload;
- (id)reserveForOwner:(id)arg1 excludingIDs:(id)arg2 config:(id)arg3;
- (void)releaseOwner:(id)arg1;
- (void)releaseTid:(id)arg1 forOwner:(id)arg2;
- (void)releaseOwner:(id)arg1 keepingIDs:(id)arg2;
- (void)invalidateTids:(id)arg1;
- (BOOL)isUnavailableTid:(id)arg1;
- (void)collectDataItems:(id)arg1 source:(int)arg2 requestScene:(int)arg3 commentScene:(int)arg4;
- (void)collectBackupInfo:(id)arg1 requestScene:(int)arg2 commentScene:(int)arg3;
- (id)cacheConfig;
- (void)storeItems:(id)arg1 source:(int)arg2 requestScene:(int)arg3 commentScene:(int)arg4 backupInfo:(id)arg5;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)records;
- (void)setRecords:(id)arg1;
- (id)reservations;
- (void)setReservations:(id)arg1;
- (id)invalidTids;
- (void)setInvalidTids:(id)arg1;
- (void).cxx_destruct;
@end
