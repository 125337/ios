@interface WCPayCreTypeRuleInfo : NSObject <NSCoding>
{
    unsigned int _m_supportCreType; // +0x8
    WCPayCreExtInfo * _m_creNeedInfo; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)m_supportCreType;
- (void)setM_supportCreType:(unsigned int)arg1;
- (id)m_creNeedInfo;
- (void)setM_creNeedInfo:(id)arg1;
- (void).cxx_destruct;
@end
