@interface WCPayCreExtInfo : NSObject <NSCoding>
{
    unsigned int _m_needCreidRenewal; // +0x8
    unsigned int _m_needBirthDate; // +0xc
    unsigned int _m_needCreExpireDate; // +0x10
    unsigned int _m_needCreType; // +0x14
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)m_needCreidRenewal;
- (void)setM_needCreidRenewal:(unsigned int)arg1;
- (unsigned int)m_needBirthDate;
- (void)setM_needBirthDate:(unsigned int)arg1;
- (unsigned int)m_needCreExpireDate;
- (void)setM_needCreExpireDate:(unsigned int)arg1;
- (unsigned int)m_needCreType;
- (void)setM_needCreType:(unsigned int)arg1;
@end

