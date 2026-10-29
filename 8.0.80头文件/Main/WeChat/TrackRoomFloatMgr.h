@interface TrackRoomFloatMgr : MinimizeTaskBaseLogicController <WCActionSheetDelegate, IMinimizeTaskDelegateInterface>
{
    unsigned int _scene; // +0x8
    CBaseContact * _contact; // +0x10
    POIInfo * _poiInfo; // +0x18
}
- (id)initWithChatname:(id)arg1 poiInfo:(id)arg2 scene:(unsigned int)arg3;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (BOOL)shouldInterceptRemoveByCloseButton:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)updateSnapshotIfNeed:(id)arg1 preferredSize:(CGSize)arg2;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRemoveRecentUsedTask:(id)arg1;
- (void)onRecentUsedTaskItemExposed:(id)arg1;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onOutContentTask:(id)arg1 shiftIntoListByAnotherTaskData:(id)arg2;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(BOOL)arg2;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (void)onLeaveTaskDoneAndWillEnterAnother:(id)arg1;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
