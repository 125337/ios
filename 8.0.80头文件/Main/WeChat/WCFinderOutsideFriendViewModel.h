@interface WCFinderOutsideFriendViewModel : NSObject <WCFinderBatchModContactTypeTaskDelegate, WCFinderAuthorityListViewModelProtocol>
{
    id <WCFinderAuthorityListViewModelDelegate> delegate; // +0x8
    id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate; // +0x10
    NSMutableArray * _contacts; // +0x18
    WCFinderBatchModContactTypeTask * _batchContactTask; // +0x20
}
+ (BOOL)isMyFriend:(id)arg1;
+ (id)convertContact:(id)arg1;
- (void)requestLoadFirstPageData;
- (void)batchConfigAddItems:(id)arg1 delItems:(id)arg2;
- (void)finderBatchModContactTypeTask:(id)arg1 finishWithSuccessNames:(id)arg2 failedNames:(id)arg3 allSuccess:(BOOL)arg4;
- (id)guideTips;
- (id)emptyTips;
- (id)titleTips;
- (id)accessibilityLabelText;
- (BOOL)hasMoreData;
- (void)searchWithKeyword:(id)arg1;
- (id)allContacts;
- (BOOL)showAddContactButton;
- (BOOL)showSearchBar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)batchContactTask;
- (void)setBatchContactTask:(id)arg1;
- (void).cxx_destruct;
@end
