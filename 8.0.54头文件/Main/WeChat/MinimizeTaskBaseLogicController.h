@interface MinimizeTaskBaseLogicController : NSObject <IMinimizeTaskDelegateInterface>
{
    MinimizeTaskData * _taskData; // +0x8
    UIViewController * _viewController; // +0x10
}
- (id)initWithTask:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (id)onLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

