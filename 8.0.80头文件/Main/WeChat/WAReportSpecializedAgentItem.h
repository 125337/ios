@interface WAReportSpecializedAgentItem : WAReportBaseItem
{
    unsigned int _eventTimestamp; // +0x8
    unsigned long long _enterSource; // +0x10
    unsigned long long _eventType; // +0x18
    unsigned long long _msgSendType; // +0x20
    unsigned long long _msgReceivedType; // +0x28
    NSString * _blueContent; // +0x30
    NSString * _chatSessionId; // +0x38
    unsigned long long _isReenter; // +0x40
    unsigned long long _isGreeting; // +0x48
    NSString * _msgId; // +0x50
    NSString * _msgContent; // +0x58
    unsigned long long _jumpType; // +0x60
    NSString * _jumpAppid; // +0x68
    NSString * _jumpPath; // +0x70
    NSString * _turnId; // +0x78
    unsigned long long _turnRound; // +0x80
    NSString * _cardTemplateId; // +0x88
    NSString * _answerId; // +0x90
    NSString * _bubbleTypeList; // +0x98
    unsigned long long _answerBubbleIndex; // +0xa0
    NSString * _queryId; // +0xa8
    NSString * _negScreenSessionId; // +0xb0
    NSString * _traceMsgId; // +0xb8
}
+ (id)extractLinkTextFromContent:(id)arg1;
- (int)reportID;
- (id)reportString;
- (unsigned long long)enterSource;
- (void)setEnterSource:(unsigned long long)arg1;
- (unsigned int)eventTimestamp;
- (void)setEventTimestamp:(unsigned int)arg1;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (unsigned long long)msgSendType;
- (void)setMsgSendType:(unsigned long long)arg1;
- (unsigned long long)msgReceivedType;
- (void)setMsgReceivedType:(unsigned long long)arg1;
- (id)blueContent;
- (void)setBlueContent:(id)arg1;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (unsigned long long)isReenter;
- (void)setIsReenter:(unsigned long long)arg1;
- (unsigned long long)isGreeting;
- (void)setIsGreeting:(unsigned long long)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (unsigned long long)jumpType;
- (void)setJumpType:(unsigned long long)arg1;
- (id)jumpAppid;
- (void)setJumpAppid:(id)arg1;
- (id)jumpPath;
- (void)setJumpPath:(id)arg1;
- (id)turnId;
- (void)setTurnId:(id)arg1;
- (unsigned long long)turnRound;
- (void)setTurnRound:(unsigned long long)arg1;
- (id)cardTemplateId;
- (void)setCardTemplateId:(id)arg1;
- (id)answerId;
- (void)setAnswerId:(id)arg1;
- (id)bubbleTypeList;
- (void)setBubbleTypeList:(id)arg1;
- (unsigned long long)answerBubbleIndex;
- (void)setAnswerBubbleIndex:(unsigned long long)arg1;
- (id)queryId;
- (void)setQueryId:(id)arg1;
- (id)negScreenSessionId;
- (void)setNegScreenSessionId:(id)arg1;
- (id)traceMsgId;
- (void)setTraceMsgId:(id)arg1;
- (void).cxx_destruct;
@end
