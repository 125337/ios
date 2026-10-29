@interface WCFinderPostUsualTopicContainerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCGeneralMonitorDelegate>
{
    id <WCFinderPostUsualTopicContainerViewDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSArray * _dataSource; // +0x18
    WCFinderUpdateTopicModel * _inputTextTopicModel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initCollectionView;
- (BOOL)updateWithRecommendTopicArray:(id)arg1 inputTextTopicModel:(id)arg2;
- (void)clearRecommendTopic;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)inputTextTopicModel;
- (void)setInputTextTopicModel:(id)arg1;
- (void).cxx_destruct;
@end
