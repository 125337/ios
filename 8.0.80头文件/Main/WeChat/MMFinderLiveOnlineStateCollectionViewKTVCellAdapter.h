@interface MMFinderLiveOnlineStateCollectionViewKTVCellAdapter : MMFinderLiveFlowCollectionViewCellAdapter
{
    BOOL _shouldShowHeadImage; // +0x8
    id <MMFinderLiveOnlineStateUserAdapterDelegate> _cellDelegate; // +0x10
    MMFinderLiveOnlineStateSessionInfo * _sessionInfo; // +0x18
    MMFinderLiveUserStateItem * _userItem; // +0x20
}
- (id)reuseIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)userItem;
- (void)setUserItem:(id)arg1;
- (BOOL)shouldShowHeadImage;
- (void)setShouldShowHeadImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
