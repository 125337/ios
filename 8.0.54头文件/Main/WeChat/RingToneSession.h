@interface RingToneSession : NSObject
+ (id)fillUpFinderItemWithRing:(id)arg1 useCache:(BOOL)arg2;
+ (id)fetchHistoryRingsWithSeq:(unsigned long long)arg1;
+ (id)clearHistoryRings;
+ (id)deleteHistoryRing:(id)arg1;
+ (void)finderFeedContentVMWithRing:(id)arg1 completion:(id /* block */)arg2;
+ (id)setupRingToneWithType:(unsigned long long)arg1 ring:(id)arg2 userName:(id)arg3 op:(unsigned long long)arg4 scene:(unsigned long long)arg5;
+ (id)fetchRecommendRingsWithOffset:(unsigned int)arg1 ring:(id)arg2 pullType:(unsigned long long)arg3;
+ (id)ReportRingBackForRecommend:(id)arg1;
+ (id)GetRingBackDetailByFinderItem:(id)arg1;
+ (id)genRingBackDetailSubRequestPB:(id)arg1;
+ (void)jumpToFinderPlayer:(id)arg1 ring:(id)arg2 userName:(id)arg3 pageSheetFlag:(unsigned long long)arg4 extraInfo:(id)arg5;
+ (void)jumpToAuthorPage:(id)arg1 ring:(id)arg2;
+ (void)finderAuthorPage:(id)arg1 ring:(id)arg2 userName:(id)arg3;
+ (unsigned long long)getRingToneSetType:(id)arg1;
+ (id)getReportExtraInfo:(id)arg1 position:(long long)arg2 searchID:(unsigned long long)arg3;
+ (id)searchMusicRingWithQuery:(id)arg1 offset:(unsigned int)arg2 searchID:(unsigned long long)arg3;
+ (void)prefetchDataForCell:(id)arg1;
+ (id)genRingTongExpParamFromClientPB:(unsigned int)arg1 isNewVersion:(unsigned int)arg2;
+ (id)genRingSearchUDF:(unsigned int)arg1;
+ (id)RingBackSearchWordSuggest:(id)arg1;
+ (id)SendRingBackToListen:(id)arg1 cliMinSeq:(unsigned long long)arg2 totalScanRingBackCount:(unsigned long long)arg3 totalSendRingBackCount:(unsigned long long)arg4 categoryID:(id)arg5;
@end

