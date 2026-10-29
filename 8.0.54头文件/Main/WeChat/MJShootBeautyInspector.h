@interface MJShootBeautyInspector : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJPublisherSliderAccessibilityDelegate>
{
    BOOL _isInTemplateShootingMode; // +0x8
    id <MJShootBeautyInspectorDelegate> _delegate; // +0x10
    MMUIButton * _backButton; // +0x18
    MMUIButton * _resetButton; // +0x20
    MJPublisherSlider * _plainSlider; // +0x28
    UICollectionView * _collectionView; // +0x30
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x38
    MJShootBeautyInspectorViewModel * _viewModel; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)backButtonDidTouchUpInside:(id)arg1;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)updateSliderOnSelectedBeautyItemChanged;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (BOOL)isItemAdjustable:(id)arg1;
- (BOOL)isInTemplateShootingMode;
- (void)setIsInTemplateShootingMode:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)resetButton;
- (void)setResetButton:(id)arg1;
- (id)plainSlider;
- (void)setPlainSlider:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

