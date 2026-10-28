@interface WCFinderPOIRelatedListHalfViewModel : NSObject
{
    BOOL _isSearchModel; // +0x8
    BOOL _isContinueFlag; // +0x9
    id <WCFinderPOIRelatedListHalfViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _allPOIDatas; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _searchText; // +0x28
    NSData * _lastBuffer; // +0x30
}
- (id)initWithFinderUserName:(id)arg1;
- (id)allPOIDatas;
- (id)snsPOIDetailAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (BOOL)isEnableFetchNextPageData;
- (BOOL)isDataEmpty;
- (void)fetchAction:(id)arg1;
- (void)onBeginSearch;
- (void)onSearchAction:(id)arg1;
- (void)onSearchCancel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAllPOIDatas:(id)arg1;
- (BOOL)isSearchModel;
- (void)setIsSearchModel:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isContinueFlag;
- (void)setIsContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
