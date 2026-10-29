@interface StatusDBImpl : WCTextStateDB
{
    BOOL _useDbCache; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
    StatusDBCache * _dbCache; // +0x18
}
+ (id)checkTextStateForAddOrModify:(id)arg1;
- (void)removeTextStateReferenceInto:(id)arg1;
- (void)removeAllTextStateReferenceInfos;
- (void)markAllReferenceRead;
- (id)getReferenceInfoWithTextStateId:(id)arg1;
- (BOOL)addTextStateReferenceInfo:(id)arg1;
- (BOOL)deleteTextStateForId:(id)arg1;
- (id)getAllUnreadReferenceInfo;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 withLimit:(unsigned int)arg2;
- (void)removeAllTextStateLikeInfos;
- (void)removeAllComments;
- (void)markAllLikeInfoRead;
- (void)markAllCommentInfoRead;
- (id)getAllUnreadLikeInfo;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)arg1;
- (id)getAllLikeInfoLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (id)getAllCommentsWithLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (void)onServiceInit;
- (BOOL)addOrModifyTextState:(id)arg1 deleteExist:(BOOL)arg2 checkSequence:(BOOL)arg3;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (BOOL)isTextStateRead:(id)arg1;
- (BOOL)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3 username:(id)arg4;
- (id)textStateListForUsername:(id)arg1 maxCount:(unsigned int)arg2;
- (BOOL)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)batchForceDeleteTextStateForUsername:(id)arg1;
- (BOOL)addComment:(id)arg1;
- (BOOL)addTextStateLikeInfo:(id)arg1;
- (void)removeComemnt:(id)arg1 byMarkCommentDeleted:(BOOL)arg2;
- (void)removeTextStateLikeInto:(id)arg1;
- (BOOL)addStatusReadRecord:(id)arg1 statusId:(id)arg2 username:(id)arg3;
- (void)clearAllMessage;
- (void)markAllNewMessageRead;
- (BOOL)batchAddOrModifyTextStateList:(id)arg1;
- (id)cachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)arg1;
- (void)removeAllCachedNotifyUserNames;
- (void)batchClearExpireTextStates;
- (id)batchTextStateListWithOffset:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)arg1 isUnread:(BOOL)arg2 maxCreateTime:(unsigned int)arg3;
- (unsigned int)getTotalMessageCount;
- (unsigned int)getTotalUnreadMessageCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getUnreadSystemNotifyCount;
- (void)onReceiveInfoWithTextStateId:(id)arg1;
- (void)markAllNotifyRead;
- (id)getAllUnreadLatestNotifyInfos;
- (id)selectTextStateWithStateId:(id)arg1;
- (id)selectTSModelWithStateId:(id)arg1;
- (unsigned int)interactionCountWithTextStateId:(id)arg1;
- (unsigned int)commentCountWithTextStateId:(id)arg1;
- (void)updateCachedCommentCount:(id)arg1;
- (void)updateCachedCommentCount:(unsigned long long)arg1 textStateId:(id)arg2;
- (id)getLikeInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (BOOL)showNewMessageReddot;
- (void)setShowNewMessageReddot:(BOOL)arg1;
- (void)constructStatusInfoCache;
- (id)getStatusInfoListCache;
- (id)getSelfStateInteractData:(id)arg1;
- (void)onServiceClearData;
- (BOOL)isCacheReady;
- (BOOL)useDbCache;
- (void)setUseDbCache:(BOOL)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (id)dbCache;
- (void)setDbCache:(id)arg1;
- (void).cxx_destruct;
@end
