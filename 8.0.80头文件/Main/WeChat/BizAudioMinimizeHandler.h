@interface BizAudioMinimizeHandler : NSObject <IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate>
{
    NSData * _snapshotData; // +0x8
    NSString * _taskBizName; // +0x10
    NSString * _taskBizKey; // +0x18
}
+ (id)restoreFromMinimizeTaskData:(id)arg1;
- (BOOL)isMyTask:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onPlayPauseBtnClicked:(id)arg1 isToPlay:(BOOL)arg2;
- (id)snapshotData;
- (void)setSnapshotData:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (void).cxx_destruct;
@end
