@interface WCPayCreditPayQuestionStruct : NSObject
{
    unsigned int m_uiSelected; // +0x8
    NSString * m_nsParentID; // +0x10
    NSString * m_nsQuestionID; // +0x18
    NSString * m_nsQuestion; // +0x20
    NSString * m_nsAnswer; // +0x28
    NSString * m_nsTips; // +0x30
    unsigned int m_uiMaxLength; // +0x38
    BOOL m_bUsed; // +0x3c
    BOOL m_bSelect; // +0x3d
    BOOL m_bTwoLevel; // +0x3e
}
- (BOOL)m_bSelect;
- (void)setM_bSelect:(BOOL)arg1;
- (BOOL)m_bTwoLevel;
- (void)setM_bTwoLevel:(BOOL)arg1;
- (unsigned int)m_uiSelected;
- (void)setM_uiSelected:(unsigned int)arg1;
- (id)m_nsParentID;
- (void)setM_nsParentID:(id)arg1;
- (id)m_nsQuestionID;
- (void)setM_nsQuestionID:(id)arg1;
- (id)m_nsQuestion;
- (void)setM_nsQuestion:(id)arg1;
- (id)m_nsAnswer;
- (void)setM_nsAnswer:(id)arg1;
- (id)m_nsTips;
- (void)setM_nsTips:(id)arg1;
- (unsigned int)m_uiMaxLength;
- (void)setM_uiMaxLength:(unsigned int)arg1;
- (BOOL)m_bUsed;
- (void)setM_bUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end
