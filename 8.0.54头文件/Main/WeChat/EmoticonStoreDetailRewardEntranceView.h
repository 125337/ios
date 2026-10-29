@interface EmoticonStoreDetailRewardEntranceView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ILinkEventExt>
{
    UILabel * m_begWordLabel; // +0x8
    UIButton * m_redRewardBtn; // +0x10
    RichTextView * m_donorsCountLabel; // +0x18
    UICollectionView * m_donorsView; // +0x20
    NSArray * m_donors; // +0x28
    id <EmotionStoreDetailRewardEntranceDelegate> _delegate; // +0x30
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)configSubviews;
- (double)updateViewWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onRewardButtonClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

