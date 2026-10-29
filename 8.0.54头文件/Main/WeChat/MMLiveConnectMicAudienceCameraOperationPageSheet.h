@interface MMLiveConnectMicAudienceCameraOperationPageSheet : MMPageSheetBaseView <UICollectionViewDataSource, MMLiveBeautyOperationPanelExternalClosing>
{
    id <MMLiveConnectMicAudienceCameraOperationPanelDelegate> _actionDelegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _nextStateAfterClose; // +0x18
    NSArray * _operationItems; // +0x20
    MMLiveCameraOperationItem * _switchCameraItem; // +0x28
    MMLiveCameraOperationItem * _mirrorItem; // +0x30
    UICollectionViewFlowLayout * _operationItemsLayout; // +0x38
    UICollectionView * _operationItemsCollectionView; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)showPanel;
- (void)closePanelDirectly;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)initializeComponents;
- (void)updateOperationItems;
- (void)handleStateTransitionAction:(unsigned long long)arg1;
- (void)handleMirrorItemAction;
- (void)handleSwitchCameraItemAction;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)delayResetSwitchCameraItemDisabled;
- (void)updateMirrorItemStateAndReloadCell:(BOOL)arg1;
- (void)updateSwitchCameraItemDisabled:(BOOL)arg1;
- (id)liveTask;
- (void)closeWithNextState:(unsigned long long)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)nextStateAfterClose;
- (void)setNextStateAfterClose:(unsigned long long)arg1;
- (id)operationItems;
- (void)setOperationItems:(id)arg1;
- (id)switchCameraItem;
- (void)setSwitchCameraItem:(id)arg1;
- (id)mirrorItem;
- (void)setMirrorItem:(id)arg1;
- (id)operationItemsLayout;
- (void)setOperationItemsLayout:(id)arg1;
- (id)operationItemsCollectionView;
- (void)setOperationItemsCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

