@interface WCPayNoticeInfo : NSObject <NSCoding>
{
    unsigned int m_uiNoticeID; // +0x8
    NSString * m_nsTitle; // +0x10
    NSString * m_nsHeadTips; // +0x18
    NSArray * m_arrContent; // +0x20
    unsigned long long m_uiAmountCount; // +0x28
    NSString * m_nsFootTip; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)m_nsFootTip;
- (void)setM_nsFootTip:(id)arg1;
- (id)m_arrContent;
- (void)setM_arrContent:(id)arg1;
- (id)m_nsHeadTips;
- (void)setM_nsHeadTips:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (unsigned int)m_uiNoticeID;
- (void)setM_uiNoticeID:(unsigned int)arg1;
- (unsigned long long)m_uiAmountCount;
- (void)setM_uiAmountCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
