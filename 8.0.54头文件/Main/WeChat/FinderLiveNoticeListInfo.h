@interface FinderLiveNoticeListInfo : WXPBGeneratedMessage
+ (id)getNormalNoticeListInfoFromNoticeList:(id)arg1;
+ (id)getMemberNoticeListInfoFromNoticeList:(id)arg1;
+ (id)collectFirstNoticeInfoToListFromNoticeList:(id)arg1;
+ (id)mergeNoticeInfoListByTime:(id)arg1 withNoticeInfoList:(id)arg2;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;
- (BOOL)appendNextNoticeList:(id)arg1 insertedIndexes:(id *)arg2;
- (BOOL)prependPreviousNoticeList:(id)arg1 insertedIndexes:(id *)arg2;
- (void)removeNoticeInfo:(id)arg1;
- (void)updateAllNoticeInfosWithReserveStatus:(unsigned long long)arg1;
- (void)updateAllNoticeInfosWithReserveStatus:(unsigned long long)arg1 excludedNoticeIDs:(id)arg2 aggregateTypeArray:(id)arg3;
- (void)updateAllNoticeInfosWithReservedNoticeIDs:(id)arg1 unreservedNoticeIDs:(id)arg2;
- (BOOL)updateNoticeId:(id)arg1 withReserveStatus:(unsigned long long)arg2;
- (id)noticeListByRemovingNoticeInfo:(id)arg1;
- (id)noticeInfoForNoticeId:(id)arg1;
- (id)actualFirstNoticeInfo;
- (id)actualLastNoticeInfo;
- (id)archivedWCTValue;
@end

