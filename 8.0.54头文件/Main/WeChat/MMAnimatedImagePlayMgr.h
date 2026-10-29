@interface MMAnimatedImagePlayMgr : MMObject
{
    NSTimer * m_timer; // +0x8
    NSMutableDictionary * m_playTimerDic; // +0x10
    NSMutableSet * m_playingTasks; // +0x18
    NSMapTable * m_viewToTaskTable; // +0x20
}
+ (void)initialize;
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
+ (id)animatedImageViewWithData:(id)arg1 config:(id)arg2;
+ (id)animatedImageViewWithDecoder:(id)arg1 config:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2 config:(id)arg3;
- (void)resetPlayTaskWithView:(id)arg1;
- (void)removePlayTaskWithView:(id)arg1;
- (void)removePlayObserverWithView:(id)arg1;
- (id)timerForPlayMode:(unsigned long long)arg1;
- (void)startUpdateTasks;
- (void)stopUpdateTasks;
- (void)RegisterSysNotifications;
- (void)UnRegisterSysNotifications;
- (void)onApplicationWillTerminate:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void).cxx_destruct;
@end

