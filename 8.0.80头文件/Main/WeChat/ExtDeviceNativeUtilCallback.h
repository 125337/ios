@interface ExtDeviceNativeUtilCallback : NSObject
{
    ExtDeviceNativeUtilDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ExtDeviceNativeUtilDispatcherBridgeObjcImpl *)arg1;
- (void)onGetChatPackageComplete:(unsigned long long)arg1 isLastPkg:(BOOL)arg2 offset:(unsigned long long)arg3 chatPackage:(id)arg4;
- (void)onGetAllConversationListComplete:(unsigned long long)arg1 conversationList:(id)arg2;
- (void)onGetAllConversationsListExceptWeClawComplete:(unsigned long long)arg1 conversationList:(id)arg2;
- (void)onSendSyncStatusNotifyComplete:(unsigned long long)arg1 errCode:(int)arg2 errMsg:(id)arg3;
@end
