@interface WCStoryWCDB : NSObject
{
    id <NSObject> m_recoverObserver; // +0x8
    unsigned int _lastCleanInvalidateTime; // +0x10
    id <WCStoryWCDBDelegate> _delegate; // +0x18
    double _lastCleanCommentInvalidateTime; // +0x20
    NSObject<OS_dispatch_queue> * _dataItemCleanQueue; // +0x28
    WCTDatabase * _database; // +0x30
    WCTTable * _storyTable; // +0x38
    WCTTable * _unReadStoryTable; // +0x40
    WCTTable * _chatRoomSyncTable; // +0x48
    WCTTable * _unReadCommentTable; // +0x50
    WCTTable * _playRecordTable; // +0x58
    WCTTable * _userDataTable; // +0x60
    WCTTable * _userRelatedCommentTable; // +0x68
    NSMutableDictionary * _dicZonePageTable; // +0x70
}
- (id)init;
- (void)dealloc;
- (id)dicZonePageTable;
- (BOOL)reloadDataBase;
- (void)createTables;
- (void)cleanOtherZonePageIndexTable;
- (void)closeDB;
- (void)willRecoverDatabase;
- (BOOL)createStoryPlayRecordTable;
- (BOOL)createStoryUserDataTable;
- (void)updateUserDataWithDataItems:(id)arg1;
- (id)getPlayRecordWithUserName:(id)arg1;
- (id)makeStoryPlayedWithDataItem:(id)arg1 Scene:(unsigned long long)arg2;
- (id)getPlayRecordWithDataItem:(id)arg1;
- (BOOL)createStoryTableTable;
- (BOOL)createChatRoomSyncStoryTable;
- (BOOL)addChatRoomStorySync:(id)arg1;
- (void)removeChatRoomStorySync:(id)arg1;
- (BOOL)shouldChatRoomSyncStory:(id)arg1;
- (id)getChatRoomSyncData:(id)arg1;
- (double)getChatRoomNextSyncTimeStamp:(id)arg1;
- (void)deleteUnReadStoryWithUserName:(id)arg1;
- (void)setUnReadMaxTidDataItem:(id)arg1 UserName:(id)arg2;
- (BOOL)createUnReadStoryTable;
- (void)updateUnReadStorys:(id)arg1;
- (void)makeStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (BOOL)hasUnReadSyoryWithUserName:(id)arg1;
- (void)deleteStoryAndMakeUnReadTogetherWithTid:(id)arg1 UserName:(id)arg2;
- (double)getLastReadUserStoryTimeStamp:(id)arg1;
- (id)getLastReadUserStorysWithUserNames:(id)arg1;
- (BOOL)mmcontactHasUnReadStory;
- (id)getAllTimelineShowUnreadStory;
- (id)fetchStoryDataItemInUsernameArray:(id)arg1;
- (id)getAllUnreadStory;
- (id)clearUnreadStoryWithUsername:(id)arg1;
- (void)cleanAllReadStatus;
- (unsigned long long)halfTimeStampStoryUnreadTid;
- (unsigned int)earliestUnreadStoryPostTime;
- (id)getUnreadStoryInUsernameArray:(id)arg1;
- (BOOL)hasUnReadStoryComments;
- (BOOL)createStoryUnReadCommentTable;
- (BOOL)addStoryUnReadCommentWithStoryComment:(id)arg1;
- (id)getStoryUnReadCommentsWithTid:(id)arg1;
- (BOOL)hasStoryUnReadCommentsWithCommentType:(unsigned int)arg1 tid:(id)arg2;
- (BOOL)hasUnreadStoryComments:(unsigned int)arg1 WithTid:(id)arg2;
- (BOOL)deleteStoryUnReadCommentsWithTid:(id)arg1;
- (BOOL)deleteStoryUnReadCommentsWithTid:(id)arg1 CommentId:(id)arg2;
- (BOOL)deleteUnreadStoryComments:(unsigned int)arg1 WithTid:(id)arg2;
- (BOOL)addStoryCommentWithComment:(id)arg1;
- (BOOL)deleteStoryComment:(id)arg1;
- (id)getChatRoomSycStorysWithUserName:(id)arg1;
- (id)getAllUploadingDataItems;
- (id)getStoryDataItemWithId:(id)arg1;
- (id)getNewestStoryDataItemWithUserName:(id)arg1;
- (id)getStoryItemsWithUserName:(id)arg1 AfterTime:(unsigned int)arg2;
- (long long)getNumberOfUserPostInOneDay;
- (id)getStoryDataItemsWithUserName:(id)arg1 MaxItemID:(id)arg2;
- (void)deleteAllStoryDataWithUserName:(id)arg1;
- (BOOL)deleteStoryDataWithItemID:(id)arg1;
- (void)deleteNewestStoryWithUserName:(id)arg1 NewDataItems:(id)arg2;
- (void)updateChatRoomSyncStorys:(id)arg1;
- (id)makeStoryFailWithTid:(id)arg1 ErrorType:(long long)arg2;
- (BOOL)updateStoryItem:(id)arg1;
- (BOOL)updateStoryCommentsWith:(id)arg1;
- (BOOL)updateStoryItems:(id)arg1;
- (id)getZonePageTableNameWithZoneCode:(int)arg1;
- (id)getOrCreateZonePageTableWithZone:(int)arg1;
- (void)addZonePageIndexWithStoryItem:(id)arg1 Zone:(int)arg2;
- (void)deleteZonePageIndexWithTid:(id)arg1 Zone:(int)arg2;
- (void)updateHistoryStoryPageObj:(id)arg1 Zone:(int)arg2 MaxTid:(unsigned long long)arg3 RetCode:(int)arg4;
- (id)getPageIndexObjWithTid:(id)arg1 Zone:(int)arg2;
- (id)getPageDataItemsObjWithDate:(id)arg1 Zone:(int)arg2;
- (id)getZonePageIndexListWithFirstTid:(id)arg1 Zone:(int)arg2 Limit:(unsigned int)arg3;
- (id)getStorysWithZonePageIndexObjs:(id)arg1;
- (id)getZonePageObjListWithFirstTid:(id)arg1 Zone:(int)arg2 Limit:(unsigned int)arg3;
- (void)updateOneDayStorysWithDataItems:(id)arg1 Date:(id)arg2 Zone:(int)arg3;
- (void)cleanInvalidateStory;
- (void)_cleanInvalidateStory;
- (BOOL)createUserRelatedCommentTable;
- (BOOL)cleanInvalidUserRelatedComment;
- (id)getAllStoryUnReadUserRelatedCommentObj;
- (void)makeAllStoryUserRelatedCommentRead;
- (BOOL)checkStoryDataItemHasUnreadCommentWithTid:(id)arg1;
- (BOOL)makeStoryUserRelatedCommentReadWithTid:(id)arg1;
- (BOOL)addEmptyRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (BOOL)addRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (BOOL)deleteRelatedCommentWithComment:(id)arg1;
- (BOOL)makeUsernameDataItemAllRelatedCommentRead:(id)arg1;
- (id)getAllStoryUnReadUserRelatedCommentObjWithUsername:(id)arg1;
- (id)getReadCommentIdOfDataItemTid:(id)arg1;
- (BOOL)deleteDataItemAllUserRelatedCommentWithTid:(id)arg1;
- (BOOL)cleanAllUserRelatedcomment;
- (BOOL)hasUserUnreadRelatedComment;
- (BOOL)resetAllRelated;
- (BOOL)updateRelatedCommentObj:(id)arg1;
- (BOOL)isRelatedComment:(id)arg1;
- (void)didRecoverDatabase;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)lastCleanInvalidateTime;
- (void)setLastCleanInvalidateTime:(unsigned int)arg1;
- (double)lastCleanCommentInvalidateTime;
- (void)setLastCleanCommentInvalidateTime:(double)arg1;
- (id)dataItemCleanQueue;
- (void)setDataItemCleanQueue:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)storyTable;
- (void)setStoryTable:(id)arg1;
- (id)unReadStoryTable;
- (void)setUnReadStoryTable:(id)arg1;
- (id)chatRoomSyncTable;
- (void)setChatRoomSyncTable:(id)arg1;
- (id)unReadCommentTable;
- (void)setUnReadCommentTable:(id)arg1;
- (id)playRecordTable;
- (void)setPlayRecordTable:(id)arg1;
- (id)userDataTable;
- (void)setUserDataTable:(id)arg1;
- (id)userRelatedCommentTable;
- (void)setUserRelatedCommentTable:(id)arg1;
- (void)setDicZonePageTable:(id)arg1;
- (void).cxx_destruct;
@end
