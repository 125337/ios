@interface ChatBotHeadlessSessionDelegate : NSObject <IChatBotVoIPSessionDelegate>
{
    ChatBotHeadlessAgentMgr * _mgr; // +0x8
    NSString * _sessionID; // +0x10
}
- (void)onTalkSucc;
- (void)onCallEnd;
- (void)onShowLinkErrMsg:(int)arg1 errorCode:(int)arg2;
- (void)onRecvStreamText:(id)arg1 textSeq:(int)arg2 textOutputSource:(int)arg3 identifier:(id)arg4 traceMsgid:(id)arg5 appTraceId:(id)arg6;
- (void)onRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2 appTraceId:(id)arg3 storageInfo:(id)arg4;
- (void)onRecvVoIPAsrInfo:(id)arg1;
- (id)mgr;
- (void)setMgr:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void).cxx_destruct;
@end
