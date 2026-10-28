@interface WCStoryPreviewContactIndicatorView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UICollectionViewFlowLayout * m_collectionLayout; // +0x8
    UICollectionView * m_collectionView; // +0x10
    CAGradientLayer * m_gradientLayer; // +0x18
    id <WCStoryPreviewContactIndicatorViewDataSource> _dataSource; // +0x20
    id <WCStoryPreviewContactIndicatorViewDelegate> _delegate; // +0x28
    double _gradientMaskHeight; // +0x30
}
+ (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setDataSource:(id)arg1;
- (void)configCollectionView;
- (void)updateOffset:(double)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)gradientMaskHeight;
- (void)setGradientMaskHeight:(double)arg1;
- (void).cxx_destruct;
@end
