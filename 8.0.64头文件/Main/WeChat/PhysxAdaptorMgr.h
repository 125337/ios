@interface PhysxAdaptorMgr : NSObject
{
    id <MMPHYSXLogDelegate> _delegate; // +0x8
}
+ (id)shareInstance;
- (void)mmphysxNativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
