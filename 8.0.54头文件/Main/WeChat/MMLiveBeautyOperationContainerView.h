@interface MMLiveBeautyOperationContainerView : UIView <MMLiveBeautySuiteCollectionViewCellDelegate, MMLiveHalfScreenTitleBarViewDelegate, MMLiveBeautyOperationPanelDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegate, MMLiveBeautyOperationPanelExternalClosing>
{
    BOOL isOpening; // +0x8
    BOOL _thumbnailState; // +0x9
    BOOL _hasChangedDetail; // +0xa
    BOOL _isCloseDirectly; // +0xb
    id <MMLiveBeautyOperationContainerViewDelegate> _actionDelegate; // +0x10
    UIView * _panelView; // +0x18
    UIView * _suitPanelView; // +0x20
    MMUIButton * _suitArrowButton; // +0x28
    MMUILabel * _beautyExtSettingLabel; // +0x30
    UIImageView * _beautyExtSettingImage; // +0x38
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x40
    MMLiveTaskId * _taskId; // +0x48
    UICollectionView * _suitCollectionView; // +0x50
    NSArray * _operationPanelList; // +0x58
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x60
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider; // +0x68
    UIButton * _button; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 beautyLogic:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutOperationPanels;
- (void)resetViewsStateOnOpen;
- (void)moveToDetailAdjustingState;
- (void)onLeftSwipeGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (BOOL)canSwipeWithGesture:(id)arg1;
- (id)currentPanel;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)closeAction;
- (void)closeDirectly;
- (void)closePanelDirectly;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onDetailedBeautySuiteSettingsRequestedByCell:(id)arg1;
- (void)onSliderValueChange;
- (void)onTappedresetDefaultValueButton;
- (void)onExitChangeDetailMode;
- (void)closeContainerView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isInRoom;
- (id)liveTask;
- (id)beautyLogic;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)thumbnailState;
- (void)setThumbnailState:(BOOL)arg1;
- (BOOL)hasChangedDetail;
- (void)setHasChangedDetail:(BOOL)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)suitPanelView;
- (void)setSuitPanelView:(id)arg1;
- (id)suitArrowButton;
- (void)setSuitArrowButton:(id)arg1;
- (id)beautyExtSettingLabel;
- (void)setBeautyExtSettingLabel:(id)arg1;
- (id)beautyExtSettingImage;
- (void)setBeautyExtSettingImage:(id)arg1;
- (id)panelBackgroundGradientLayer;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isCloseDirectly;
- (void)setIsCloseDirectly:(BOOL)arg1;
- (id)suitCollectionView;
- (void)setSuitCollectionView:(id)arg1;
- (id)operationPanelList;
- (void)setOperationPanelList:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)beautyLogicProvider;
- (void)setBeautyLogicProvider:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

