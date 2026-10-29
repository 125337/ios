@interface MMLiveMakeupOperationPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, MMLiveMakeupOperationDetailPanelDelegate, MMLiveMakeupItemCollectionCellDelegate, MMLiveBeautyLogicExt, MMLiveMakeupViewModelObserver, MMLiveBeautyOperationPanelExternalClosing>
{
    BOOL _isShowing; // +0x8
    BOOL _isShowingNotice; // +0x9
    id <MMLiveMakeupOperationPanelDelegate> _actionDelegate; // +0x10
    UIView * _panelView; // +0x18
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x20
    MMUIButton * _arrowButton; // +0x28
    MMUILabel * _beautyExtSettingLabel; // +0x30
    UIImageView * _beautyExtSettingImage; // +0x38
    UICollectionView * _makeupItemCollectionView; // +0x40
    UISwipeGestureRecognizer * _leftSwipeGesture; // +0x48
    UISwipeGestureRecognizer * _rightSwipeGesture; // +0x50
    MMLiveMakeupOperationDetailPanel * _detailPanel; // +0x58
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x60
    MMLiveMakeupViewModel * _viewModel; // +0x68
    MMUIMaskContainerView * _collectionContainerView; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutPanelViews;
- (void)showPanel;
- (void)closePanelDirectly;
- (void)didAppear;
- (void)didDisAppear;
- (void)closeAction;
- (void)close:(BOOL)arg1;
- (void)moveToDetailAdjustingState;
- (void)onExitChangeDetailMode;
- (void)onTappedresetDefaultValueButton;
- (void)onTappedChangeDetailLabel;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)onSkinSegEnableChangeTo:(BOOL)arg1;
- (void)onFilterSourceChangedTo:(unsigned long long)arg1;
- (BOOL)isInRoom;
- (void)onLeftSwipeGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (BOOL)canSwipeWithGesture:(id)arg1;
- (void)swipe:(unsigned long long)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)beautyExtSettingLabel;
- (void)setBeautyExtSettingLabel:(id)arg1;
- (id)beautyExtSettingImage;
- (void)setBeautyExtSettingImage:(id)arg1;
- (id)makeupItemCollectionView;
- (void)setMakeupItemCollectionView:(id)arg1;
- (id)leftSwipeGesture;
- (void)setLeftSwipeGesture:(id)arg1;
- (id)rightSwipeGesture;
- (void)setRightSwipeGesture:(id)arg1;
- (id)detailPanel;
- (void)setDetailPanel:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (BOOL)isShowingNotice;
- (void)setIsShowingNotice:(BOOL)arg1;
- (void).cxx_destruct;
@end

