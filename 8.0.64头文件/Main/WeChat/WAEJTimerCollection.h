@interface WAEJTimerCollection : NSObject
{
    NSMutableDictionary * timers; // +0x8
    int lastId; // +0x10
    WAEJJavaScriptView * scriptView; // +0x18
    int lastUpdateId; // +0x20
    int signalWaitingId; // +0x24
    BOOL skipCurrentTaskLoop; // +0x28
}
- (id)initWithScriptView:(id)arg1;
- (void)dealloc;
- (int)scheduleCallback:(OpaqueJSValue *)arg1 isMain:(BOOL)arg2 interval:(double)arg3 repeat:(BOOL)arg4;
- (void)cancelId:(int)arg1;
- (void)update;
- (void)updateImmediate:(id)arg1;
- (void)skipCurrentTaskLoop;
@end
