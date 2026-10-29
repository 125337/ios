@interface EmoticonCustomAddMgr : MMUserService <EmoticonCustomAddTaskDelegate, MMServiceProtocol>
{
    NSMutableSet * _addEmoticonTasks; // +0x8
}
- (id)init;
- (void)showEmoticonCameraWithLensId:(id)arg1 inViewController:(id)arg2;
- (void)onAddEmoticonTaskFinish:(id)arg1;
- (id)addEmoticonTasks;
- (void)setAddEmoticonTasks:(id)arg1;
- (void).cxx_destruct;
@end
