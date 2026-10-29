@interface AddressBookArchive : NSObject <PBCoding>
{
    NSMutableSet * _phones; // +0x8
    NSMutableSet * _emails; // +0x10
}
+ (void)PBArrayAdd_phones;
+ (void)PBArrayAdd_emails;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)phones;
- (void)setPhones:(id)arg1;
- (id)emails;
- (void)setEmails:(id)arg1;
- (void).cxx_destruct;
@end

