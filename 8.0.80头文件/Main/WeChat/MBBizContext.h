@interface MBBizContext : NSObject
{
    void * bizName; // +0x8
}
- (id)bizName;
- (id)initWithBizName:(id)arg1;
- (unsigned long long)envId;
- (void)sendEventWithName:(id)arg1 data:(id)arg2;
- (void)onCallbackWithCallbackId:(unsigned long long)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)onCallbackWithCallbackId:(unsigned long long)arg1 errCode:(int)arg2 errMsg:(id)arg3 dataStr:(id)arg4;
- (id)provideViewController;
- (id)init;
- (void).cxx_destruct;
@end
