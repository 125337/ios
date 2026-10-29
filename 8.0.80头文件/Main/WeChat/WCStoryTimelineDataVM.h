@interface WCStoryTimelineDataVM : NSObject <IWCMyStoryUserStateUtilExt>
{
    BOOL _hasReloadDataItem; // +0x8
    NSArray * _allContactArray; // +0x10
    NSMutableDictionary * _userContactDict; // +0x18
    NSMutableDictionary * _chatRoomMyContactHasStoryDict; // +0x20
    NSArray * _unreadContactUserNameArray; // +0x28
    NSArray * _timestampUnreadNameArray; // +0x30
    NSArray * _timestampReadNameArray; // +0x38
    MMTimer * _reloadNotifyThrottle; // +0x40
    unsigned long long _lastReadMaxTid; // +0x48
}
+ (id)timelineStoryDataVM;
- (id)initDataWithContactArray:(id)arg1;
- (unsigned long long)getTimeStampUnreadStoryCount;
- (id)getTimelineDataUnit;
- (id)getMessageCellModelForUnitArray:(id)arg1;
- (id)getTimelineCellModelForUnitArray:(id)arg1;
- (id)getTimelineShowUnreadStoryUnitArray;
- (id)createTimelineShowUnreadUnitArrayWithUserDataDict:(id)arg1;
- (id)createDataUnitWithContact:(id)arg1 dataItemArray:(id)arg2;
- (id)getAllUnreadCommentMessage;
- (void)reloadDataItem:(id)arg1 unreadMessageUnitArray:(id)arg2;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (id)allContactArray;
- (void)setAllContactArray:(id)arg1;
- (id)userContactDict;
- (void)setUserContactDict:(id)arg1;
- (id)chatRoomMyContactHasStoryDict;
- (void)setChatRoomMyContactHasStoryDict:(id)arg1;
- (id)unreadContactUserNameArray;
- (void)setUnreadContactUserNameArray:(id)arg1;
- (id)timestampUnreadNameArray;
- (void)setTimestampUnreadNameArray:(id)arg1;
- (id)timestampReadNameArray;
- (void)setTimestampReadNameArray:(id)arg1;
- (id)reloadNotifyThrottle;
- (void)setReloadNotifyThrottle:(id)arg1;
- (BOOL)hasReloadDataItem;
- (void)setHasReloadDataItem:(BOOL)arg1;
- (unsigned long long)lastReadMaxTid;
- (void)setLastReadMaxTid:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
