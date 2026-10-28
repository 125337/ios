@interface WCPayCreditPayQuestionNode : NSObject
{
    BOOL m_bSelect; // +0x8
    BOOL m_bTwoLevel; // +0x9
    WCPayCreditPayQuestionStruct * m_oQuestionNode; // +0x10
    WCPayCreditPayQuestionStruct * m_oNextQuestionNode; // +0x18
}
- (BOOL)m_bSelect;
- (void)setM_bSelect:(BOOL)arg1;
- (BOOL)m_bTwoLevel;
- (void)setM_bTwoLevel:(BOOL)arg1;
- (id)m_oQuestionNode;
- (void)setM_oQuestionNode:(id)arg1;
- (id)m_oNextQuestionNode;
- (void)setM_oNextQuestionNode:(id)arg1;
- (void).cxx_destruct;
@end
