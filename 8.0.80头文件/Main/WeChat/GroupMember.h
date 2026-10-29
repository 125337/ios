@interface GroupMember : NSObject
{
    NSString * m_nsMemberName; // +0x8
    unsigned int m_uiMemberStatus; // +0x10
    NSString * m_nsNickName; // +0x18
    NSString * m_nsFullPY; // +0x20
    unsigned int m_uiSex; // +0x28
    NSString * m_nsRemark; // +0x30
    NSString * m_nsRemarkShortPY; // +0x38
    NSString * m_nsRemarkFullPY; // +0x40
    NSString * m_nsCountry; // +0x48
    NSString * m_nsProvince; // +0x50
    NSString * m_nsCity; // +0x58
    NSString * m_nsSignature; // +0x60
}
- (id)init;
- (id)description;
- (id)m_nsMemberName;
- (void)setM_nsMemberName:(id)arg1;
- (unsigned int)m_uiMemberStatus;
- (void)setM_uiMemberStatus:(unsigned int)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (id)m_nsFullPY;
- (void)setM_nsFullPY:(id)arg1;
- (unsigned int)m_uiSex;
- (void)setM_uiSex:(unsigned int)arg1;
- (id)m_nsRemark;
- (void)setM_nsRemark:(id)arg1;
- (id)m_nsRemarkShortPY;
- (void)setM_nsRemarkShortPY:(id)arg1;
- (id)m_nsRemarkFullPY;
- (void)setM_nsRemarkFullPY:(id)arg1;
- (id)m_nsCountry;
- (void)setM_nsCountry:(id)arg1;
- (id)m_nsProvince;
- (void)setM_nsProvince:(id)arg1;
- (id)m_nsCity;
- (void)setM_nsCity:(id)arg1;
- (id)m_nsSignature;
- (void)setM_nsSignature:(id)arg1;
- (void).cxx_destruct;
@end
