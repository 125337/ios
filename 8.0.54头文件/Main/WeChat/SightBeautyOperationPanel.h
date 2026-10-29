@interface SightBeautyOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    id <SightBeautyOperationPanelDelegate> _actionDelegate; // +0x8
    UIView * _panelView; // +0x10
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x18
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x20
    MMUIButton * _arrowButton; // +0x28
    UICollectionView * _beautyItemsCollectionView; // +0x30
    MMLiveBeautyStyleSlider * _beautyStyleSlider; // +0x38
    NSMutableArray * _beautyDataItemsList; // +0x40
    unsigned long long _currentBeautyItemIndex; // +0x48
    MMUIButton * _checkButton; // +0x50
}
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)initBeautyDataItemsList;
- (void)updateBeautyStyleSliderValue;
- (void)showPanel;
- (void)showPanelWithCompletion:(id /* block */)arg1;
- (void)switchBeautyEffect:(id)arg1;
- (void)closeAction;
- (void)close:(BOOL)arg1;
- (void)saveAllEffectBeautyValues;
- (void)closePanelDirectly;
- (id)sightBeautyEffectInfo;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)beautyItemsCollectionView;
- (void)setBeautyItemsCollectionView:(id)arg1;
- (id)beautyStyleSlider;
- (void)setBeautyStyleSlider:(id)arg1;
- (id)beautyDataItemsList;
- (void)setBeautyDataItemsList:(id)arg1;
- (unsigned long long)currentBeautyItemIndex;
- (void)setCurrentBeautyItemIndex:(unsigned long long)arg1;
- (id)checkButton;
- (void)setCheckButton:(id)arg1;
- (void).cxx_destruct;
@end

