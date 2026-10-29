@interface MJSegmentFilterInspectorView : MJSegmentInspectorView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _didSelectTitleItem; // +0x8
    BOOL _didSelectFilterItem; // +0x9
    UICollectionView * _titleCollectionView; // +0x10
    UICollectionView * _filterCollectionView; // +0x18
    MJPublisherSlider * _plainSlider; // +0x20
    MMUILabel * _valueLabel; // +0x28
    UIView * _sliderContainerView; // +0x30
    MMUIActivityIndicatorView * _loadingView; // +0x38
    UIView * _contentView; // +0x40
    NSIndexPath * _selectedTitleIndexPath; // +0x48
    NSIndexPath * _selectedFilterIndexPath; // +0x50
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x58
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)setupData;
- (void)setupViews;
- (void)layoutViews;
- (void)loadFilters;
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
- (double)sectionHeaderOffsetXWithItemAtIndexPath:(id)arg1;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 shouldScrollFilter:(BOOL)arg3;
- (void)filterCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)resetDidSelectItemFlags;
- (void)selectAndHighlightTitleItem;
- (void)notifyDidSelectTitleItemWithIndexPath:(id)arg1;
- (id)indexPathForItemAtLeftOfCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)updateSliderState;
- (void)setDefaultFilterIntensity;
- (id)titleCollectionView;
- (void)setTitleCollectionView:(id)arg1;
- (id)filterCollectionView;
- (void)setFilterCollectionView:(id)arg1;
- (id)plainSlider;
- (void)setPlainSlider:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)sliderContainerView;
- (void)setSliderContainerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)selectedTitleIndexPath;
- (void)setSelectedTitleIndexPath:(id)arg1;
- (id)selectedFilterIndexPath;
- (void)setSelectedFilterIndexPath:(id)arg1;
- (BOOL)didSelectTitleItem;
- (void)setDidSelectTitleItem:(BOOL)arg1;
- (BOOL)didSelectFilterItem;
- (void)setDidSelectFilterItem:(BOOL)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end

