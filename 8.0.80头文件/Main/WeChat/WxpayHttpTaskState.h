@interface WxpayHttpTaskState : NSObject
{
    BOOL _completed; // +0x8
    NSLock * _lock; // +0x10
    id <WxpayHttpCall> _call; // +0x18
}
- (id)init;
- (id)lock;
- (void)setLock:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (id)call;
- (void)setCall:(id)arg1;
- (void).cxx_destruct;
@end
