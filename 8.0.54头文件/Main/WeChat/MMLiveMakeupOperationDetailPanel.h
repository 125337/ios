@interface MMLiveMakeupOperationDetailPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, MMLiveBeautyLogicExt, MMLiveMakeupViewModelObserver>
{
    BOOL _isAppearing; // +0x8
    id <MMLiveMakeupOperationDetailPanelDelegate> _actionDelegate; // +0x10
    id <MMLiveMakeupOperationDetailPanelDelegate> _containerDelegate; // +0x18
    MMLiveMakeupViewModel * _viewModel; // +0x20
    UIView * _panelView; // +0x28
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x30
    MMUIButton * _arrowButton; // +0x38
    MMUIButton * _resetDefaultButton; // +0x40
    UICollectionView * _makeupDetailItemsCollectionView; // +0x48
    MMFinderLiveBeautyNewStyleSlider * _makeupStyleSlider; // +0x50
    NSIndexPath * _currentMakeupDetailItemIndexPath; // +0x58
    unsigned long long _selectIndex; // +0x60
    MMUIMaskContainerView * _collectionContainerView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)showPanel;
- (void)exitChangeDetailModeAction;
- (void)exitChangeDetailMode:(BOOL)arg1;
- (void)updateResetButtonState;
- (void)resetDefaultValue;
- (id)currentDetailItem;
- (void)setCurrentMakeupDetailItemEffect;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)delayCheckHideSliderProgressTip;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)onTappedMutuallyExclusiveCell;
- (void)onBeautyStyleSliderTouchUp:(id)arg1;
- (void)onBeautyStyleSliderTouchDown:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateMakeupStyleSliderValue;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)resetDefaultButton;
- (void)setResetDefaultButton:(id)arg1;
- (id)makeupDetailItemsCollectionView;
- (void)setMakeupDetailItemsCollectionView:(id)arg1;
- (id)makeupStyleSlider;
- (void)setMakeupStyleSlider:(id)arg1;
- (id)currentMakeupDetailItemIndexPath;
- (void)setCurrentMakeupDetailItemIndexPath:(id)arg1;
- (unsigned long long)selectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (BOOL)isAppearing;
- (void)setIsAppearing:(BOOL)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (void).cxx_destruct;
@end

