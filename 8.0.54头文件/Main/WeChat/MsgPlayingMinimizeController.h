@interface MsgPlayingMinimizeController : NSObject <IMinimizeTaskDelegateInterface>
{
    id <MsgPlayingMinimizeControllerDelegate> _delegate; // +0x8
    MsgPlayingMinimizeView * _minimizeView; // +0x10
    MinimizeTaskData * _taskData; // +0x18
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)minimizeView;
- (void)setMinimizeView:(id)arg1;
- (void)setTaskData:(id)arg1;
- (void).cxx_destruct;
@end

