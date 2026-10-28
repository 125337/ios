@interface WCCommitPrivacySetting : MMObject <PBCoding>
{
    BOOL _isDynamicTagEnabled; // +0x8
    long long _privacy; // +0x10
    NSArray * _selectContacts; // +0x18
    NSArray * _selectTags; // +0x20
    NSArray * _recentSelectedChatroom; // +0x28
}
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_selectContacts;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)PBArrayAdd_isDynamicTagEnabled;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (id)selectContacts;
- (void)setSelectContacts:(id)arg1;
- (id)selectTags;
- (void)setSelectTags:(id)arg1;
- (id)recentSelectedChatroom;
- (void)setRecentSelectedChatroom:(id)arg1;
- (BOOL)isDynamicTagEnabled;
- (void)setIsDynamicTagEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
