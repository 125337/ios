@interface MMGroupLiveOnlineStateView : MMLiveOnlineStateView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMLiveOnlineStateCollectionCellDelegate, MMGroupLiveOnlineUserLogicDelegate>
{
    MMGroupLiveOnlineUserLogic * onlineUserLogic; // +0x8
    UICollectionView * _onlineUsersCollectionView; // +0x10
    NSMutableArray * _userList; // +0x18
    RichTextView * _noUserLabel; // +0x20
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (id)liveTask;
- (id)getNoUserLabelTitle;
- (id)getOnlineUserCountTitle:(unsigned long long)arg1;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (void)initView;
- (void)reloadData;
- (void)layoutContentView;
- (void)onFetchGroupOnlineUserListWithError:(id)arg1 userList:(id)arg2;
- (void)onKickAudienceForGroupLiveWithError:(id)arg1 userName:(id)arg2;
- (void)onHeadImageClicked:(id)arg1 userItem:(id)arg2;
- (id)onlineUsersScrollView;
- (id)onlineUsersCollectionView;
- (id)getOnlineUsersScrollView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)onlineUserLogic;
- (void)setOnlineUserLogic:(id)arg1;
- (void)setOnlineUsersCollectionView:(id)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (id)noUserLabel;
- (void)setNoUserLabel:(id)arg1;
- (void).cxx_destruct;
@end
