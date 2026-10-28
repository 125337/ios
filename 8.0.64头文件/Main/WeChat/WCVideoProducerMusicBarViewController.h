@interface WCVideoProducerMusicBarViewController : WCVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSIndexPath * _focusedIndex; // +0x70
    NSIndexPath * _selectedIndex; // +0x78
    long long _centerItemRow; // +0x80
    BOOL _isMusicSearcherEnabled; // +0x88
    id <WCVideoProducerMusicBarDelegate> _delegate; // +0x90
    WCVideoProducerDataSource * _cellVMData; // +0x98
    MMUIButton * _switchBGMButton; // +0xa0
    MMUIButton * _switchOSTButton; // +0xa8
    UIView * _contentContainerView; // +0xb0
    UICollectionView * _selectListCollectionView; // +0xb8
}
- (id)initWithContainerFrame:(CGRect)arg1 enableMusicSearcher:(BOOL)arg2;
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateMusicDataWithRecommendMusicList:(id)arg1 searchMusicList:(id)arg2;
- (void)updateMusicStatusWithIsBGMEnabled:(BOOL)arg1 isOSTEnabled:(BOOL)arg2;
- (void)selectMusicById:(id)arg1;
- (id)indexPathOfMusicById:(id)arg1;
- (void)_updateCellOrder;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)_onClickSearchMusic:(id)arg1;
- (void)_onClickDismiss:(id)arg1;
- (void)_onClickBGMSwitch:(id)arg1;
- (void)_onClickOSTSwitch:(id)arg1;
- (void)_onMusicAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2;
- (void)_onMusicStatusShouldChangeToEnableBGM:(BOOL)arg1 enableOST:(BOOL)arg2;
- (id)_centerItemIndexOfScrollView:(id)arg1;
- (void)_relayoutView;
- (void)_initView;
- (void)_initBackgroundCloseView;
- (void)_initContentView;
- (void)_initTopBarView;
- (void)_initSearchBarView;
- (void)_initSelectorView;
- (void)_initBottomBarView;
- (double)_cellItemWidth;
- (double)_cellItemWidthAutoFit;
- (double)_cellItemWidthScaled;
- (double)_cellPageWidthAutoFit;
- (double)_getMusicBarSafeHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isMusicSearcherEnabled;
- (void)setIsMusicSearcherEnabled:(BOOL)arg1;
- (id)cellVMData;
- (void)setCellVMData:(id)arg1;
- (id)switchBGMButton;
- (void)setSwitchBGMButton:(id)arg1;
- (id)switchOSTButton;
- (void)setSwitchOSTButton:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)selectListCollectionView;
- (void)setSelectListCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
