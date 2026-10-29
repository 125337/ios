@interface WCFinderPrivacyItemViewModel : NSObject
{
    BOOL _isAllContactSelectedWhenInit; // +0x8
    BOOL _isAllContactsSelected; // +0x9
    unsigned long long _itemType; // +0x10
    long long _privacy; // +0x18
    unsigned long long _availability; // +0x20
    NSString * _title; // +0x28
    NSString * _subtitle; // +0x30
    NSMutableSet * _contacts; // +0x38
    NSMutableSet * _contactTags; // +0x40
    UIColor * _tintColor; // +0x48
    NSString * _selectContactDescription; // +0x50
    NSString * _selectContactTagDescription; // +0x58
    NSString * _selectAllContactsDescription; // +0x60
    NSArray * _componentArray; // +0x68
    NSMutableSet * _selectedContacts; // +0x70
    NSMutableSet * _selectedContactTags; // +0x78
}
+ (id)selectTagTitle;
+ (id)selectContactTitle;
+ (id)selectAllContactsTitle;
- (double)cellHeightWithWidth:(double)arg1;
- (double)selectTagCellHeightWithWidth:(double)arg1;
- (double)selectContactCellHeightWithWidth:(double)arg1;
- (double)selectAllContactsCellHeightWithWidth:(double)arg1;
- (id)initWithItemType:(unsigned long long)arg1;
- (void)setContacts:(id)arg1;
- (void)setContactTags:(id)arg1;
- (void)setIsAllContactSelectedWhenInit:(BOOL)arg1;
- (id)tintColor;
- (id)componentArray;
- (id)description;
- (unsigned long long)itemType;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (unsigned long long)availability;
- (void)setAvailability:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)contacts;
- (id)contactTags;
- (BOOL)isAllContactSelectedWhenInit;
- (void)setTintColor:(id)arg1;
- (id)selectContactDescription;
- (void)setSelectContactDescription:(id)arg1;
- (id)selectContactTagDescription;
- (void)setSelectContactTagDescription:(id)arg1;
- (id)selectAllContactsDescription;
- (void)setSelectAllContactsDescription:(id)arg1;
- (void)setComponentArray:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)selectedContactTags;
- (void)setSelectedContactTags:(id)arg1;
- (BOOL)isAllContactsSelected;
- (void)setIsAllContactsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
