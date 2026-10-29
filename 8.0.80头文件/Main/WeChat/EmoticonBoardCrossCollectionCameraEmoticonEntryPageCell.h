@interface EmoticonBoardCrossCollectionCameraEmoticonEntryPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardCameraEmoticonEntryViewDelegate, UICollectionViewDataSource>
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)onTapCameraEmoticonEntryViewCreateButton;
@end
