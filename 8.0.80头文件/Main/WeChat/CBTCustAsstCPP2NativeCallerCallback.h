@interface CBTCustAsstCPP2NativeCallerCallback : NSObject
{
    CBTCustAsstCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTCustAsstCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnOpenCustAsstProfileComplete:(unsigned long long)arg1;
- (void)onOnRequestGetCustAsstListComplete:(unsigned long long)arg1 custAsstListData:(id)arg2;
- (void)onOnRequestGetGroupCustAsstMembersComplete:(unsigned long long)arg1 memberData:(id)arg2;
- (void)onOnOpenCustAsstChatComplete:(unsigned long long)arg1;
- (void)onOnRequestAddGroupCustAsstMemberComplete:(unsigned long long)arg1 errorCode:(int)arg2;
- (void)onOnClearCustAsstUnreadComplete:(unsigned long long)arg1;
@end
