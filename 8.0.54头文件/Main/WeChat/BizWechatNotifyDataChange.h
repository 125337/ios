@interface BizWechatNotifyDataChange : NSObject
{
    BizWechatNotifyDataChangeCallbackBridge * callback_; // +0x8
}
+ (id)shareInstance;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BizWechatNotifyDataChangeBridge *)bridge;
- (void)callOnDataChange:(unsigned int)arg1;
- (void)callOnInitDone:(BOOL)arg1;
- (void)callOnIDKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)callOnKV:(unsigned int)arg1 value:(id)arg2;
- (void)callOnFirstScreenPreResort:(unsigned long long)arg1 scene:(unsigned int)arg2 startInfo:(id)arg3;
- (void)callOnFirstScreenResortStart:(unsigned long long)arg1 scene:(unsigned int)arg2 startInfo:(id)arg3;
- (void)callOnFirstScreenResortEnd:(unsigned long long)arg1 scene:(unsigned int)arg2 endInfo:(id)arg3;
@end

