@interface WNMultiImagesCollectionView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    double m_width; // +0x8
    NSArray * _viewSource; // +0x10
    UIPageControl * _pageCtrl; // +0x18
    unsigned long long _currentPage; // +0x20
    UICollectionView * _imageCollectionView; // +0x28
}
+ (id)viewDataSource:(id)arg1 width:(double)arg2 currentSelectIndex:(unsigned long long)arg3;
- (id)initWithFrame:(CGRect)arg1 andViewDataSouce:(id)arg2 currentSelectIndex:(unsigned long long)arg3;
- (void)initSubView;
- (void)changeViewDataSource:(id)arg1 currentSelectIndex:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)viewSource;
- (void)setViewSource:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (unsigned long long)currentPage;
- (void)setCurrentPage:(unsigned long long)arg1;
- (id)imageCollectionView;
- (void)setImageCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

