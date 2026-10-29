@interface WCFinderLiveStarterGamePageViewModel : NSObject
{
    BOOL _hasFetchData; // +0x8
    BOOL _isFetchingData; // +0x9
    MMFinderLiveGameCategoryInfo * _tabInfo; // +0x10
    unsigned long long _state; // +0x18
    id <WCFinderLiveStarterGamePageViewModelDelegate> _delegate; // +0x20
}
- (id)initWithTabInfo:(id)arg1 delegate:(id)arg2;
- (void)updateState;
- (id)getCurrentGameCategoryInfo;
- (void)fetchMoreDataWithFetchMore:(BOOL)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

