@interface MMLockstepNativeMgr : NSObject
{
    NSMutableDictionary * _tasks; // +0x8
    NSThread * mgr_thread; // +0x10
    id <MMLockstepHandleLogDelegate> _delegate; // +0x18
}
+ (id)shareInstance;
- (void)lockstepNativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

