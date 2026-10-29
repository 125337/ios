@interface MMWebJsTimerHandler : NSObject
{
    BOOL _hasStopped; // +0x8
    BOOL _addRunloopCommonMode; // +0x9
    JSContext * _jsContext; // +0x10
    NSObject<OS_dispatch_queue> * _workQueue; // +0x18
    NSThread * _subThread; // +0x20
    NSMutableDictionary * _timerObjs; // +0x28
    NSRecursiveLock * _lock; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)invalidAllTimers;
- (void)setupTimerBlock:(id)arg1;
- (void)addApi_setTimerHandler:(id)arg1;
- (void)addApi_clearTimerHandler:(id)arg1;
- (unsigned int)mainThread_addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(BOOL)arg3;
- (void)onTimer:(id)arg1;
- (void)onInovkeCallback:(id /* block */)arg1;
- (void)mainThread_clearTimer:(unsigned int)arg1;
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)subThread;
- (void)setSubThread:(id)arg1;
- (id)timerObjs;
- (void)setTimerObjs:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (BOOL)hasStopped;
- (void)setHasStopped:(BOOL)arg1;
- (BOOL)addRunloopCommonMode;
- (void)setAddRunloopCommonMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

