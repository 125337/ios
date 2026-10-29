@interface WCFinderLocalFeedProvider : NSObject
{
    BOOL _isRequesting; // +0x8
    BOOL _continueFlag; // +0x9
    WCFinderShareCachePool * _shareCachePool; // +0x10
    WCFinderWCDB * _dataBase; // +0x18
    NSData * _lastBuffer; // +0x20
}
- (id)initWithFinderDB:(id)arg1;
- (void)updateLocalBackupFeedArray:(id)arg1 commentScene:(int)arg2 feedSource:(int)arg3;
- (void)removeLocalBackupFeedWithTid:(id)arg1;
- (void)removeLocalBackupFeedsWithTidArray:(id)arg1;
- (void)removeAll;
- (BOOL)hasEnoughValidLocalFeeds:(unsigned long long)arg1 pullType:(unsigned long long)arg2 commentScene:(int)arg3;
- (id)localFeedWithPullType:(unsigned long long)arg1 commentScene:(int)arg2;
- (id)localFeedWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 checkPhase:(unsigned long long)arg3;
- (id)localFeedArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)localFeedArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 shouldCheckPhase:(unsigned long long)arg3 limitCount:(unsigned long long)arg4;
- (id)localFeedTidArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (unsigned long long)minCacheCount;
- (void)requestBackupFeedsIfNeeded;
- (void)reset;
- (void)_requestBackupFeedsIfNeeded;
- (void)_requestBackupFeeds;
- (id)shareCachePool;
- (void)setShareCachePool:(id)arg1;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
