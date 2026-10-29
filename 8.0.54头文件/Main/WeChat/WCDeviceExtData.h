@interface WCDeviceExtData : NSObject
{
    unsigned int m_deviceTypeMainDevice; // +0x8
    unsigned int m_isEnterMyDevice; // +0xc
    int _m_deviceSourceType; // +0x10
    NSString * m_alias; // +0x18
    NSString * m_iconUrl; // +0x20
    NSString * m_jumpUrl; // +0x28
    NSString * m_deviceTitle; // +0x30
    NSString * m_deviceDesc; // +0x38
    NSString * m_category; // +0x40
    long long m_bleSimpleProtol; // +0x48
    NSString * m_ability; // +0x50
    NSString * m_serialNumber; // +0x58
    NSString * _m_abilityExtInfo; // +0x60
    NSString * _m_subDeviceIDList; // +0x68
}
- (id)m_alias;
- (void)setM_alias:(id)arg1;
- (id)m_iconUrl;
- (void)setM_iconUrl:(id)arg1;
- (id)m_jumpUrl;
- (void)setM_jumpUrl:(id)arg1;
- (id)m_deviceTitle;
- (void)setM_deviceTitle:(id)arg1;
- (id)m_deviceDesc;
- (void)setM_deviceDesc:(id)arg1;
- (id)m_category;
- (void)setM_category:(id)arg1;
- (unsigned int)m_deviceTypeMainDevice;
- (void)setM_deviceTypeMainDevice:(unsigned int)arg1;
- (unsigned int)m_isEnterMyDevice;
- (void)setM_isEnterMyDevice:(unsigned int)arg1;
- (long long)m_bleSimpleProtol;
- (void)setM_bleSimpleProtol:(long long)arg1;
- (id)m_ability;
- (void)setM_ability:(id)arg1;
- (id)m_serialNumber;
- (void)setM_serialNumber:(id)arg1;
- (id)m_abilityExtInfo;
- (void)setM_abilityExtInfo:(id)arg1;
- (id)m_subDeviceIDList;
- (void)setM_subDeviceIDList:(id)arg1;
- (int)m_deviceSourceType;
- (void)setM_deviceSourceType:(int)arg1;
- (void).cxx_destruct;
@end

