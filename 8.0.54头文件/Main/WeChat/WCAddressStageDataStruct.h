@interface WCAddressStageDataStruct : NSObject <NSCoding>
{
    NSString * m_nsAddressStageID; // +0x8
    NSString * m_nsAddressPostCode; // +0x10
    unsigned int m_uiAddressStage; // +0x18
    NSString * m_nsAddressStageName; // +0x20
    NSMutableArray * m_arrAddressSubStageData; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)m_uiAddressStage;
- (void)setM_uiAddressStage:(unsigned int)arg1;
- (id)m_arrAddressSubStageData;
- (void)setM_arrAddressSubStageData:(id)arg1;
- (id)m_nsAddressPostCode;
- (void)setM_nsAddressPostCode:(id)arg1;
- (id)m_nsAddressStageID;
- (void)setM_nsAddressStageID:(id)arg1;
- (id)m_nsAddressStageName;
- (void)setM_nsAddressStageName:(id)arg1;
- (void).cxx_destruct;
@end

