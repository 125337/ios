@interface WCStoryDataUnit : NSObject
{
    BOOL _hasUnreadStory; // +0x8
    BOOL _chatRoomSyncChange; // +0x9
    NSMutableArray * _storyDataItemArray; // +0x10
    unsigned long long _storyDataItemCount; // +0x18
    CContact * _userContact; // +0x20
    unsigned long long _type; // +0x28
    NSString * _dateKey; // +0x30
    NSMutableArray * _arrTid; // +0x38
    long long _cornerCount; // +0x40
}
+ (id)storyDataUnitWithContact:(id)arg1 dataCount:(unsigned long long)arg2 storyDataItemArray:(id)arg3;
+ (id)historyDataUnitWithDateKey:(id)arg1 dataCount:(unsigned long long)arg2 dataItemArray:(id)arg3;
- (id)unitIdentifier;
- (id)unitLogIdentifier;
- (id)username;
- (BOOL)needReloadData;
- (long long)indexForItemWithTid:(id)arg1;
- (int)lastCreateTime;
- (int)lastModifyTime;
- (id)lastDataItemTid;
- (id)storyDataItemArray;
- (void)setStoryDataItemArray:(id)arg1;
- (unsigned long long)storyDataItemCount;
- (void)setStoryDataItemCount:(unsigned long long)arg1;
- (id)userContact;
- (void)setUserContact:(id)arg1;
- (BOOL)hasUnreadStory;
- (void)setHasUnreadStory:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)dateKey;
- (void)setDateKey:(id)arg1;
- (id)arrTid;
- (void)setArrTid:(id)arg1;
- (BOOL)chatRoomSyncChange;
- (void)setChatRoomSyncChange:(BOOL)arg1;
- (long long)cornerCount;
- (void)setCornerCount:(long long)arg1;
- (void).cxx_destruct;
@end

