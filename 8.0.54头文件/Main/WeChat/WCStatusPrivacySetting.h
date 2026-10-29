@interface WCStatusPrivacySetting : MMObject <PBCoding>
{
    long long _privacy; // +0x8
    NSArray * _selectUserNames; // +0x10
    NSArray * _selectTags; // +0x18
    NSArray * _recentSelectedChatroom; // +0x20
    NSArray * _selectContacts; // +0x28
}
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_selectUserNames;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (id)selectUserNames;
- (void)setSelectUserNames:(id)arg1;
- (id)selectTags;
- (void)setSelectTags:(id)arg1;
- (id)recentSelectedChatroom;
- (void)setRecentSelectedChatroom:(id)arg1;
- (id)selectContacts;
- (void)setSelectContacts:(id)arg1;
- (void).cxx_destruct;
@end

