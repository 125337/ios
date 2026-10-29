@interface StatusPrivacyResponse : NSObject
{
    BOOL _confirmed; // +0x8
    BOOL _isAllContactsSelected; // +0x9
    StatusPrivacyTypeBox * _privacy; // +0x10
    NSArray * _selectedContacts; // +0x18
    NSArray * _selectedTags; // +0x20
    long long _selectedTagUserCount; // +0x28
}
+ (id)makeWithConfirmed:(BOOL)arg1 privacy:(id)arg2 selectedContacts:(id)arg3 selectedTags:(id)arg4 isAllContactsSelected:(BOOL)arg5 selectedTagUserCount:(long long)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)confirmed;
- (void)setConfirmed:(BOOL)arg1;
- (id)privacy;
- (void)setPrivacy:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)selectedTags;
- (void)setSelectedTags:(id)arg1;
- (BOOL)isAllContactsSelected;
- (void)setIsAllContactsSelected:(BOOL)arg1;
- (long long)selectedTagUserCount;
- (void)setSelectedTagUserCount:(long long)arg1;
- (void).cxx_destruct;
@end
