@interface CMailContact : NSObject <NSCoding>
{
    unsigned int freq; // +0x8
    unsigned int sort; // +0xc
    NSString * name; // +0x10
    NSString * addr; // +0x18
    unsigned long long uin; // +0x20
}
+ (id)contactFromXMContact:(id)arg1;
+ (id)contactsFromXMContacts:(id)arg1;
+ (id)xmContactDatasFromContacts:(id)arg1;
- (id)init;
- (id)xmContactData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (unsigned int)freq;
- (void)setFreq:(unsigned int)arg1;
- (unsigned int)sort;
- (void)setSort:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)addr;
- (void)setAddr:(id)arg1;
- (unsigned long long)uin;
- (void)setUin:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

