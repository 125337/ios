@interface WCStoryPreviewReportObj : NSObject
{
    int _netType; // +0x8
    unsigned long long _previewEnterScene; // +0x10
    NSNumber * _profileSource; // +0x18
    NSString * _contactUserName; // +0x20
    NSNumber * _hasUnreadStoryTips; // +0x28
    NSNumber * _waitPlayFriendCount; // +0x30
    WCStoryDataItem * _enterDataItem; // +0x38
    long long _unreadMessageCount; // +0x40
    long long _interactiveUserCount; // +0x48
    unsigned long long _enterTime; // +0x50
    NSString * _exposeViewId; // +0x58
    NSMutableSet * _allUserNameSet; // +0x60
    NSMutableSet * _mmContactUserNameSet; // +0x68
    NSMutableSet * _allTidSet; // +0x70
    NSMutableSet * _mmContactTidSet; // +0x78
    unsigned long long _totalBrowserCount; // +0x80
    unsigned long long _mmContactBrowserCount; // +0x88
    NSString * _lastBrowserTid; // +0x90
    NSMutableArray * _actionTraceArray; // +0x98
    NSIndexPath * _currentIndexPath; // +0xa0
}
- (id)previewReportObjForReEnter;
- (id)init;
- (id)allUserNameSet;
- (id)mmContactUserNameSet;
- (id)allTidSet;
- (id)mmContactTidSet;
- (id)actionTraceArray;
- (BOOL)isDoubleTapScene;
- (int)contactType;
- (void)enterPreview;
- (void)browserStoryWithTid:(id)arg1 userName:(id)arg2 isMMContact:(BOOL)arg3 lastIndexPath:(id)arg4;
- (void)reportSingleBrowserAction:(id)arg1 userName:(id)arg2 isMMContact:(BOOL)arg3;
- (void)reportExitPreview;
- (void)reportDoubleTapHeadViewWithHasEnterPreview:(BOOL)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (id)arrayToJSON:(id)arg1;
- (unsigned long long)previewEnterScene;
- (void)setPreviewEnterScene:(unsigned long long)arg1;
- (id)profileSource;
- (void)setProfileSource:(id)arg1;
- (id)contactUserName;
- (void)setContactUserName:(id)arg1;
- (id)hasUnreadStoryTips;
- (void)setHasUnreadStoryTips:(id)arg1;
- (id)waitPlayFriendCount;
- (void)setWaitPlayFriendCount:(id)arg1;
- (id)enterDataItem;
- (void)setEnterDataItem:(id)arg1;
- (long long)unreadMessageCount;
- (void)setUnreadMessageCount:(long long)arg1;
- (long long)interactiveUserCount;
- (void)setInteractiveUserCount:(long long)arg1;
- (int)netType;
- (void)setNetType:(int)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)exposeViewId;
- (void)setExposeViewId:(id)arg1;
- (void)setAllUserNameSet:(id)arg1;
- (void)setMmContactUserNameSet:(id)arg1;
- (void)setAllTidSet:(id)arg1;
- (void)setMmContactTidSet:(id)arg1;
- (unsigned long long)totalBrowserCount;
- (void)setTotalBrowserCount:(unsigned long long)arg1;
- (unsigned long long)mmContactBrowserCount;
- (void)setMmContactBrowserCount:(unsigned long long)arg1;
- (id)lastBrowserTid;
- (void)setLastBrowserTid:(id)arg1;
- (void)setActionTraceArray:(id)arg1;
- (id)currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
