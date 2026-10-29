@interface WAAgentContainerStackView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _embeddedMode; // +0x8
    BOOL _synScroll; // +0x9
    BOOL _isPopping; // +0xa
    id <WAAgentContainerStackViewDelegate> _delegate; // +0x10
    unsigned long long _currentPage; // +0x18
    UIScrollView * _outerScrollView; // +0x20
    UIView * _shadowContainerView; // +0x28
    UICollectionView * _collectionView; // +0x30
    UICollectionViewFlowLayout * _flowLayout; // +0x38
    NSMutableArray * _containerItems; // +0x40
}
+ (double)calRealContainerHeight:(double)arg1;
+ (double)calRealContainerHeight:(double)arg1 embeddedMode:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 embeddedMode:(BOOL)arg2;
- (void)dealloc;
- (void)setupCollectionView;
- (void)layoutSubviews;
- (id)containerIds;
- (unsigned int)topContainerId;
- (unsigned int)currentContainerId;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (id)createContainerWithId:(unsigned int)arg1;
- (id)itemForContainerId:(unsigned int)arg1;
- (unsigned long long)indexForContainerId:(unsigned int)arg1;
- (void)destroyContainersAfterIndex:(unsigned long long)arg1;
- (CGSize)getRealContainerSize;
- (double)maxFrameSetViewHeight;
- (void)handleFrameSetViewHeightChange;
- (void)pushContainerWithId:(unsigned int)arg1 animated:(BOOL)arg2 callback:(id /* block */)arg3;
- (unsigned int)popContainerAnimated:(BOOL)arg1;
- (void)removeLastContainer;
- (void)popToContainerId:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)popToRootAnimated:(BOOL)arg1;
- (void)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)frameSetViewForContainerId:(unsigned int)arg1;
- (void)setFrameSetView:(id)arg1 forContainerId:(unsigned int)arg2 frameId:(unsigned int)arg3;
- (unsigned int)frameIdForContainerId:(unsigned int)arg1;
- (id)scrollViewForContainerId:(unsigned int)arg1;
- (void)markContainerExpired:(unsigned int)arg1 expiredText:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)handleScrollEnd:(id)arg1;
- (void)redrawFrameSetViewAtPage:(unsigned long long)arg1;
- (void)redrawCurrentFrameSetView;
- (id)panGestureRecognizer;
- (void)setOuterScrollView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)embeddedMode;
- (void)setEmbeddedMode:(BOOL)arg1;
- (unsigned long long)currentPage;
- (void)setCurrentPage:(unsigned long long)arg1;
- (BOOL)synScroll;
- (id)outerScrollView;
- (id)shadowContainerView;
- (void)setShadowContainerView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)containerItems;
- (void)setContainerItems:(id)arg1;
- (BOOL)isPopping;
- (void)setIsPopping:(BOOL)arg1;
- (void).cxx_destruct;
@end
