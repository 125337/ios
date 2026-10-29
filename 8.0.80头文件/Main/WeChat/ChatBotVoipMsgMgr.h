@interface ChatBotVoipMsgMgr : MMUserService <IChatBotBypMsgExt, MMServiceProtocol, IMsgExt>
{
    NSString * _cur_username; // +0x8
    id /* block */ _delaySendMsgTask; // +0x10
}
- (void)onServiceInit;
- (void)notifyChatBotVoipRecvMessage:(id)arg1;
- (void)notifyChatBotVoipMinimize;
- (void)notifyChatBotVoipNotifyToStopWeAppProcess:(BOOL)arg1;
- (void)sendMsgToChatBot:(id)arg1 scene:(long long)arg2;
- (void)resetDelaySendMsgTask;
- (id)checkDelaySendMsgTask;
- (void)onChatBotBydProcessDataGet:(id)arg1 username:(id)arg2;
- (id)cur_username;
- (void)setCur_username:(id)arg1;
- (id /* block */)delaySendMsgTask;
- (void)setDelaySendMsgTask:(id /* block */)arg1;
- (void).cxx_destruct;
@end
