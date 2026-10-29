@interface WxaLiteAppWidgetLocalStoreSendErrorMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSNumber * _instanceId; // +0x10
    NSNumber * _callbackId; // +0x18
    NSString * _messageJson; // +0x20
}
+ (id)makeWithAppUuid:(id)arg1 instanceId:(id)arg2 callbackId:(id)arg3 messageJson:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)callbackId;
- (void)setCallbackId:(id)arg1;
- (id)messageJson;
- (void)setMessageJson:(id)arg1;
- (void).cxx_destruct;
@end
