@interface EnterpriseVoiceMsgMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableDictionary * _dicMsgSource; // +0x8
    BOOL _isContinueWrite; // +0x10
    id <EnterpriseVoiceMsgMgrDelegate> delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)wrtieFileOfVoiceMsg:(id)arg1;
- (BOOL)downloadVoiceData:(id)arg1;
- (BOOL)CreateDownloadVoiceEvent:(id)arg1 withMsg:(id)arg2;
- (BOOL)resendVoiceMsg:(id)arg1;
- (BOOL)sendVoiceMsgByUserData:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)genKeyWithChatUsrName:(id)arg1 svrID:(unsigned long long)arg2;
- (void)pushMsgSource:(id)arg1;
- (id)popMsgSource:(id)arg1;
- (BOOL)uploadVoice:(id)arg1;
- (void)handleSendVoiceMsgSuc:(id)arg1;
- (void)handleSendVoiceMsgFail:(id)arg1;
- (BOOL)WriteAudioFile:(id)arg1 Offset:(unsigned int)arg2 Data:(id)arg3;
- (void)handleDownloadVoiceMsgSuc:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
