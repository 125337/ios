@interface MJShootVisagePanelViewController : MMPageSheetBaseViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <MJShootVisagePanelViewControllerDelegate> _delegate; // +0x68
    MJShootVisagePanelViewModel * _viewModel; // +0x70
    MMUIView * _contentView; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UICollectionView * _collectionView; // +0x88
    double _cellHorizontalPadding; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (void)pageSheetWillClose:(BOOL)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)contentView;
- (id)titleLabel;
- (id)collectionView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (double)cellHorizontalPadding;
- (void)setCellHorizontalPadding:(double)arg1;
- (void).cxx_destruct;
@end

