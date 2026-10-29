@interface WxaLiteAppWidgetLocalStoreDispatchMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSString * _appId; // +0x10
    NSNumber * _instanceId; // +0x18
    NSString * _actionName; // +0x20
    NSString * _dataJson; // +0x28
    NSNumber * _callbackId; // +0x30
}
+ (id)makeWithAppUuid:(id)arg1 appId:(id)arg2 instanceId:(id)arg3 actionName:(id)arg4 dataJson:(id)arg5 callbackId:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (id)dataJson;
- (void)setDataJson:(id)arg1;
- (id)callbackId;
- (void)setCallbackId:(id)arg1;
- (void).cxx_destruct;
@end
