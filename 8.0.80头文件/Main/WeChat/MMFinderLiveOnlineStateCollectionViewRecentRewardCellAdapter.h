@interface MMFinderLiveOnlineStateCollectionViewRecentRewardCellAdapter : MMFinderLiveFlowCollectionViewCellAdapter
{
    BOOL _shouldShowHeadImage; // +0x8
    id <MMFinderLiveOnlineStateUserAdapterDelegate> _cellDelegate; // +0x10
    MMFinderLiveRecentRewardUserItem * _recentRewardUserItem; // +0x18
}
- (id)reuseIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)recentRewardUserItem;
- (void)setRecentRewardUserItem:(id)arg1;
- (BOOL)shouldShowHeadImage;
- (void)setShouldShowHeadImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
