@interface ChatRoomContactSelectSectionModel : MMObject
{
    unsigned long long _type; // +0x8
    NSString * _title; // +0x10
    NSArray * _contactList; // +0x18
}
- (id)title;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)contactList;
- (void)setContactList:(id)arg1;
- (void).cxx_destruct;
@end
