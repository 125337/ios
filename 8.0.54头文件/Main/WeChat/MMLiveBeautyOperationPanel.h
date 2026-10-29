@interface MMLiveBeautyOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, MMLiveBeautyItemGroupTabViewDelegate>
{
    BOOL _isAppearing; // +0x8
    id <MMLiveBeautyOperationPanelDelegate> _actionDelegate; // +0x10
    id <MMLiveBeautyOperationPanelDelegate> _containerDelegate; // +0x18
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    MMLiveBeautySuite * _suite; // +0x30
    UIView * _panelView; // +0x38
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x40
    MMUIButton * _arrowButton; // +0x48
    MMUIButton * _resetDefaultButton; // +0x50
    UICollectionView * _beautyItemsCollectionView; // +0x58
    MMFinderLiveBeautyNewStyleSlider * _beautyStyleSlider; // +0x60
    MMLiveBeautyItem * _currentBeautyItem; // +0x68
    UIScrollView * _tabScrollView; // +0x70
    NSArray * _tabViews; // +0x78
    UIView * _tabIndicatorView; // +0x80
    unsigned long long _currentTabIndex; // +0x88
    MMUIMaskContainerView * _collectionContainerView; // +0x90
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (id)beautyLogic;
- (void)swipe:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)layoutItemGroupTabViews;
- (void)reloadTabPageView;
- (void)updateResetButtonState;
- (void)updateBeautyDataItemsList;
- (void)updateBeautyStyleSliderValue;
- (void)showPanelWithAnimation;
- (void)hide;
- (void)exitChangeDetailMode:(BOOL)arg1;
- (void)didAppear;
- (void)didDisAppear;
- (void)delayCheckHideSliderProgressTip;
- (void)cancelDelayCheckHideSliderProgressTip;
- (void)checkHideSliderProgressTipIfNeeded;
- (void)resetDefaultValue;
- (void)exitChangeDetailModeAction;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)onTappedMutuallyExclusiveCell;
- (void)onBeautyStyleSliderTouchUp:(id)arg1;
- (void)onBeautyStyleSliderTouchDown:(id)arg1;
- (void)setCurrentBeautyItemIndexItemEffect;
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
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adjustTabPageViewSelectIndex;
- (void)updateItemGroupSelectedTab:(id)arg1;
- (id)getLiveTask;
- (void)onBeautyItemGroupTabViewTapped:(id)arg1;
- (void)reportCustomEvent:(unsigned long long)arg1 viewId:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (id)beautyLogicProvider;
- (void)setBeautyLogicProvider:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)suite;
- (void)setSuite:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)resetDefaultButton;
- (void)setResetDefaultButton:(id)arg1;
- (id)beautyItemsCollectionView;
- (void)setBeautyItemsCollectionView:(id)arg1;
- (id)beautyStyleSlider;
- (void)setBeautyStyleSlider:(id)arg1;
- (id)currentBeautyItem;
- (void)setCurrentBeautyItem:(id)arg1;
- (id)tabScrollView;
- (void)setTabScrollView:(id)arg1;
- (id)tabViews;
- (void)setTabViews:(id)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (unsigned long long)currentTabIndex;
- (void)setCurrentTabIndex:(unsigned long long)arg1;
- (BOOL)isAppearing;
- (void)setIsAppearing:(BOOL)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (void).cxx_destruct;
@end

