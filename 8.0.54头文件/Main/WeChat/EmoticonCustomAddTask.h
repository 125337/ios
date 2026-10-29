@interface EmoticonCustomAddTask : NSObject <EmoticonCustomAddLogicControllerDelegate, MMUIViewControllerDelegate>
{
    EmoticonCustomAddLogicController * _addLogicController; // +0x8
    id <EmoticonCustomAddTaskDelegate> _delegate; // +0x10
    UINavigationController * _topNavigationController; // +0x18
}
- (void)setAddLogicController:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (id)getViewController;
- (id)addLogicController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topNavigationController;
- (void)setTopNavigationController:(id)arg1;
- (void).cxx_destruct;
@end

