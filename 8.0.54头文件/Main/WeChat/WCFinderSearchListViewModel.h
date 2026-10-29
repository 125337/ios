@interface WCFinderSearchListViewModel : NSObject
{
    BOOL _forbidenSearchText; // +0x8
    BOOL _hasReportInputText; // +0x9
    int _inlineSearchScene; // +0xc
    NSString * _searchSessionid; // +0x10
    id <WCFinderSearchListViewModelDelegate> _delegate; // +0x18
    unsigned long long _refreshTime; // +0x20
    NSString * _latestQueryText; // +0x28
    FinderEventInfo * _pageEventInfo; // +0x30
    WCFinderSearchItemReportQueue * _itemReportQueue; // +0x38
    NSData * _objHotwordInfoBuff; // +0x40
    NSString * _lastReqeustId; // +0x48
    id <WCFinderSearchDataProvider> _dataProvider; // +0x50
    WCFinderSearchKVReporter * _reporter; // +0x58
}
- (id)init;
- (id)initWithInlineSearchScene:(int)arg1;
- (id)initWithSessionId:(id)arg1 inlineSearchScene:(int)arg2;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (BOOL)isRepetSearch:(id)arg1;
- (id)allSearchDataItems;
- (void)setDelegate:(id)arg1;
- (void)beginSearchWithQueryText:(id)arg1 searchSourceType:(unsigned long long)arg2;
- (void)beginSearchWithQueryText:(id)arg1 latestRequestID:(id)arg2 dataArray:(id)arg3 tabId:(long long)arg4 lastBuffer:(id)arg5 continueFlag:(BOOL)arg6;
- (void)beginSearchWithHotWordList:(id)arg1 currentHotWord:(id)arg2 objHotwordInfoBuff:(id)arg3 hotWordListBuffer:(id)arg4 forbidenSearchText:(BOOL)arg5 scene:(int)arg6 reportSeachScene:(unsigned long long)arg7;
- (void)setDataProvider:(id)arg1;
- (void)cleanSearchContent;
- (id)generateHotwordList:(id)arg1 firstWord:(id)arg2;
- (void)updateCurrentDisplayHotWord:(id)arg1;
- (void)onQueryNextPageDataItems;
- (BOOL)isNoMoreData;
- (BOOL)isLoading;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMOfTid:(id)arg1;
- (long long)numberOfSection;
- (int)searchScene;
- (void)recordResultDisplay:(id)arg1;
- (void)reportItemExposeInfo;
- (void)reportHasInputSearchText;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(BOOL)arg2;
- (id)searchSessionid;
- (void)setSearchSessionid:(id)arg1;
- (id)delegate;
- (unsigned long long)refreshTime;
- (BOOL)forbidenSearchText;
- (void)setForbidenSearchText:(BOOL)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)pageEventInfo;
- (void)setPageEventInfo:(id)arg1;
- (id)itemReportQueue;
- (void)setItemReportQueue:(id)arg1;
- (id)objHotwordInfoBuff;
- (void)setObjHotwordInfoBuff:(id)arg1;
- (id)lastReqeustId;
- (void)setLastReqeustId:(id)arg1;
- (id)dataProvider;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (int)inlineSearchScene;
- (void)setInlineSearchScene:(int)arg1;
- (BOOL)hasReportInputText;
- (void)setHasReportInputText:(BOOL)arg1;
- (void).cxx_destruct;
@end

