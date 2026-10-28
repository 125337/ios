@interface MMLiveFilterOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMLiveBeautyLogicExt, UIGestureRecognizerDelegate, MMLiveBeautyOperationPanelExternalClosing>
{
    BOOL _isShowing; // +0x8
    id <MMLiveFilterOperationPanelDelegate> _actionDelegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    UIView * _panelView; // +0x20
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x28
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x30
    MMUIButton * _arrowButton; // +0x38
    MMUILabel * _beautyExtSettingLabel; // +0x40
    UIImageView * _beautyExtSettingImage; // +0x48
    UICollectionView * _filterItemsCollectionView; // +0x50
    MMFinderLiveBeautyNewStyleSlider * _beautyStyleSlider; // +0x58
    NSArray * _filterDataItemsList; // +0x60
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider; // +0x68
    UISwipeGestureRecognizer * _leftSwipeGesture; // +0x70
    UISwipeGestureRecognizer * _rightSwipeGesture; // +0x78
    MMUIMaskContainerView * _collectionContainerView; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 beautyLogic:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)setDisableDrag:(BOOL)arg1;
- (id)getLiveTask;
- (void)updateFilterDataItemsList;
- (void)updateBeautyStyleSliderValue;
- (void)showPanel;
- (void)didAppear;
- (void)didDisAppear;
- (void)delayCheckHideSliderProgressTip;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)setupAccessibilityFocus;
- (void)closeAction;
- (void)close:(BOOL)arg1;
- (void)closePanelDirectly;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)onBeautyStyleSliderTouchUp:(id)arg1;
- (void)onBeautyStyleSliderTouchDown:(id)arg1;
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
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onSkinSegEnableChangeTo:(BOOL)arg1;
- (void)onFilterSourceChangedTo:(unsigned long long)arg1;
- (BOOL)isInRoom;
- (id)beautyLogic;
- (void)onLeftSwipeGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (BOOL)canSwipeWithGesture:(id)arg1;
- (void)swipe:(unsigned long long)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)beautyExtSettingLabel;
- (void)setBeautyExtSettingLabel:(id)arg1;
- (id)beautyExtSettingImage;
- (void)setBeautyExtSettingImage:(id)arg1;
- (id)filterItemsCollectionView;
- (void)setFilterItemsCollectionView:(id)arg1;
- (id)beautyStyleSlider;
- (void)setBeautyStyleSlider:(id)arg1;
- (id)filterDataItemsList;
- (void)setFilterDataItemsList:(id)arg1;
- (id)beautyLogicProvider;
- (void)setBeautyLogicProvider:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)leftSwipeGesture;
- (void)setLeftSwipeGesture:(id)arg1;
- (id)rightSwipeGesture;
- (void)setRightSwipeGesture:(id)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (void).cxx_destruct;
@end
