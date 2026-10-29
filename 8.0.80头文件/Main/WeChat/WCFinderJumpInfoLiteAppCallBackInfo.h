@interface WCFinderJumpInfoLiteAppCallBackInfo : NSObject
{
    int _callbackId; // +0x8
    unsigned long long _instanceId; // +0x10
    NSString * _storeAppId; // +0x18
    NSString * _appId; // +0x20
    NSString * _actionName; // +0x28
    NSObject * _storeData; // +0x30
}
- (int)callbackId;
- (void)setCallbackId:(int)arg1;
- (unsigned long long)instanceId;
- (void)setInstanceId:(unsigned long long)arg1;
- (id)storeAppId;
- (void)setStoreAppId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (id)storeData;
- (void)setStoreData:(id)arg1;
- (void).cxx_destruct;
@end
