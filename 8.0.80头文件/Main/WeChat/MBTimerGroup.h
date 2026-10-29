@interface MBTimerGroup : NSObject
{
    BOOL _paused; // +0x8
    NSString * _name; // +0x10
    NSMutableDictionary * _timerDict; // +0x18
    id /* block */ _invoker; // +0x20
    id /* block */ _idProvider; // +0x28
}
- (id)initWithName:(id)arg1 invoker:(id /* block */)arg2 idProvider:(id /* block */)arg3;
- (void)setPaused:(BOOL)arg1;
- (int)addTimer:(void *)arg1 timeout:(float)arg2 repeat:(BOOL)arg3;
- (void)triggerTimer:(id)arg1;
- (void)removeTimer:(int)arg1;
- (void)destroyAllTimer;
- (id)name;
- (BOOL)isPaused;
- (id)timerDict;
- (void)setTimerDict:(id)arg1;
- (id /* block */)invoker;
- (void)setInvoker:(id /* block */)arg1;
- (id /* block */)idProvider;
- (void)setIdProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
