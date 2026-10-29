@interface MJShootBeautyMainPanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootBeautyMainPanelItemCellDelegate, MJPublisherSliderAccessibilityDelegate>
{
    BOOL _isInTemplateShootingMode; // +0x8
    id <MJShootBeautyMainPanelViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x20
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x28
    MMUIButton * _dismissButton; // +0x30
    MJShootBeautyInspectorViewModel * _viewModel; // +0x38
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x40
    NSIndexPath * _selectedIndexPath; // +0x48
    UILabel * _titleLabel; // +0x50
    MMUIButton * _resetButton; // +0x58
    MJPublisherSlider * _plainSlider; // +0x60
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)_setupViewsForNewUX;
- (void)_layoutViewsForNewUX;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)beautyMainPanelItemCellDidSelectEdit:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)updateSliderOnSelectedBeautyItemChanged;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (BOOL)isItemAdjustable:(id)arg1;
- (void)udpateSliderShowingState:(BOOL)arg1;
- (BOOL)isInTemplateShootingMode;
- (void)setIsInTemplateShootingMode:(BOOL)arg1;
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
- (id)resetButton;
- (void)setResetButton:(id)arg1;
- (id)plainSlider;
- (void)setPlainSlider:(id)arg1;
- (void).cxx_destruct;
@end
