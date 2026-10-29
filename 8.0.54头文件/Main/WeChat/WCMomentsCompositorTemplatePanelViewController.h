@interface WCMomentsCompositorTemplatePanelViewController : WCVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCMomentsCompositorTemplateTableDelegate>
{
    NSIndexPath * _selectedTabIndex; // +0x68
    WCMomentsCompositorTemplateTableViewController * _currentTemplateTableVC; // +0x70
    long long _focusedSection; // +0x78
    long long _focusedRow; // +0x80
    MJVideoTemplate * _focusedTemplate; // +0x88
    id <WCMomentsCompositorTemplatePanelDelegate> _delegate; // +0x90
    WCVideoProducerDataSource * _templateData; // +0x98
    WCVideoProducerDataSource * _tabCellVMData; // +0xa0
    NSMutableDictionary * _templateTableVCMap; // +0xa8
    UIView * _contentContainerView; // +0xb0
    UICollectionView * _tabBarCollectionView; // +0xb8
    MMUIButton * _confirmButton; // +0xc0
    UIView * _templateTableVCContainerView; // +0xc8
}
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onNavigationBarBackgroundColorChange;
- (void)showWithTemplateData:(id)arg1 atDefaultPage:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)templateTable:(id)arg1 didFocusTemplate:(id)arg2 atSection:(long long)arg3 row:(long long)arg4;
- (void)onClickDismiss:(id)arg1;
- (void)onClickConfirm:(id)arg1;
- (void)onTabAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2;
- (void)showTemplateTableVCForSection:(long long)arg1 sectionId:(id)arg2;
- (void)initView;
- (void)initBackgroundCloseView;
- (void)initContentView;
- (void)initTopBarView;
- (void)initTabBarCollectionView;
- (void)initTemplateTableVCContainerView;
- (double)_getSelectPanelSafeHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)templateData;
- (void)setTemplateData:(id)arg1;
- (id)tabCellVMData;
- (void)setTabCellVMData:(id)arg1;
- (id)templateTableVCMap;
- (void)setTemplateTableVCMap:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)tabBarCollectionView;
- (void)setTabBarCollectionView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)templateTableVCContainerView;
- (void)setTemplateTableVCContainerView:(id)arg1;
- (void).cxx_destruct;
@end

