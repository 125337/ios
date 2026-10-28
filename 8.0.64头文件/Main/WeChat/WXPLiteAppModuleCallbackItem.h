@interface WXPLiteAppModuleCallbackItem : NSObject
{
    long long _callbackId; // +0x8
    id <WXPLiteAppModuleEventCallback> _callback; // +0x10
}
- (id)initWithId:(long long)arg1 callback:(id)arg2;
- (long long)callbackId;
- (void)setCallbackId:(long long)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
