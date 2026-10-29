@interface WCFinderNavTabViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderNavTabTitleViewDelegate>
{
    double _navTabPaddingButton; // +0x68
    UICollectionView * _collectionView; // +0x70
    NSArray * _pages; // +0x78
    NSMapTable * _pageMaps; // +0x80
}
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onTitleViewSelectedIdx:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldRelayoutCollectionView;
- (CGRect)collectionViewTargetFrame;
- (void)setupProperty;
- (void)setNavTabPaddingButton:(double)arg1;
- (void)installTitleView;
- (id)titleView;
- (void)installCollectionView;
- (id)getCollectionView;
- (double)collectionViewTopMargin;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (id)definePages;
- (void)reload;
- (void)_updateTitleView;
- (id)pageViewForIndexPath:(id)arg1;
- (id)getCurrentPageViewController;
- (double)navTabPaddingButton;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)pages;
- (void)setPages:(id)arg1;
- (id)pageMaps;
- (void)setPageMaps:(id)arg1;
- (void).cxx_destruct;
@end

