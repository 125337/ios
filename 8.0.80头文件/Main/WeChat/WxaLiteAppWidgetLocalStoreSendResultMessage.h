@interface WxaLiteAppWidgetLocalStoreSendResultMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSNumber * _instanceId; // +0x10
    NSNumber * _callbackId; // +0x18
    NSString * _resultJson; // +0x20
}
+ (id)makeWithAppUuid:(id)arg1 instanceId:(id)arg2 callbackId:(id)arg3 resultJson:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)callbackId;
- (void)setCallbackId:(id)arg1;
- (id)resultJson;
- (void)setResultJson:(id)arg1;
- (void).cxx_destruct;
@end
