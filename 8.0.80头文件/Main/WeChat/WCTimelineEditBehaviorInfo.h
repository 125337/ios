@interface WCTimelineEditBehaviorInfo : NSObject
{
    BOOL _dynamicTagEnabled; // +0x8
    NSString * _postSessionID; // +0x10
    NSString * _sessionID; // +0x18
    long long _visibleBtnClickNum; // +0x20
    long long _latestSettingShowStatue; // +0x28
    long long _latestSettingClickStatue; // +0x30
    long long _latestSettingGroupCount; // +0x38
    NSString * _latestSettingGroupList; // +0x40
    long long _latestSettingUinCount; // +0x48
    NSString * _latestSettingUinList; // +0x50
    long long _latestSettingLabelCount; // +0x58
    NSString * _latestSettingLabelList; // +0x60
    long long _privacyScene; // +0x68
    long long _importFromChatroomClickCount; // +0x70
    NSMutableArray * _selectedChatroomArr; // +0x78
    NSMutableDictionary * _chatroomDetailViewDic; // +0x80
    long long _importFromContactClickCount; // +0x88
    NSMutableArray * _selectedContactArr; // +0x90
    NSMutableArray * _selectedLabelArr; // +0x98
    NSString * _publishID; // +0xa0
    long long _postStatus; // +0xa8
    unsigned long long _enterScene; // +0xb0
    long long _previousPrivacy; // +0xb8
    NSMutableArray * _selectFriendFromTags; // +0xc0
    NSMutableSet * _searchSelectVisibleTagIDSet; // +0xc8
    NSMutableSet * _searchSelectInVisibleTagIDSet; // +0xd0
    unsigned long long _searchTagCountOfSelectFriendFromTags; // +0xd8
    unsigned long long _privacySettingStartTime; // +0xe0
    unsigned long long _privacySettingDuration; // +0xe8
    unsigned long long _selectFriendStartTime; // +0xf0
    unsigned long long _selectFriendDuration; // +0xf8
    unsigned long long _selectFriendFromGroupStartTime; // +0x100
    unsigned long long _selectFriendFromGroupDuration; // +0x108
    unsigned long long _selectFriendFromTagStartTime; // +0x110
    unsigned long long _selectFriendFromTagDuration; // +0x118
    unsigned long long _selectTagStartTime; // +0x120
    unsigned long long _selectTagDuration; // +0x128
}
- (id)init;
- (void)setupInitData;
- (id)getChatRoomNameAndUserCountStr:(id)arg1;
- (id)getLableNameAndUserCountStr:(id)arg1;
- (id)genPrivacySettingString;
- (unsigned long long)searchTagCountOfSelectTag;
- (id)getLabelIdStr:(id)arg1;
- (id)logString;
- (id)postSessionID;
- (void)setPostSessionID:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (long long)visibleBtnClickNum;
- (void)setVisibleBtnClickNum:(long long)arg1;
- (long long)latestSettingShowStatue;
- (void)setLatestSettingShowStatue:(long long)arg1;
- (long long)latestSettingClickStatue;
- (void)setLatestSettingClickStatue:(long long)arg1;
- (long long)latestSettingGroupCount;
- (void)setLatestSettingGroupCount:(long long)arg1;
- (id)latestSettingGroupList;
- (void)setLatestSettingGroupList:(id)arg1;
- (long long)latestSettingUinCount;
- (void)setLatestSettingUinCount:(long long)arg1;
- (id)latestSettingUinList;
- (void)setLatestSettingUinList:(id)arg1;
- (long long)latestSettingLabelCount;
- (void)setLatestSettingLabelCount:(long long)arg1;
- (id)latestSettingLabelList;
- (void)setLatestSettingLabelList:(id)arg1;
- (long long)privacyScene;
- (void)setPrivacyScene:(long long)arg1;
- (long long)importFromChatroomClickCount;
- (void)setImportFromChatroomClickCount:(long long)arg1;
- (id)selectedChatroomArr;
- (void)setSelectedChatroomArr:(id)arg1;
- (id)chatroomDetailViewDic;
- (void)setChatroomDetailViewDic:(id)arg1;
- (long long)importFromContactClickCount;
- (void)setImportFromContactClickCount:(long long)arg1;
- (id)selectedContactArr;
- (void)setSelectedContactArr:(id)arg1;
- (id)selectedLabelArr;
- (void)setSelectedLabelArr:(id)arg1;
- (id)publishID;
- (void)setPublishID:(id)arg1;
- (long long)postStatus;
- (void)setPostStatus:(long long)arg1;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (long long)previousPrivacy;
- (void)setPreviousPrivacy:(long long)arg1;
- (id)selectFriendFromTags;
- (void)setSelectFriendFromTags:(id)arg1;
- (id)searchSelectVisibleTagIDSet;
- (void)setSearchSelectVisibleTagIDSet:(id)arg1;
- (id)searchSelectInVisibleTagIDSet;
- (void)setSearchSelectInVisibleTagIDSet:(id)arg1;
- (unsigned long long)searchTagCountOfSelectFriendFromTags;
- (void)setSearchTagCountOfSelectFriendFromTags:(unsigned long long)arg1;
- (unsigned long long)privacySettingStartTime;
- (void)setPrivacySettingStartTime:(unsigned long long)arg1;
- (unsigned long long)privacySettingDuration;
- (void)setPrivacySettingDuration:(unsigned long long)arg1;
- (unsigned long long)selectFriendStartTime;
- (void)setSelectFriendStartTime:(unsigned long long)arg1;
- (unsigned long long)selectFriendDuration;
- (void)setSelectFriendDuration:(unsigned long long)arg1;
- (unsigned long long)selectFriendFromGroupStartTime;
- (void)setSelectFriendFromGroupStartTime:(unsigned long long)arg1;
- (unsigned long long)selectFriendFromGroupDuration;
- (void)setSelectFriendFromGroupDuration:(unsigned long long)arg1;
- (unsigned long long)selectFriendFromTagStartTime;
- (void)setSelectFriendFromTagStartTime:(unsigned long long)arg1;
- (unsigned long long)selectFriendFromTagDuration;
- (void)setSelectFriendFromTagDuration:(unsigned long long)arg1;
- (unsigned long long)selectTagStartTime;
- (void)setSelectTagStartTime:(unsigned long long)arg1;
- (unsigned long long)selectTagDuration;
- (void)setSelectTagDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
