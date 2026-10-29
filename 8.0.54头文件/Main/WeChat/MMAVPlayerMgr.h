@interface MMAVPlayerMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_arrItem; // +0x8
    NSMutableArray * m_clearQueue; // +0x10
    int m_aliveAvPlayer; // +0x18
    BOOL m_isActive; // +0x1c
    BOOL m_pauseMusic; // +0x1d
    BOOL m_slowPlaying; // +0x1e
    int m_queueSemaphore; // +0x20
    unsigned int m_holdingFlag; // +0x24
    NSObject<OS_dispatch_queue> * m_avmgrQueue; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)registItem:(id)arg1;
- (void)unregistItem:(id)arg1;
- (void)performDeactive;
- (BOOL)checkRestartMusic;
- (void)startHoldingUpdate:(int)arg1;
- (void)stopHoldingUpdate:(int)arg1;
- (void)killItem:(id)arg1;
- (void)setItem:(id)arg1 inToScreen:(BOOL)arg2;
- (void)loadItem:(id)arg1 forVideoPath:(id)arg2;
- (void)pauseItem:(id)arg1;
- (void)pauseItem:(id)arg1 isForceToPause:(BOOL)arg2;
- (void)fullLoadItem:(id)arg1;
- (void)fullPlayItem:(id)arg1;
- (void)fullPlayItem:(id)arg1 muted:(BOOL)arg2 audioCategory:(unsigned long long)arg3;
- (void)silentPlayItem:(id)arg1;
- (void)syncSilentPlayItem:(id)arg1;
- (void)clearItem:(id)arg1;
- (void)addToClearQueue:(id)arg1;
- (void)internalClearItemInQueue;
- (void)removeFromClearQueue:(id)arg1;
- (void)clearItemImmediatly:(id)arg1;
- (BOOL)stackAllItem;
- (void)resumeAllItem;
- (void)checkItemState;
- (void)internalCheckItemState;
- (void)internalPerformClear:(id)arg1;
- (void)internalPerformSilentPlay:(id)arg1;
- (void)internalPerformFullPlay:(id)arg1;
- (void)internalPerformFullPlay:(id)arg1 muted:(BOOL)arg2 audioCategory:(unsigned long long)arg3;
- (void)notifyScrollViewStable;
- (void).cxx_destruct;
@end

