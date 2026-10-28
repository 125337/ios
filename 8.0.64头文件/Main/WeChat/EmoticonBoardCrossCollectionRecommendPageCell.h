@interface EmoticonBoardCrossCollectionRecommendPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardRecommendViewDelegate, UICollectionViewDataSource>
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)setSectionInfo:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onEmoticonBoardRecommendViewTapWithPid:(id)arg1;
@end
