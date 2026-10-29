@interface ContactsSearchSnapshot : NSObject
{
    BOOL _isFilterActive; // +0x8
    long long _mode; // +0x10
    NSArray * _sectionKeys; // +0x18
    NSDictionary * _sectionContacts; // +0x20
    NSDictionary * _matchTips; // +0x28
    long long _displayedCount; // +0x30
}
+ (id)emptySnapshot;
- (id)initWithMode:(long long)arg1 sectionKeys:(id)arg2 sectionContacts:(id)arg3 matchTips:(id)arg4 isFilterActive:(BOOL)arg5 displayedCount:(long long)arg6;
- (BOOL)isSearching;
- (id)contactsInSectionKey:(id)arg1;
- (id)contactAtIndexPath:(id)arg1;
- (id)matchTipForContact:(id)arg1;
- (long long)mode;
- (id)sectionKeys;
- (id)sectionContacts;
- (id)matchTips;
- (BOOL)isFilterActive;
- (long long)displayedCount;
- (void).cxx_destruct;
@end
