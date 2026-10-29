@interface WCFinderLocalFeedProvider : NSObject
{
    BOOL _isRequesting; // +0x8
    WCFinderWCDB * _dataBase; // +0x10
}
- (id)initWithFinderDB:(id)arg1;
- (void)updateLocalBackupFeedArray:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (void)removeLocalBackupFeedWithTid:(id)arg1;
- (void)removeLocalBackupFeedsWithTidArray:(id)arg1;
- (BOOL)hasEnoughValidLocalFeeds:(unsigned long long)arg1 pullType:(unsigned long long)arg2 commentScene:(int)arg3;
- (id)localFeedWithPullType:(unsigned long long)arg1 commentScene:(int)arg2;
- (id)localFeedArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)localFeedArrayWithFeedSource:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (void)requestBackupFeedsIfNeeded;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (void).cxx_destruct;
@end

