@interface ChatBotReportLogic : NSObject
{
    NSString * m_nextSessionId; // +0x8
}
+ (id)Instance;
- (void)storeNextSessionId:(id)arg1;
- (id)getOrGenerateSessionId;
- (void)tryReportChatBotEventWithUserName:(id)arg1 eventId:(id)arg2 params:(id)arg3 logId:(unsigned int)arg4;
- (void)tryReportChatBotEventWithUserName:(id)arg1 eventId:(id)arg2 target:(id)arg3 params:(id)arg4 logId:(unsigned int)arg5;
- (void).cxx_destruct;
@end
