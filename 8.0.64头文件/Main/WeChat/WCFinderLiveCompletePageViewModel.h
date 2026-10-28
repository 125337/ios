@interface WCFinderLiveCompletePageViewModel : NSObject <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _canScroll; // +0x8
    BOOL _canShowHomePage; // +0x9
    long long _index; // +0x10
    id /* block */ _pageChangeBlock; // +0x18
    UICollectionView * _mainCollectionView; // +0x20
    WCFinderLiveCompleteScrollView * _topScrollView; // +0x28
    WCFinderLiveHomePageViewController * _homePageVC; // +0x30
    UINavigationController * _bottomNavViewController; // +0x38
    unsigned long long _scene; // +0x40
    CGRect _topScrollViewFrame; // +0x48
    CGRect _bottomViewFrame; // +0x68
    CGRect _collectionViewFrame; // +0x88
}
+ (id)reuseIdentifier;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)updateIndex:(long long)arg1;
- (long long)getCurrentIndex;
- (void)handelEndScroll;
- (BOOL)canShowHomePageVC;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updatetopScrollView:(id)arg1 homePageVC:(id)arg2 mainCollectionView:(id)arg3;
- (void)updateFrameWitTopViewFrame:(CGRect)arg1 bottomViewFrame:(CGRect)arg2 collectionView:(id)arg3;
- (void)updateBottomViewController:(id)arg1 collectionView:(id)arg2;
- (void)updatetopScrollViewFrame:(CGRect)arg1 collectionView:(id)arg2;
- (void)updateBottomViewFrame:(CGRect)arg1 collectionView:(id)arg2;
- (BOOL)collectionViewFrameSizeChanged:(id)arg1;
- (void)updateUI:(BOOL)arg1 collectionView:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)getItemWidth;
- (double)getItemHeight:(id)arg1;
- (BOOL)isVCVisable;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (BOOL)canScroll;
- (void)setCanScroll:(BOOL)arg1;
- (id /* block */)pageChangeBlock;
- (void)setPageChangeBlock:(id /* block */)arg1;
- (BOOL)canShowHomePage;
- (void)setCanShowHomePage:(BOOL)arg1;
- (id)mainCollectionView;
- (void)setMainCollectionView:(id)arg1;
- (id)topScrollView;
- (void)setTopScrollView:(id)arg1;
- (id)homePageVC;
- (void)setHomePageVC:(id)arg1;
- (CGRect)topScrollViewFrame;
- (void)setTopScrollViewFrame:(CGRect)arg1;
- (CGRect)bottomViewFrame;
- (void)setBottomViewFrame:(CGRect)arg1;
- (CGRect)collectionViewFrame;
- (void)setCollectionViewFrame:(CGRect)arg1;
- (id)bottomNavViewController;
- (void)setBottomNavViewController:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
