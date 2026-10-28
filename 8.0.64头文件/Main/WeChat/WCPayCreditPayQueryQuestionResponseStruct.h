@interface WCPayCreditPayQueryQuestionResponseStruct : NSObject
{
    unsigned int m_uiQuestionNum; // +0x8
    NSString * m_nsSessionKey; // +0x10
    NSArray * m_arrQuestion; // +0x18
}
- (unsigned int)m_uiQuestionNum;
- (void)setM_uiQuestionNum:(unsigned int)arg1;
- (id)m_nsSessionKey;
- (void)setM_nsSessionKey:(id)arg1;
- (id)m_arrQuestion;
- (void)setM_arrQuestion:(id)arg1;
- (void).cxx_destruct;
@end
