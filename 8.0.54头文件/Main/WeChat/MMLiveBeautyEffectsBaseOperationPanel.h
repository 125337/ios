@interface MMLiveBeautyEffectsBaseOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, MMFinderLiveDecorationResExt, WCGeneralMonitorDelegate>
{
    BOOL _isShowing; // +0x8
    id <MMLiveBeautyEffectsBaseOperationPanelDelegate> _actionDelegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    UIView * _panelView; // +0x20
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x28
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x30
    MMUIButton * _arrowButton; // +0x38
    UICollectionView * _itemsCollectionView; // +0x40
    NSArray * _dataItemsList; // +0x48
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider; // +0x50
    MMLiveEffectsBaseDataItem * _downloadingItemWaitingForApplyEffect; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (id)getLiveTask;
- (void)updateDataItemsList;
- (void)showPanel;
- (void)didAppear;
- (void)didDisAppear;
- (void)closeAction;
- (void)close:(BOOL)arg1;
- (void)closePanelDirectly;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)isInRoom;
- (id)beautyLogic;
- (void)onDecorationMaterialResourceDownloadFinish:(id)arg1;
- (void)onDecorationMaterialResourceDownloadFailed:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)getDataItemList;
- (BOOL)isEffectIdSelected:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)reportAction:(unsigned long long)arg1 item:(id)arg2;
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
- (id)itemsCollectionView;
- (void)setItemsCollectionView:(id)arg1;
- (id)dataItemsList;
- (void)setDataItemsList:(id)arg1;
- (id)beautyLogicProvider;
- (void)setBeautyLogicProvider:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)downloadingItemWaitingForApplyEffect;
- (void)setDownloadingItemWaitingForApplyEffect:(id)arg1;
- (void).cxx_destruct;
@end

