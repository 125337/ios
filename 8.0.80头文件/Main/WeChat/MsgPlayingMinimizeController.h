@interface MsgPlayingMinimizeController : NSObject <IMinimizeTaskDelegateInterface>
{
    id <MsgPlayingMinimizeControllerDelegate> _delegate; // +0x8
    MinimizeTaskData * _taskData; // +0x10
}
- (void)initMinimizeViewWithMsg:(id)arg1;
- (void)updateMinimizeViewWithMsg:(id)arg1;
- (void)foldMinimizeView;
- (void)removeMinimizeView;
- (BOOL)isShowingMinimizeView;
- (CGSize)minimizeViewSize;
- (void)stopAnimating;
- (id)taskData;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTaskData:(id)arg1;
- (void).cxx_destruct;
@end
