@interface WCFinderUsedTaskMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>
{
    WCFinderFeedContentVM * _contentVM; // +0x8
}
- (void)setUsedTaskData:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (id)shareListViewControllerWithDataItem:(id)arg1;
- (BOOL)videoPlayCompleted:(double)arg1;
- (void)addOrUpdateUsedTaskData:(double)arg1;
- (void)updateSnapShot:(id)arg1;
- (id)taskDataWithType:(unsigned long long)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

