@interface ChatBotWeAppReportData : ChatBotReportData
{
    BOOL _isResultSatisfaction; // +0x8
    unsigned int _type; // +0xc
    int _cmdRetCode; // +0x10
    int _processTextType; // +0x14
    NSString * _sessionId; // +0x18
    NSString * _cmdId; // +0x20
    NSString * _cmdTaskId; // +0x28
    NSString * _cmdMethod; // +0x30
    NSString * _processTextContent; // +0x38
    NSString * _chatbotAnswerId; // +0x40
}
+ (void)logWithSessionId:(id)arg1 type:(unsigned int)arg2 cmdId:(id)arg3 cmdTaskId:(id)arg4 cmdMethod:(id)arg5 retCode:(int)arg6;
+ (void)logWithSessionId:(id)arg1 type:(unsigned int)arg2 processTextType:(int)arg3 processTextContent:(id)arg4;
+ (void)logWithChatBotAnswerId:(id)arg1 isResultSatisfaction:(BOOL)arg2;
- (unsigned int)logId;
- (unsigned long long)timeStampMS;
- (id)getLogContent;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)cmdId;
- (void)setCmdId:(id)arg1;
- (id)cmdTaskId;
- (void)setCmdTaskId:(id)arg1;
- (id)cmdMethod;
- (void)setCmdMethod:(id)arg1;
- (int)cmdRetCode;
- (void)setCmdRetCode:(int)arg1;
- (int)processTextType;
- (void)setProcessTextType:(int)arg1;
- (id)processTextContent;
- (void)setProcessTextContent:(id)arg1;
- (BOOL)isResultSatisfaction;
- (void)setIsResultSatisfaction:(BOOL)arg1;
- (id)chatbotAnswerId;
- (void)setChatbotAnswerId:(id)arg1;
- (void).cxx_destruct;
@end
