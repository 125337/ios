@interface MMStoreEmotionRewardChartsViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, StoreEmotionGetDonorListCgiDelegate, EmotionCollectionFooterViewDelegate>
{
    EmoticonStoreItem * m_storeItem; // +0x70
    EmotionRewardResponseInfo * m_rewardInfo; // +0x78
    NSArray * m_donors; // +0x80
    StoreEmotionGetDonorListCgi * m_getDonorListCgi; // +0x88
    UICollectionView * m_collectionView; // +0x90
    EmotionStoreRewardDonorHeader * m_collectionHeaderView; // +0x98
    EmotionCollectionFooterView * m_collectionFooterView; // +0xa0
    UIImage * m_defaultHeadImage; // +0xa8
}
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)initView;
- (void)onClose;
- (void)onGetDonorsListSuccessedWithPid:(id)arg1 Donors:(id)arg2 DonorNum:(unsigned int)arg3 hasMore:(BOOL)arg4;
- (void)onGetDonorsListFailedWithPid:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void).cxx_destruct;
@end
