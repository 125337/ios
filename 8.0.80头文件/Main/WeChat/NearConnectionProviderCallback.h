@interface NearConnectionProviderCallback : NSObject
{
    NearConnectionProviderDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(NearConnectionProviderDispatcherBridgeObjcImpl *)arg1;
- (void)onActivateAWDLComplete:(unsigned long long)arg1;
- (void)onDeactivateAWDLComplete:(unsigned long long)arg1;
- (void)onUnregisterReceiverOnOhosComplete:(unsigned long long)arg1;
- (void)onCreateGroupComplete:(unsigned long long)arg1 errorCode:(int)arg2 networkName:(id)arg3 passphrase:(id)arg4;
- (void)onConnectToGroupComplete:(unsigned long long)arg1 errorCode:(int)arg2;
- (void)onRemoveGroupOnOhosComplete:(unsigned long long)arg1;
- (void)onCancelConnectionComplete:(unsigned long long)arg1;
- (void)onCommonAsyncFuncComplete:(unsigned long long)arg1 paramsPb:(id)arg2;
@end
