@interface PayLiteAppNotify : NSObject <WXPLiteAppModuleEventCallback>
{
    NSMutableDictionary * _payNotifyMap; // +0x8
    long long _callbackId; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)notify:(id)arg1;
- (void)onEventResponse:(id)arg1 event:(id)arg2 data:(id)arg3 callbackId:(long long)arg4;
- (id)payNotifyMap;
- (void)setPayNotifyMap:(id)arg1;
- (long long)callbackId;
- (void)setCallbackId:(long long)arg1;
- (void).cxx_destruct;
@end
