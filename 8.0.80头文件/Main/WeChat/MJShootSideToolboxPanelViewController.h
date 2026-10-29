@interface MJShootSideToolboxPanelViewController : MMPageSheetBaseViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <MJShootSideToolboxPanelViewControllerDelegate> _delegate; // +0x70
    MJShootSideToolboxPanelViewModel * _viewModel; // +0x78
    UICollectionView * _collectionView; // +0x80
    MMUIView * _contentView; // +0x88
    UIView * _publishingPanelHostView; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (void)reloadData;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)contentView;
- (id)collectionView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)publishingPanelHostView;
- (void)setPublishingPanelHostView:(id)arg1;
- (void).cxx_destruct;
@end
