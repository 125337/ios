@interface WCAddressBaseAddress : NSObject <NSCoding>
{
    NSString * m_nsNationalCode; // +0x8
    unsigned int m_uiAddressID; // +0x10
    NSString * m_nsUserName; // +0x18
    NSString * m_nsTelNumber; // +0x20
    NSString * m_nsAddressStageID; // +0x28
    NSString * m_nsAddressPostCode; // +0x30
    NSString * m_nsAddressProviceFirstStageName; // +0x38
    NSString * m_nsAddressCitySecondStageName; // +0x40
    NSString * m_nsAddressCountiesThirdStageName; // +0x48
    NSString * m_nsAddressStreetFourthStageName; // +0x50
    NSString * m_nsAddressDetailInfo; // +0x58
    NSString * m_nsEncryptData; // +0x60
    NSString * m_nsEncryptType; // +0x68
}
- (id)initWithID:(unsigned int)arg1;
- (id)copyAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_nsNationalCode;
- (void)setM_nsNationalCode:(id)arg1;
- (id)m_nsAddressCitySecondStageName;
- (void)setM_nsAddressCitySecondStageName:(id)arg1;
- (id)m_nsAddressCountiesThirdStageName;
- (void)setM_nsAddressCountiesThirdStageName:(id)arg1;
- (id)m_nsAddressStreetFourthStageName;
- (void)setM_nsAddressStreetFourthStageName:(id)arg1;
- (id)m_nsAddressDetailInfo;
- (void)setM_nsAddressDetailInfo:(id)arg1;
- (id)m_nsAddressPostCode;
- (void)setM_nsAddressPostCode:(id)arg1;
- (id)m_nsAddressProviceFirstStageName;
- (void)setM_nsAddressProviceFirstStageName:(id)arg1;
- (id)m_nsAddressStageID;
- (void)setM_nsAddressStageID:(id)arg1;
- (id)m_nsTelNumber;
- (void)setM_nsTelNumber:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (unsigned int)m_uiAddressID;
- (id)m_nsEncryptData;
- (void)setM_nsEncryptData:(id)arg1;
- (id)m_nsEncryptType;
- (void)setM_nsEncryptType:(id)arg1;
- (void).cxx_destruct;
@end

