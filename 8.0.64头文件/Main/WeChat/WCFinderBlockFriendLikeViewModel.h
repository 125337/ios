@interface WCFinderBlockFriendLikeViewModel : NSObject <WCFinderBatchModContactTypeTaskDelegate, WCFinderAuthorityListViewModelProtocol>
{
    BOOL _hasAddedBlockFriends; // +0x8
    id <WCFinderAuthorityListViewModelDelegate> delegate; // +0x10
    id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate; // +0x18
    NSMutableArray * _contacts; // +0x20
    WCFinderBatchModContactTypeTask * _batchContactTask; // +0x28
}
+ (id)convertContact:(id)arg1;
- (void)requestLoadFirstPageData;
- (void)requestLoadDataFromServer;
- (void)requestLoadFirstPageDataWithDoneBlock:(id /* block */)arg1;
- (void)requestLoadNextPageData;
- (void)batchConfigAddItems:(id)arg1 delItems:(id)arg2;
- (void)finderBatchModContactTypeTask:(id)arg1 finishWithSuccessNames:(id)arg2 failedNames:(id)arg3 allSuccess:(BOOL)arg4;
- (id)guideTips;
- (id)emptyTips;
- (id)titleTips;
- (BOOL)hasMoreData;
- (void)searchWithKeyword:(id)arg1;
- (id)allContacts;
- (BOOL)showAddContactButton;
- (BOOL)showSearchBar;
- (void)onPop;
- (id)accessibilityLabelText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)batchContactTask;
- (void)setBatchContactTask:(id)arg1;
- (BOOL)hasAddedBlockFriends;
- (void)setHasAddedBlockFriends:(BOOL)arg1;
- (void).cxx_destruct;
@end
