@interface WAReportAgentAuthCardItem : WAReportBaseItem
{
    long long _cardType; // +0x8
    long long _action; // +0x10
    long long _elemType; // +0x18
    NSString * _extraData; // +0x20
    long long _cardFinalStatus; // +0x28
    NSString * _negScreenSessionId; // +0x30
    NSString * _answerId; // +0x38
    NSString * _queryId; // +0x40
    long long _answerBubbleIndex; // +0x48
    long long _turnSeq; // +0x50
    NSString * _traceMsgId; // +0x58
    NSString * _recallSource; // +0x60
    long long _triggerSource; // +0x68
    NSString * _scopeName; // +0x70
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (long long)elemType;
- (void)setElemType:(long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (long long)cardFinalStatus;
- (void)setCardFinalStatus:(long long)arg1;
- (id)negScreenSessionId;
- (void)setNegScreenSessionId:(id)arg1;
- (id)answerId;
- (void)setAnswerId:(id)arg1;
- (id)queryId;
- (void)setQueryId:(id)arg1;
- (long long)answerBubbleIndex;
- (void)setAnswerBubbleIndex:(long long)arg1;
- (long long)turnSeq;
- (void)setTurnSeq:(long long)arg1;
- (id)traceMsgId;
- (void)setTraceMsgId:(id)arg1;
- (id)recallSource;
- (void)setRecallSource:(id)arg1;
- (long long)triggerSource;
- (void)setTriggerSource:(long long)arg1;
- (id)scopeName;
- (void)setScopeName:(id)arg1;
- (void).cxx_destruct;
@end
