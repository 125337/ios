@interface EmoticonBoardCrossCollectionIPTipPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardIPMergeTipViewDelegate, UICollectionViewDataSource>
{
    double _bottomInset; // +0x8
}
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setBottomInset:(double)arg1;
- (void)reloadViews;
- (void)layoutSubviews;
- (void)updateLayout;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)onTapConfirmMergeButton;
- (double)bottomInset;
@end
