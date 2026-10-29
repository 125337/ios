@interface MJShootFilterInspector : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJPublisherSliderAccessibilityDelegate>
{
    id <MJShootFilterInspectorDelegate> _delegate; // +0x8
    MMUIButton * _dismissButton; // +0x10
    MJPublisherSlider * _plainSlider; // +0x18
    UICollectionView * _titleCollectionView; // +0x20
    UICollectionView * _filterCollectionView; // +0x28
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x30
    NSIndexPath * _selectedTitleIndexPath; // +0x38
    MJShootFilterInspectorViewModel * _viewModel; // +0x40
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x48
    UIView * _lineView; // +0x50
    UILabel * _titleLabel; // +0x58
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupData;
- (void)setupViews;
- (void)layoutViews;
- (void)setupForShowing;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 shouldScrollFilter:(BOOL)arg3;
- (void)filterCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateSliderOnSelectedFilterItemChanged;
- (void)showSliderAnimated:(BOOL)arg1;
- (void)hideSliderAnimated:(BOOL)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (void)notifyDidSelectTitleItemWithIndexPath:(id)arg1;
- (id)indexPathForItemAtCenterOfCollectionView:(id)arg1;
- (void)relayoutLineView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dismissButton;
- (void)setDismissButton:(id)arg1;
- (id)plainSlider;
- (void)setPlainSlider:(id)arg1;
- (id)titleCollectionView;
- (void)setTitleCollectionView:(id)arg1;
- (id)filterCollectionView;
- (void)setFilterCollectionView:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)selectedTitleIndexPath;
- (void)setSelectedTitleIndexPath:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

