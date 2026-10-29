@interface WCVideoProducerTemplateBarViewController : WCVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _canRecreateWhileLoading; // +0x70
    BOOL _isCollectionViewLoaded; // +0x71
    id <WCVideoProducerTemplateBarDelegate> _delegate; // +0x78
    long long _selectedStyle; // +0x80
    WCVideoProducerDataSource * _cellVMData; // +0x88
    UIView * _contentContainerView; // +0x90
    CAGradientLayer * _gradientMaskLayer; // +0x98
    NSIndexPath * _selectedIndex; // +0xa0
    UICollectionView * _templateBarSelectorCollectionView; // +0xa8
}
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)resetDataWithDefaultTemplateList:(id)arg1 createSameTemplateList:(id)arg2 stubTemplateList:(id)arg3 launcherTemplateList:(id)arg4 folderTemplateList:(id)arg5 recommendTemplateList:(id)arg6 pickOutTemplateList:(id)arg7;
- (id)indexPathOfTemplateById:(id)arg1;
- (long long)cellOrderOfTemplateById:(id)arg1;
- (id)templateCellVMById:(id)arg1;
- (void)selectTemplateById:(id)arg1;
- (void)addManualTemplate:(id)arg1 andAutoSelect:(BOOL)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (void)_reloadData;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2 manually:(BOOL)arg3;
- (void)_updateCellOrder;
- (void)_updateCellChangingStatus;
- (void)_addDefaultTemplateList:(id)arg1;
- (void)_addCreateSameTemplateList:(id)arg1;
- (void)_addStubTemplateList:(id)arg1;
- (void)_addLauncherTemplateList:(id)arg1;
- (void)_addFolderTemplateList:(id)arg1;
- (void)_addRecommendTemplateList:(id)arg1;
- (void)_addPickOutTemplateList:(id)arg1;
- (id)_changingTemplate;
- (void)_resizeCollectionView;
- (void)_relayoutView;
- (void)_initView;
- (void)_initBackgroundCloseView;
- (void)_initContentView;
- (double)_getTemplateBarSafeHeight;
- (double)_getCellViewHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selectedStyle;
- (void)setSelectedStyle:(long long)arg1;
- (BOOL)canRecreateWhileLoading;
- (void)setCanRecreateWhileLoading:(BOOL)arg1;
- (id)cellVMData;
- (void)setCellVMData:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (id)templateBarSelectorCollectionView;
- (void)setTemplateBarSelectorCollectionView:(id)arg1;
- (BOOL)isCollectionViewLoaded;
- (void)setIsCollectionViewLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
