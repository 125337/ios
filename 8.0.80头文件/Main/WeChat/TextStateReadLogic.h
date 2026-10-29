@interface TextStateReadLogic : NSObject
{
    id <TextStateReadLogicDelegate> _delegate; // +0x8
    NSMutableSet * _unreadUsernameCacheSet; // +0x10
    NSMutableSet * _readUsernameCacheSet; // +0x18
    NSMutableDictionary * _readUserRecordsCache; // +0x20
    NSMutableSet * _loadedStatusIds; // +0x28
    NSMutableSet * _reportedStatusIds; // +0x30
}
- (id)init;
- (void)initData;
- (void)setReadForTextState:(id)arg1;
- (void)setReadForTextStateOnlyLocal:(id)arg1;
- (void)markReadForTextState:(id)arg1 shouldReport:(BOOL)arg2;
- (BOOL)isReadForTextStateWithId:(id)arg1;
- (BOOL)isTextStateReadWithUsername:(id)arg1;
- (BOOL)hasUnreadTextStateContact;
- (void)clearCache;
- (void)clearCacheForUsername:(id)arg1;
- (void)reportStatusRead:(id)arg1 ownerUsername:(id)arg2;
- (void)handleTextStatusReadDataItem:(id)arg1;
- (void)upsertReadUserRecord:(id)arg1 forStatusId:(id)arg2;
- (void)getReadRecordListFromDBForStatusId:(id)arg1 completion:(id /* block */)arg2;
- (void)getReadUserRecordsForStatusId:(id)arg1 completion:(id /* block */)arg2;
- (id)viewedFriendsUserNames:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)unreadUsernameCacheSet;
- (void)setUnreadUsernameCacheSet:(id)arg1;
- (id)readUsernameCacheSet;
- (void)setReadUsernameCacheSet:(id)arg1;
- (id)readUserRecordsCache;
- (void)setReadUserRecordsCache:(id)arg1;
- (id)loadedStatusIds;
- (void)setLoadedStatusIds:(id)arg1;
- (id)reportedStatusIds;
- (void)setReportedStatusIds:(id)arg1;
- (void).cxx_destruct;
@end
