@interface CameraScanCombineGoodsListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CameraScanCombineGoodsListViewLayoutDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isFold; // +0x8
    BOOL _isProcessingViewModel; // +0x9
    BOOL _bChangingLayout; // +0xa
    id <CameraScanCombineGoodsListViewDelegate> _delegate; // +0x10
    UIView * _collectionContainerView; // +0x18
    UICollectionView * _collectionView; // +0x20
    NSMutableArray * _viewModels; // +0x28
    UIView * _gradientMaskView; // +0x30
    NSMutableArray * _viewModelsQueue; // +0x38
    CAGradientLayer * _gradientLayer; // +0x40
    CameraScanCombineGoodsListViewLayout * _normalLayout; // +0x48
    CameraScanCombineGoodsListViewExpandLayout * _expandLayout; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)initData;
- (void)initSubviews;
- (void)initMaskViewWithHeight:(double)arg1;
- (void)appendItemWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)appendNewItemWithViewModel:(id)arg1;
- (BOOL)isListEmpty;
- (unsigned long long)listItemCardCount;
- (long long)indexOfCardWithItemViewModel:(id)arg1;
- (void)clearListView;
- (id)itemsNeedRetrack;
- (void)updateItemToFailWithViewModel:(id)arg1;
- (void)changeListViewToFold:(BOOL)arg1 animated:(BOOL)arg2;
- (void)listViewDidFold:(BOOL)arg1;
- (void)__checkQueue;
- (void)__enqueueWithViewModel:(id)arg1;
- (BOOL)shouldReplaceViewModel:(id)arg1 withNewViewModel:(id)arg2;
- (BOOL)isStringChanged:(id)arg1 andNewString:(id)arg2;
- (void)animateToInsertFirstCellWithViewModel:(id)arg1;
- (BOOL)__checkExisitViewModelAndReplaceIfNeeded:(id)arg1;
- (void)onCompleteAppendItemAnimationWithItemViewModel:(id)arg1;
- (double)gradienLayerMaskHeight;
- (BOOL)shouldUseDefaultUpdateAnimation;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTapView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)viewModels;
- (void)setViewModels:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)viewModelsQueue;
- (void)setViewModelsQueue:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)isProcessingViewModel;
- (void)setIsProcessingViewModel:(BOOL)arg1;
- (id)normalLayout;
- (void)setNormalLayout:(id)arg1;
- (id)expandLayout;
- (void)setExpandLayout:(id)arg1;
- (BOOL)bChangingLayout;
- (void)setBChangingLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end

