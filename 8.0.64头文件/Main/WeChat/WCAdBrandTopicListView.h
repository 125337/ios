@interface WCAdBrandTopicListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate>
{
    NSArray * _topicInfoList; // +0x8
    double _topicCornerRadius; // +0x10
    id <WCAdBrandTopicListViewDelegate> _delegate; // +0x18
    WCAdBrandTopicListCollectionView * _topicListView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 topicInfoList:(id)arg2 cornerRadius:(double)arg3;
- (void)generateSubviews;
- (id)collectionLayout;
- (id)topicListView;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)topicInfoList;
- (void)setTopicInfoList:(id)arg1;
- (double)topicCornerRadius;
- (void)setTopicCornerRadius:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTopicListView:(id)arg1;
- (void).cxx_destruct;
@end
