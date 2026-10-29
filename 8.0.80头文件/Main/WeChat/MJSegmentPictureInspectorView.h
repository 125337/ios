@interface MJSegmentPictureInspectorView : MJSegmentInspectorView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView * _collectionView; // +0x8
    MJPublisherSlider * _plainSlider; // +0x10
    MJPublisherBidirectionalSlider * _bidirectionalSlider; // +0x18
    MMUILabel * _valueLabel; // +0x20
    UIView * _containerView; // +0x28
    UIView * _contentView; // +0x30
    MJPictureAdjustmentValueItem * _selectedItem; // +0x38
}
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (id)calcSelectedIndexPath;
- (void)updateSlider:(id)arg1 withValueItem:(id)arg2;
- (void)updateSliderWithValueItem:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)plainSlider;
- (void)setPlainSlider:(id)arg1;
- (id)bidirectionalSlider;
- (void)setBidirectionalSlider:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (void).cxx_destruct;
@end
