@interface CBTCustAsstAffImpl : NSObject <PBMessageObserverDelegate, IBypChatRoomMgrExt, CBTCustAsstCPP2NativeCallerBase>
{
    CBTCustAsstCPP2NativeCallerCallback * _callback; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)setCallback:(id)arg1;
- (void)onOpenCustAsstProfileAsync:(unsigned long long)arg1 username:(id)arg2 roomName:(id)arg3 scene:(int)arg4;
- (void)onOpenCustAsstChatAsync:(unsigned long long)arg1 username:(id)arg2;
- (void)onClearCustAsstUnreadAsync:(unsigned long long)arg1 username:(id)arg2;
- (void)onRequestGetCustAsstListAsync:(unsigned long long)arg1;
- (void)onRequestGetGroupCustAsstMembersAsync:(unsigned long long)arg1 roomName:(id)arg2;
- (void)onRequestAddGroupCustAsstMemberAsync:(unsigned long long)arg1 roomName:(id)arg2 username:(id)arg3;
- (void)onRequestDelGroupCustAsstMemberWithRoomName:(id)arg1 username:(id)arg2 completion:(id /* block */)arg3;
- (void)fillMissingNicknamesForMemberData:(id)arg1;
- (id)convertToGroupCustAsstMemberData:(id)arg1 roomName:(id)arg2;
- (void)updateLocalCacheAndNotifyDartForRoom:(id)arg1 memberInfo:(id)arg2;
- (void)notifyDartMembersChangedForRoom:(id)arg1;
- (void)onBypChatRoomMembersUpdated:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)callback;
- (void).cxx_destruct;
@end
