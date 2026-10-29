@interface WCFinderLocalFeedAffProvider : WCFinderLocalFeedProvider
- (id)initWithFinderDB:(id)arg1;
- (void)updateLocalBackupFeedArray:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (void)removeLocalBackupFeedsWithTidArray:(id)arg1;
- (id)localFeedArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)localFeedArrayWithFeedSource:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (BOOL)hasEnoughValidLocalFeeds:(unsigned long long)arg1 pullType:(unsigned long long)arg2 commentScene:(int)arg3;
- (id)convertDataItemArrayToNSDataArray:(id)arg1;
- (id)convertNSDataArrayToDataItemArray:(id)arg1;
@end

