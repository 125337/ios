@interface MigrationPlatformCallback : NSObject
{
    MigrationPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(MigrationPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onDoOfflineCgiComplete:(unsigned long long)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4 respBuf:(id)arg5;
- (void)onGetAllConversationComplete:(unsigned long long)arg1 convList:(id)arg2;
- (void)onGetAllConversationForUserNameComplete:(unsigned long long)arg1 convList:(id)arg2;
- (void)onGetPcMinVersionComplete:(unsigned long long)arg1 windows:(int)arg2 mac:(int)arg3 linux:(int)arg4 ohosPc:(int)arg5;
- (void)onNetworkChangedEvent;
@end
