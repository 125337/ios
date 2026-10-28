@interface WCFinderSearchViewModel : NSObject <WCFinderContactExt, WCFinderFeedPickerPreviewListViewModelProtocol>
{
    BOOL _notShowSectionHeader; // +0x8
    BOOL _alreadyInputInputText; // +0x9
    id <WCFinderSearchViewModelDelegate> _delegate; // +0x10
    unsigned long long _refreshTime; // +0x18
    NSString * _searchSessionid; // +0x20
    FinderSearchSecurityTips * _securityTips; // +0x28
    WCFinderBaseCgi * _searchCGI; // +0x30
    NSString * _latestQueryText; // +0x38
    unsigned long long _searchSourceType; // +0x40
    NSArray * _displaySections; // +0x48
    WCFinderSearchItemReportQueue * _itemReportQueue; // +0x50
}
- (id)init;
- (void)resetDatas;
- (BOOL)isRepetSearch:(id)arg1;
- (void)updateSearchSourceType:(unsigned long long)arg1;
- (void)queryContactWith:(id)arg1;
- (void)queryContactWith:(id)arg1 sessionBuf:(id)arg2 scene:(unsigned long long)arg3;
- (void)onQueryNextPageDataItem;
- (void)onQueryNextPageDataItem:(int)arg1;
- (void)_queryNextPageContact:(int)arg1;
- (void)_queryNextPageFeed:(int)arg1;
- (void)_afterQueryNextPageFeedAppendDatas:(id)arg1 toTab:(id)arg2;
- (void)changeSelctedFeedTab:(id)arg1;
- (id)selectedTab;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (id)generateSearchContactViewModel;
- (id)generateSearchlistViewModel;
- (id)generateSearchListViewModelWithHotWord:(id)arg1 hotWordList:(id)arg2 lastBuffer:(id)arg3;
- (void)resetSearchStatus;
- (long long)dataItemSection;
- (BOOL)hasSearchContent;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (BOOL)isSearchInfoCountGreaterThanMax;
- (BOOL)isSearchInfoSection:(unsigned long long)arg1;
- (BOOL)isSearchDataItemSection:(unsigned long long)arg1;
- (BOOL)isSearchFeedItemEmpty;
- (id)searchInfoAtIndexPath:(id)arg1;
- (id)sectionForType:(long long)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)getCustomUdfKvJsonStr;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(BOOL)arg2;
- (void)recordResultDisplay:(id)arg1;
- (void)reportItemExposeInfo;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (id)contentVMOfSearchItem:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfTid:(id)arg1;
- (unsigned long long)dataCount;
- (long long)indexOfTid:(id)arg1;
- (BOOL)hasMoreData;
- (void)loadNextPageData;
- (void)report22878DataWithFeedID:(id)arg1 feedPos:(long long)arg2 isClickAction:(BOOL)arg3 isVideoFeed:(BOOL)arg4;
- (void)reportHasInputSearchText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)searchSessionid;
- (void)setSearchSessionid:(id)arg1;
- (BOOL)notShowSectionHeader;
- (void)setNotShowSectionHeader:(BOOL)arg1;
- (id)securityTips;
- (id)searchCGI;
- (void)setSearchCGI:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (unsigned long long)searchSourceType;
- (void)setSearchSourceType:(unsigned long long)arg1;
- (id)displaySections;
- (void)setDisplaySections:(id)arg1;
- (id)itemReportQueue;
- (void)setItemReportQueue:(id)arg1;
- (BOOL)alreadyInputInputText;
- (void)setAlreadyInputInputText:(BOOL)arg1;
- (void).cxx_destruct;
@end
