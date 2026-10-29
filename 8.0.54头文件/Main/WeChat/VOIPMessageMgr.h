@interface VOIPMessageMgr : MMUserService <MonoServiceMsgDelegate, MonoServiceMsgLogicDelegate, VoipGetRoomInfoCgiDelegate, VoIPInvitationServiceExtension, PBMessageObserverDelegate, MMServiceProtocol, IMsgExt, VoIPPushKitExt>
{
    VoipGetRoomInfoCgi * m_getRoomInfoCgi; // +0x8
}
+ (void)reportAckWithCallResult:(int)arg1 ByVoipMsg:(id)arg2;
+ (id)genInviteMessageFromVoipMonoMsg:(id)arg1;
+ (void)handleVoipLocalBusy:(id)arg1;
+ (BOOL)handleInviteMonoMsg:(id)arg1;
+ (BOOL)startVoipViewByVoipMonoMsg:(id)arg1;
+ (BOOL)openVoipViewByVoipMonoMsg:(id)arg1 haveAnswered:(BOOL)arg2;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHandleWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)didMonoServiceRejectMsg;
- (void)onVoipGetRoomInfoCgiParaError:(id)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiConnectFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiOk:(id)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveInviteFromNotify:(id)arg1;
- (void)receiveCancelFromNotify:(id)arg1;
- (void)receiveOtherDeviceHandleSignalFromSecurityNotify:(id)arg1;
- (void)receiveAnsweredFromNotify:(id)arg1;
- (void)receiveCancelMsgFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveInviteFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)handleVoipBusy:(id)arg1 MsgWrap:(id)arg2;
- (void)handleAPNSPushSyncNotificationContentInfo:(id)arg1;
- (void)handleAPNSPushUserInfos:(id)arg1;
- (void)handlePushKitUserInfos:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)voIPInvitationServiceDidRejectWithInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_getRoomInfoCgi;
- (void)setM_getRoomInfoCgi:(id)arg1;
- (void).cxx_destruct;
@end

