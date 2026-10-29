@interface WCTextStateDB : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    WCTTable * _doLikeInfoTable; // +0x10
    WCTTable * _doLikeInfoCacheTable; // +0x18
    WCTTable * _commentInfoTable; // +0x20
    WCTTable * _referenceInfoTable; // +0x28
    WCTTable * _referenceInfoCacheTable; // +0x30
    WCTTable * _readInfoTable; // +0x38
    WCTTable * _textStateTable; // +0x40
    MemoryMappedKV * _mmkv; // +0x48
}
+ (Expression)unreadDoLikeInfoCondition;
+ (Expression)unreadReferenceInfoCondition;
+ (Expression)unreadCommentInfoCondition;
+ (Expression)notifyDoLikeInfoCondition;
+ (Expression)notifyReferenceInfoCondition;
+ (Expression)notifyCommentInfoCondition;
+ (SyntaxList<WCDB::OrderingTerm>)doLikeInfoCreateTimeDescendOrders;
+ (SyntaxList<WCDB::OrderingTerm>)referenceInfoCreateTimeDescendOrders;
+ (SyntaxList<WCDB::OrderingTerm>)commentCreateTimeDescendOrders;
+ (Expression)existLikeInfoCondition:(id)arg1;
+ (id)checkTextStateForAddOrModify:(id)arg1;
- (void)onServiceInit;
- (BOOL)reloadDataBase;
- (void)createTables;
- (BOOL)createDoLikeInfoTable;
- (BOOL)createCommentInfoTable;
- (BOOL)createDoLikeInfoCacheTable;
- (void)createReadInfoTable;
- (void)createReferenceInfoTable;
- (void)createReferenceInfoCacheTable;
- (void)createTextStateTable;
- (void)closeDB;
- (void)initKV;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (BOOL)deleteExistLikeInfosWithInfo:(id)arg1 table:(id)arg2;
- (BOOL)deleteExistReferenceInfoWithInfo:(id)arg1 table:(id)arg2;
- (unsigned int)getTotalUnreadMessageCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getTotalMessageCount;
- (unsigned int)getUnreadSystemNotifyCount;
- (void)markAllNotifyRead;
- (void)markAllNewMessageRead;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)arg1 isUnread:(BOOL)arg2 maxCreateTime:(unsigned int)arg3;
- (id)getAllUnreadLatestNotifyInfos;
- (void)onReceiveInfoWithTextStateId:(id)arg1;
- (unsigned int)interactionCountWithTextStateId:(id)arg1;
- (unsigned int)commentCountWithTextStateId:(id)arg1;
- (id)genNotifyCacheItemFromDBWith:(id)arg1;
- (id)notifyCacheItemWithTextStateId:(id)arg1;
- (id)notifyCacheItemWithTextStateId:(id)arg1 forceCreate:(BOOL)arg2;
- (void)updateNotifyCacheItem:(id)arg1;
- (void)updateCachedCommentCount:(unsigned long long)arg1 textStateId:(id)arg2;
- (void)updateCachedCommentCount:(id)arg1;
- (BOOL)addTextStateLikeInfo:(id)arg1;
- (void)removeTextStateLikeInto:(id)arg1;
- (void)removeAllTextStateLikeInfos;
- (BOOL)addComment:(id)arg1;
- (void)removeComemnt:(id)arg1 byMarkCommentDeleted:(BOOL)arg2;
- (void)removeAllComments;
- (id)getAllUnreadLikeInfo;
- (id)getUnreadLikeInfoWithCount:(unsigned long long)arg1;
- (id)getAllLikeInfoLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 withLimit:(unsigned int)arg2;
- (void)markAllLikeInfoRead;
- (void)markAllCommentInfoRead;
- (id)getAllCommentsWithLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)arg1;
- (id)getAllUnreadCommentInfos;
- (id)getLikeInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (id)getCommentInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (BOOL)isTextStateRead:(id)arg1;
- (BOOL)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3 username:(id)arg4;
- (void)clearExpiredReadInfo;
- (void)clearAllMessage;
- (BOOL)addTextStateReferenceInfo:(id)arg1;
- (void)removeTextStateReferenceInto:(id)arg1;
- (void)removeAllTextStateReferenceInfos;
- (id)getReferenceInfoWithTextStateId:(id)arg1 maxCount:(unsigned int)arg2;
- (void)markAllReferenceRead;
- (id)getAllUnreadReferenceInfo;
- (BOOL)addOrModifyTextState:(id)arg1 deleteExist:(BOOL)arg2 checkSequence:(BOOL)arg3;
- (BOOL)batchAddOrModifyTextStateList:(id)arg1;
- (BOOL)deleteTextStateForId:(id)arg1;
- (BOOL)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)addDeletedTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2 createTime:(unsigned int)arg3;
- (BOOL)batchForceDeleteTextStateForUsername:(id)arg1;
- (id)highestSequenceTextStateForUsername:(id)arg1;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (id)textStateListForUsername:(id)arg1 maxCount:(unsigned int)arg2;
- (id)batchTextStateListWithOffset:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (void)batchClearExpireTextStates;
- (id)privateTextStateForId:(id)arg1;
- (id)cachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)arg1;
- (void)removeAllCachedNotifyUserNames;
- (BOOL)showNewMessageReddot;
- (void)setShowNewMessageReddot:(BOOL)arg1;
- (void)constructStatusInfoCache;
- (id)selectTSModelWithStateId:(id)arg1;
- (id)getStatusInfoListCache;
- (id)getSelfStateInteractData:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)doLikeInfoTable;
- (void)setDoLikeInfoTable:(id)arg1;
- (id)doLikeInfoCacheTable;
- (void)setDoLikeInfoCacheTable:(id)arg1;
- (id)commentInfoTable;
- (void)setCommentInfoTable:(id)arg1;
- (id)referenceInfoTable;
- (void)setReferenceInfoTable:(id)arg1;
- (id)referenceInfoCacheTable;
- (void)setReferenceInfoCacheTable:(id)arg1;
- (id)readInfoTable;
- (void)setReadInfoTable:(id)arg1;
- (id)textStateTable;
- (void)setTextStateTable:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end

