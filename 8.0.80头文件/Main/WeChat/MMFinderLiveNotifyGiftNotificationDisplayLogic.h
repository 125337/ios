@interface MMFinderLiveNotifyGiftNotificationDisplayLogic : NSObject
{
    BOOL _enableDisplay; // +0x8
    BOOL _needHidden; // +0x9
    FinderJumpInfo * _curDisplayItem; // +0x10
    id /* block */ _displayBlock; // +0x18
    MMFinderLiveNotifyGiftNotificationView * _mainView; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    NSMutableArray * _pendingQueue; // +0x30
}
- (id)initWithNotificationView:(id)arg1 taskId:(id)arg2;
- (void)appendNotifyGiftNotification:(id)arg1;
- (void)updateNotificationViewEnableDisplay:(BOOL)arg1;
- (void)updateMainViewHidden:(BOOL)arg1;
- (void)updateMainViewDisplay;
- (void)checkDisplay;
- (void)delayFadeout;
- (id)curDisplayItem;
- (void)setCurDisplayItem:(id)arg1;
- (id /* block */)displayBlock;
- (void)setDisplayBlock:(id /* block */)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)pendingQueue;
- (void)setPendingQueue:(id)arg1;
- (BOOL)enableDisplay;
- (void)setEnableDisplay:(BOOL)arg1;
- (BOOL)needHidden;
- (void)setNeedHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
