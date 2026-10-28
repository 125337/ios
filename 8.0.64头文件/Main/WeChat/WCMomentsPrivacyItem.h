@interface WCMomentsPrivacyItem : NSObject
{
    BOOL _isAllContactSelectedWhenInit; // +0x8
    BOOL _isAllContactsSelected; // +0x9
    unsigned long long _itemType; // +0x10
    long long _privacy; // +0x18
    NSString * _title; // +0x20
    NSString * _subtitle; // +0x28
    NSMutableSet * _contacts; // +0x30
    NSMutableSet * _contactTags; // +0x38
    UIColor * _tintColor; // +0x40
    NSString * _selectContactDescription; // +0x48
    NSString * _selectContactTagDescription; // +0x50
    NSString * _selectAllContactsDescription; // +0x58
    NSArray * _componentArray; // +0x60
    NSMutableSet * _selectedContacts; // +0x68
    NSMutableSet * _selectedContactTags; // +0x70
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
