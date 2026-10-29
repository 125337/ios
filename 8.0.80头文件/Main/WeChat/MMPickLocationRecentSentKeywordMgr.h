@interface MMPickLocationRecentSentKeywordMgr : NSObject
+ (id)recentSentKeywords;
+ (void)recordRecentSentKeyword:(id)arg1;
+ (void)recordRecentSentKeyword:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2;
+ (BOOL)shouldRecordForwardKeyword:(id)arg1 mesLocalID:(unsigned int)arg2;
+ (void)recordRecentSentKeywordFromLocationMsgWrap:(id)arg1;
+ (CLLocationCoordinate2D)coordinateForRecentSentKeyword:(id)arg1;
+ (void)deleteRecentSentKeyword:(id)arg1;
+ (void)clearRecentSentKeywords;
+ (id)normalizedKeyword:(id)arg1;
+ (id)recentSentKeywordRecordMap;
+ (id)recentSentKeywordRecords;
+ (id)sortedRecentSentKeywordRecords:(id)arg1;
+ (double)currentServerTimestamp;
+ (id)validRecentSentKeywordRecords:(id)arg1;
+ (void)saveRecentSentKeywordRecords:(id)arg1;
@end
