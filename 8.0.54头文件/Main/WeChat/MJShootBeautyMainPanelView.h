@interface MJShootBeautyMainPanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootBeautyMainPanelItemCellDelegate>
{
    id <MJShootBeautyMainPanelViewDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x18
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x20
    MMUIButton * _dismissButton; // +0x28
    MJShootBeautyInspectorViewModel * _viewModel; // +0x30
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x38
    NSIndexPath * _selectedIndexPath; // +0x40
    UILabel * _titleLabel; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)beautyMainPanelItemCellDidSelectEdit:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)dismissButton;
- (void)setDismissButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

