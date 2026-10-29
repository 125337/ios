@interface MMFinderLiveOnlineStateCollectionViewNormalCellAdapter : MMFinderLiveFlowCollectionViewCellAdapter
{
    BOOL _isSelf; // +0x8
    BOOL _shouldHeatValue; // +0x9
    BOOL _newStyleEnableFlag; // +0xa
    BOOL _shouldShowHeadImage; // +0xb
    BOOL _isWatchTimeSortMode; // +0xc
    id <MMFinderLiveOnlineStateUserAdapterDelegate> _cellDelegate; // +0x10
    MMFinderLiveOnlineStateSessionInfo * _sessionInfo; // +0x18
    MMFinderLiveUserStateItem * _onlineUserItem; // +0x20
}
- (id)reuseIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)onlineUserItem;
- (void)setOnlineUserItem:(id)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (BOOL)shouldHeatValue;
- (void)setShouldHeatValue:(BOOL)arg1;
- (BOOL)newStyleEnableFlag;
- (void)setNewStyleEnableFlag:(BOOL)arg1;
- (BOOL)shouldShowHeadImage;
- (void)setShouldShowHeadImage:(BOOL)arg1;
- (BOOL)isWatchTimeSortMode;
- (void)setIsWatchTimeSortMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
