@interface MMVcardItem : NSObject
{
    VcardName * _name; // +0x8
    NSString * _nickName; // +0x10
    NSString * _photoUrl; // +0x18
    NSString * _photoType; // +0x20
    NSData * _photoBuffer; // +0x28
    VcardAddress * _address; // +0x30
    VcardAddress * _homeAddress; // +0x38
    VcardAddress * _workAddress; // +0x40
    VcardAddress * _deliveryAddress; // +0x48
    NSString * _phoneNumber; // +0x50
    NSString * _mobilePhoneNumber; // +0x58
    NSString * _homePhoneNumber; // +0x60
    NSString * _workPhoneNumber; // +0x68
    NSString * _telAVPhoneNumber; // +0x70
    NSString * _birthday; // +0x78
    NSString * _email; // +0x80
    NSString * _title; // +0x88
    NSString * _role; // +0x90
    NSString * _logoType; // +0x98
    NSData * _logoBuffer; // +0xa0
    NSString * _agent; // +0xa8
    NSString * _organization; // +0xb0
    NSString * _note; // +0xb8
    NSString * _soundType; // +0xc0
    NSData * _soundBuffer; // +0xc8
    NSString * _url; // +0xd0
}
+ (BOOL)setVcardAddress:(id)arg1 byXmlNode:(XmlReaderNode_t *)arg2;
+ (BOOL)setVCardItem:(id)arg1 byXml:(id)arg2;
- (id)init;
- (void)print;
- (id)name;
- (void)setName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)photoUrl;
- (void)setPhotoUrl:(id)arg1;
- (id)photoType;
- (void)setPhotoType:(id)arg1;
- (id)photoBuffer;
- (void)setPhotoBuffer:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)homeAddress;
- (void)setHomeAddress:(id)arg1;
- (id)workAddress;
- (void)setWorkAddress:(id)arg1;
- (id)deliveryAddress;
- (void)setDeliveryAddress:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)mobilePhoneNumber;
- (void)setMobilePhoneNumber:(id)arg1;
- (id)homePhoneNumber;
- (void)setHomePhoneNumber:(id)arg1;
- (id)workPhoneNumber;
- (void)setWorkPhoneNumber:(id)arg1;
- (id)telAVPhoneNumber;
- (void)setTelAVPhoneNumber:(id)arg1;
- (id)birthday;
- (void)setBirthday:(id)arg1;
- (id)email;
- (void)setEmail:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)role;
- (void)setRole:(id)arg1;
- (id)logoType;
- (void)setLogoType:(id)arg1;
- (id)logoBuffer;
- (void)setLogoBuffer:(id)arg1;
- (id)agent;
- (void)setAgent:(id)arg1;
- (id)organization;
- (void)setOrganization:(id)arg1;
- (id)note;
- (void)setNote:(id)arg1;
- (id)soundType;
- (void)setSoundType:(id)arg1;
- (id)soundBuffer;
- (void)setSoundBuffer:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

