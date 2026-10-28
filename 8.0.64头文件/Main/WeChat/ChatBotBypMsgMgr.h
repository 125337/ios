@interface ChatBotBypMsgMgr : MMUserService <MMServiceProtocol>
{
    NSMutableSet * _msgRecvedSet; // +0x8
}
- (void)onServiceInit;
- (void)chatBotBypNewCmdGet:(id)arg1 cmdType:(int)arg2 cmd:(id)arg3 svrId:(unsigned long long)arg4;
- (id)msgRecvedSet;
- (void)setMsgRecvedSet:(id)arg1;
- (void).cxx_destruct;
@end
