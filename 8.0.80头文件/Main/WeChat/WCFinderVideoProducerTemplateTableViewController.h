@interface WCFinderVideoProducerTemplateTableViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    CGSize _size; // +0x70
    NSIndexPath * _focusedIndex; // +0x80
    long long _originSection; // +0x88
    id <WCFinderVideoProducerTemplateTableDelegate> _delegate; // +0x90
    WCFinderVideoProducerDataSource * _cellVMData; // +0x98
    UICollectionView * _templateCollectionView; // +0xa0
}
- (id)initWithSize:(CGSize)arg1;
- (void)viewDidLoad;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)updateContainerSize:(CGSize)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)showWithTemplateData:(id)arg1 fromSection:(long long)arg2;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (long long)overrideUserInterfaceStyle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)onTemplateAtIndex:(id)arg1 changedFocusTo:(BOOL)arg2;
- (void)initView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellVMData;
- (void)setCellVMData:(id)arg1;
- (id)templateCollectionView;
- (void)setTemplateCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
