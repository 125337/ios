@interface WCFinderBlockPosterViewModel : NSObject <WCFinderContactCommonExt, WCFinderAuthorityListViewModelProtocol>
{
    BOOL _continueFlag; // +0x8
    BOOL _searchContinueFlag; // +0x9
    id <WCFinderAuthorityListViewModelDelegate> delegate; // +0x10
    id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate; // +0x18
    NSData * _lastBuff; // +0x20
    NSMutableArray * _contacts; // +0x28
    NSArray * _searchResults; // +0x30
    NSData * _searchBuff; // +0x38
    NSString * _searchKeyWord; // +0x40
    NSString * _lastSearchReqeustId; // +0x48
}
- (id)init;
- (void)requestLoadFirstPageData;
- (void)requestLoadNextPageData;
- (void)requestLoadNextPageData:(BOOL)arg1;
- (void)batchConfigAddItems:(id)arg1 delItems:(id)arg2;
- (void)searchWithKeyword:(id)arg1;
- (BOOL)searchResultHasMoreData;
- (void)requestNextSearchPageData;
- (id)guideTips;
- (id)emptyTips;
- (id)titleTips;
- (BOOL)showAddContactButton;
- (BOOL)showSearchBar;
- (BOOL)hasMoreData;
- (void)onFinderContactShieldFeedChanged:(id)arg1;
- (BOOL)isDataEmpty;
- (double)fixDisplayOffsetY;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)searchResults;
- (void)setSearchResults:(id)arg1;
- (BOOL)searchContinueFlag;
- (void)setSearchContinueFlag:(BOOL)arg1;
- (id)searchBuff;
- (void)setSearchBuff:(id)arg1;
- (id)searchKeyWord;
- (void)setSearchKeyWord:(id)arg1;
- (id)lastSearchReqeustId;
- (void)setLastSearchReqeustId:(id)arg1;
- (void).cxx_destruct;
@end

