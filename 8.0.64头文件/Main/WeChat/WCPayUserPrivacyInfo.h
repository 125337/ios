@interface WCPayUserPrivacyInfo : NSObject <PBCoding>
{
    unsigned int _m_needAgreeDuty; // +0x8
}
+ (void)PBArrayAdd_m_needAgreeDuty;
+ (void)initialize;
+ (id)LoadFromFile;
- (id)getPBPropertyTable;
- (void)saveToFile;
- (id)description;
- (unsigned int)m_needAgreeDuty;
- (void)setM_needAgreeDuty:(unsigned int)arg1;
@end
