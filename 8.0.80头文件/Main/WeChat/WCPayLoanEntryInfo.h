@interface WCPayLoanEntryInfo : NSObject <NSCoding>
{
    BOOL _m_isShowEntry; // +0x8
    unsigned int _m_index; // +0xc
    NSString * _m_loanJumpUrl; // +0x10
    NSString * _m_title; // +0x18
    NSString * _m_tips; // +0x20
    NSNumber * _m_availableOtb; // +0x28
    NSNumber * _m_isOverdue; // +0x30
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)m_isShowEntry;
- (void)setM_isShowEntry:(BOOL)arg1;
- (unsigned int)m_index;
- (void)setM_index:(unsigned int)arg1;
- (id)m_loanJumpUrl;
- (void)setM_loanJumpUrl:(id)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_tips;
- (void)setM_tips:(id)arg1;
- (id)m_availableOtb;
- (void)setM_availableOtb:(id)arg1;
- (id)m_isOverdue;
- (void)setM_isOverdue:(id)arg1;
- (void).cxx_destruct;
@end
