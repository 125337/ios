@interface WAContactMainThreadGetter : NSObject <WAContactMgrExtension>
{
    id /* block */ _handler; // +0x8
    MMTimer * _timer; // +0x10
    NSString * _updateKey; // +0x18
    unsigned long long _getType; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)getWeAppContact:(id)arg1 getType:(unsigned long long)arg2 version:(unsigned long long)arg3 requestSource:(id)arg4 handler:(id /* block */)arg5 timeout:(unsigned int)arg6;
- (void)onUpdateContactTimeout:(id)arg1;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void).cxx_destruct;
@end

