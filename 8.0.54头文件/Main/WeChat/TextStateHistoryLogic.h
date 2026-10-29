@interface TextStateHistoryLogic : NSObject <TextStateCardListDataProvider, TextStateCardListDelegate, TextStateMgrExt, MultipleTextStateCardViewDataSource>
{
    BOOL _hasCacheData; // +0x8
    BOOL _finished; // +0x9
    BOOL _fetchingData; // +0xa
    id <TextStateHistoryLogicDelegate> _delegate; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _sceneSessionId; // +0x20
    TextStateHistoryCalendar * _calendar; // +0x28
    WCCgiBlockHelper * _summaryCgiBlockHelper; // +0x30
    NSData * _pagingContext; // +0x38
    NSMutableArray * _infoList; // +0x40
    NSMutableIndexSet * _completeInfoIndexes; // +0x48
    TextStateHistoryInfo * _pivotInfo; // +0x50
    unsigned long long _pivotInfoIndex; // +0x58
}
+ (void)fetchDataForTextStateIdList:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)historyInfoListCachePath;
- (id)init;
- (void)refreshSceneSessionId;
- (void)resetSummaryFetchState;
- (void)fetchSummaryWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isFetchingSummary;
- (BOOL)hasFinishedFetchingSummary;
- (void)saveCache;
- (id)cardListDataProvider;
- (id)cardListDelegate;
- (void)pivotCardListIndexForInfo:(id)arg1;
- (void)fetchDataFromPivotWithCompletionHandler:(id /* block */)arg1;
- (void)fetchDataFromIndex:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDataFromKey:(unsigned long long)arg1 count:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned long long)targetIndexForFetchingDataAtIndex:(unsigned long long)arg1;
- (void)checkFetchDataAtIndex:(unsigned long long)arg1;
- (void)deleteHistoryInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)count;
- (unsigned long long)beginIndex;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onTapMoreForCardView:(id)arg1 textState:(id)arg2;
- (void)onTapMoreForActivateTextState:(id)arg1 cardView:(id)arg2 memCache:(id)arg3;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)sceneSessionId;
- (void)setSceneSessionId:(id)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (id)summaryCgiBlockHelper;
- (void)setSummaryCgiBlockHelper:(id)arg1;
- (BOOL)hasCacheData;
- (void)setHasCacheData:(BOOL)arg1;
- (id)pagingContext;
- (void)setPagingContext:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)infoList;
- (void)setInfoList:(id)arg1;
- (id)completeInfoIndexes;
- (void)setCompleteInfoIndexes:(id)arg1;
- (id)pivotInfo;
- (void)setPivotInfo:(id)arg1;
- (unsigned long long)pivotInfoIndex;
- (void)setPivotInfoIndex:(unsigned long long)arg1;
- (BOOL)fetchingData;
- (void)setFetchingData:(BOOL)arg1;
- (void).cxx_destruct;
@end

