@interface VoIPIlinkSubCallService : MMUserService <VoIPConfSDKServiceExtension, MonoServiceMsgDelegate, VoIPInvitationServiceExtension, MMServiceProtocol>
{
    BOOL _isWaitingForAccept; // +0x8
    VoIPIlinkSubCallCache * _cache; // +0x10
    unsigned long long _endingRoomID; // +0x18
}
- (void)clear;
- (BOOL)receiveInviteMsg:(id)arg1 fromUsername:(id)arg2 withMsgWrap:(id)arg3;
- (BOOL)receiveCancelInviteMsg:(id)arg1 fromUsername:(id)arg2 withMsgWrap:(id)arg3;
- (void)receiveInviteData:(id)arg1;
- (void)reject;
- (void)cancel;
- (void)tryToAccept;
- (BOOL)acceptWithRoomID:(unsigned long long)arg1;
- (id)init;
- (void)onServiceClearData;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHandleWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4;
- (void)voIPConfSDKServiceOnReceiveMainCallEndEvent;
- (void)voIPConfSDKServiceWillInterrputVoIPByCall:(BOOL)arg1;
- (void)voIPInvitationServiceWillAcceptWithInfo:(id)arg1;
- (void)voIPInvitationServiceDidRejectWithInfo:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (BOOL)isWaitingForAccept;
- (void)setIsWaitingForAccept:(BOOL)arg1;
- (unsigned long long)endingRoomID;
- (void)setEndingRoomID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

