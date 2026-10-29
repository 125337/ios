@interface WAReportWeAppCardItem : WAReportBaseItem
{
    int _action; // +0x8
    int _answerBubbleIndex; // +0xc
    int _turnSeq; // +0x10
    NSString * _negScreenSessionId; // +0x18
    NSString * _answerId; // +0x20
    NSString * _queryId; // +0x28
    NSString * _traceMsgId; // +0x30
    NSString * _recallSource; // +0x38
    NSString * _miniappName; // +0x40
}
- (int)reportID;
- (id)reportString;
- (int)action;
- (void)setAction:(int)arg1;
- (id)negScreenSessionId;
- (void)setNegScreenSessionId:(id)arg1;
- (id)answerId;
- (void)setAnswerId:(id)arg1;
- (id)queryId;
- (void)setQueryId:(id)arg1;
- (int)answerBubbleIndex;
- (void)setAnswerBubbleIndex:(int)arg1;
- (int)turnSeq;
- (void)setTurnSeq:(int)arg1;
- (id)traceMsgId;
- (void)setTraceMsgId:(id)arg1;
- (id)recallSource;
- (void)setRecallSource:(id)arg1;
- (id)miniappName;
- (void)setMiniappName:(id)arg1;
- (void).cxx_destruct;
@end
