@interface VoipCXMgr : MMUserService <MMKernelExt, MMServiceProtocol, CXProviderDelegate>
{
    BOOL m_bHaveNotActionedEndCallRequest; // +0x8
    BOOL m_bHaveAnsweredCall; // +0x9
    BOOL m_bHaveAProcessingCall; // +0xa
    BOOL m_bOutgoingCallHaveBeenAccepted; // +0xb
    BOOL _noActionAfterEnteringForeground; // +0xc
    BOOL _isilink; // +0xd
    int m_callType; // +0x10
    CXProvider * provider; // +0x18
    MonoServiceMsg * m_monoMsg; // +0x20
    NSUUID * m_uuid; // +0x28
    NSString * m_user; // +0x30
    NSMutableDictionary * m_callFromDic; // +0x38
    NSMutableDictionary * m_callToDic; // +0x40
    CXCallController * _cxController; // +0x48
    NSDate * _dateOfIncomingInvitationFromPushKit; // +0x50
    unsigned long long _roomID; // +0x58
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (BOOL)haveAProcessingCall;
- (BOOL)haveAnsweredCall;
- (unsigned long long)getRoomID;
- (void)requestAcceptCallTransactionWithRoom:(unsigned long long)arg1;
- (void)requestEndCallTrans;
- (void)prepareForIncomingInvitationFromPushKit;
- (void)reportIncomingCallFromUser:(id)arg1 ofType:(int)arg2 withMsg:(id)arg3 isPushKit:(BOOL)arg4 displayName:(id)arg5 completion:(id /* block */)arg6;
- (void)reportCallEndedAtDate:(id)arg1 reason:(long long)arg2 roomID:(unsigned long long)arg3;
- (void)providerDidReset:(id)arg1;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetGroupCallAction:(id)arg2;
- (void)provider:(id)arg1 performPlayDTMFCallAction:(id)arg2;
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
- (void)onAppBecomeActive;
- (void)onInitOK;
- (void)logCallKitErrorWithType:(unsigned long long)arg1 andErrorMsg:(id)arg2;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)m_monoMsg;
- (void)setM_monoMsg:(id)arg1;
- (id)m_uuid;
- (void)setM_uuid:(id)arg1;
- (id)m_user;
- (void)setM_user:(id)arg1;
- (id)m_callFromDic;
- (void)setM_callFromDic:(id)arg1;
- (id)m_callToDic;
- (void)setM_callToDic:(id)arg1;
- (int)m_callType;
- (void)setM_callType:(int)arg1;
- (id)cxController;
- (void)setCxController:(id)arg1;
- (id)dateOfIncomingInvitationFromPushKit;
- (void)setDateOfIncomingInvitationFromPushKit:(id)arg1;
- (BOOL)noActionAfterEnteringForeground;
- (void)setNoActionAfterEnteringForeground:(BOOL)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (BOOL)isilink;
- (void)setIsilink:(BOOL)arg1;
- (void).cxx_destruct;
@end
