@interface WCCommitPrivacySetting : MMObject <PBCoding>
{
    BOOL _isDynamicTagEnabled; // +0x8
    long long _privacy; // +0x10
    NSArray * _selectContacts; // +0x18
    NSArray * _selectTags; // +0x20
    NSArray * _recentSelectedChatroom; // +0x28
    NSArray * _interactContacts; // +0x30
    NSArray * _excludeContacts; // +0x38
    NSArray * _excludeLabelNames; // +0x40
    NSString * _groupName; // +0x48
}
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_selectContacts;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)PBArrayAdd_isDynamicTagEnabled;
+ (void)PBArrayAdd_interactContacts;
+ (void)PBArrayAdd_excludeContacts;
+ (void)PBArrayAdd_excludeLabelNames;
+ (void)PBArrayAdd_groupName;
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
- (id)interactContacts;
- (void)setInteractContacts:(id)arg1;
- (id)excludeContacts;
- (void)setExcludeContacts:(id)arg1;
- (id)excludeLabelNames;
- (void)setExcludeLabelNames:(id)arg1;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (void).cxx_destruct;
@end
