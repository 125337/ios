@interface MMLiveCameraOperationPageSheet : MMLandscapeDragBarPageSheet <UICollectionViewDataSource>
{
    BOOL _isUsingNewStartController; // +0x8
    BOOL _disableSwitchToAudioMode; // +0x9
    BOOL _hasMultipleRedDot; // +0xa
    id <MMLiveCameraOperationPanelDelegate> _actionDelegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    unsigned long long _nextStateAfterClose; // +0x20
    NSArray * _operationItems; // +0x28
    MMLiveCameraOperationItem * _switchCameraItem; // +0x30
    MMLiveCameraOperationItem * _mirrorItem; // +0x38
    id /* block */ _switchCameraCompletion; // +0x40
    MMUIButton * _cameraSwitchButton; // +0x48
    UICollectionViewFlowLayout * _operationItemsLayout; // +0x50
    UICollectionView * _operationItemsCollectionView; // +0x58
    MMUILabel * _cameraOffLabel; // +0x60
    id /* block */ _redDotQueryBlock; // +0x68
    NSMutableArray * _screenExposeSubElements; // +0x70
}
+ (BOOL)isCamGestureEnabled:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 redDotQueryBlock:(id /* block */)arg3;
- (void)showPanel;
- (void)closePanelDirectly;
- (void)reportStarterScreenSubElement:(long long)arg1 subType:(long long)arg2;
- (void)reportStarterScreenExpose;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetDidDisappear;
- (void)onCameraSwitchButtonTapped;
- (void)onCloseButtonTapped;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)checkCurrentRedDotState:(BOOL)arg1;
- (id)getBeautyRedDotPath;
- (id)getMakeUpRedDotPath;
- (id)getFilterRedDotPath;
- (id)getDecorationRedDotPath;
- (id)getVisionEffectsRedDotPath;
- (id)getGestureRedDotPath;
- (id)getMirrorRedDotPath;
- (id)getSwitchCamRedDotPath;
- (id)getBackgroundRedDotPath;
- (void)updateOperationItemsForCameraState:(BOOL)arg1;
- (void)handleStateTransitionAction:(unsigned long long)arg1 expectedCameraState:(BOOL)arg2;
- (void)handleMirrorItemAction;
- (void)handleSwitchCameraItemAction;
- (void)handleSwitchCameraItemActionWithSource:(unsigned long long)arg1;
- (void)handleSwitchCameraItemActionForAiAssistantWithCompletion:(id /* block */)arg1;
- (void)handleSwitchCameraItemActionWithSource:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fireSwitchCameraCompletionWithSuccess:(BOOL)arg1 isFront:(BOOL)arg2 extraInfo:(id)arg3;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)delayResetSwitchCameraItemDisabled;
- (void)handleChangeAudioOnlyBackgroundItemAction;
- (void)updateMirrorItemStateAndReloadCell:(BOOL)arg1;
- (void)updateSwitchCameraItemDisabled:(BOOL)arg1;
- (id)liveTask;
- (BOOL)cameraEnabled;
- (void)initializeComponents;
- (void)updateForCameraEnabled:(BOOL)arg1;
- (void)openGesturePanelDirectly;
- (BOOL)audioOnlyModeAvailable;
- (void)closeWithNextState:(unsigned long long)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)isUsingNewStartController;
- (void)setIsUsingNewStartController:(BOOL)arg1;
- (BOOL)disableSwitchToAudioMode;
- (void)setDisableSwitchToAudioMode:(BOOL)arg1;
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
- (id /* block */)switchCameraCompletion;
- (void)setSwitchCameraCompletion:(id /* block */)arg1;
- (id)cameraSwitchButton;
- (void)setCameraSwitchButton:(id)arg1;
- (id)operationItemsLayout;
- (void)setOperationItemsLayout:(id)arg1;
- (id)operationItemsCollectionView;
- (void)setOperationItemsCollectionView:(id)arg1;
- (id)cameraOffLabel;
- (void)setCameraOffLabel:(id)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (BOOL)hasMultipleRedDot;
- (void)setHasMultipleRedDot:(BOOL)arg1;
- (id)screenExposeSubElements;
- (void)setScreenExposeSubElements:(id)arg1;
- (void).cxx_destruct;
@end
