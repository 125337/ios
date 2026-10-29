@interface MMPhoneContact : NSObject
{
    NSString * m_nickname; // +0x8
    NSString * m_nicknamePinYin; // +0x10
    NSString * m_nicknamePinYinShort; // +0x18
    NSMutableDictionary * m_phoneWithLabels; // +0x20
    NSMutableDictionary * m_phoneToMd5Dic; // +0x28
}
+ (id)polyPhones;
- (id)initWithAddressBook:(id)arg1;
- (void)addAddressBook:(id)arg1;
- (void)InternalAddNewAddressBook:(id)arg1;
- (void)addFirstAddressBook:(id)arg1;
- (id)getFamilyNamePinYinShort:(id)arg1;
- (id)nickname;
- (id)nicknamePinYin;
- (id)nicknamePinYinShort;
- (id)phoneWithLabels;
- (id)phoneToMd5Dic;
- (void).cxx_destruct;
@end

