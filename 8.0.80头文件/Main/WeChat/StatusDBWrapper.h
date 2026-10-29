@interface StatusDBWrapper : WCTextStateDB
{
    BOOL _useAffDB; // +0x8
    BOOL _affDBTransferFinish; // +0x9
    WCTextStateDB * _platformDB; // +0x10
    WCTextStateDB * _affDB; // +0x18
}
+ (id)checkTextStateForAddOrModify:(id)arg1;
- (void)onServiceInit;
- (BOOL)addOrModifyTextState:(id)arg1 deleteExist:(BOOL)arg2 checkSequence:(BOOL)arg3;
- (BOOL)deleteTextStateForId:(id)arg1;
- (BOOL)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)batchForceDeleteTextStateForUsername:(id)arg1;
- (BOOL)batchAddOrModifyTextStateList:(id)arg1;
- (BOOL)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3 username:(id)arg4;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (BOOL)isTextStateRead:(id)arg1;
- (id)batchTextStateListWithOffset:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (id)textStateListForUsername:(id)arg1 maxCount:(unsigned int)arg2;
- (void)batchClearExpireTextStates;
- (BOOL)checkUseAffDB;
- (id)getSelfTextState;
- (BOOL)addSelfTextState:(id)arg1;
- (id)batchTextStateListForTransform:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (BOOL)batchTextStateDataToAffDB:(id)arg1;
- (id)getSelfStateInteractData:(id)arg1;
- (void)constructStatusInfoCache;
- (id)selectTSModelWithStateId:(id)arg1;
- (id)getStatusInfoListCache;
- (void)removeTextStateReferenceInto:(id)arg1;
- (void)removeAllTextStateReferenceInfos;
- (void)markAllReferenceRead;
- (id)getReferenceInfoWithTextStateId:(id)arg1;
- (BOOL)addTextStateReferenceInfo:(id)arg1;
- (unsigned int)getTotalUnreadMessageCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getTotalMessageCount;
- (void)removeComemnt:(id)arg1 byMarkCommentDeleted:(BOOL)arg2;
- (void)clearAllMessage;
- (void)markAllLikeInfoRead;
- (id)getAllUnreadLatestNotifyInfos;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)arg1 isUnread:(BOOL)arg2 maxCreateTime:(unsigned int)arg3;
- (unsigned int)commentCountWithTextStateId:(id)arg1;
- (unsigned int)getUnreadSystemNotifyCount;
- (void)markAllCommentInfoRead;
- (void)markAllNewMessageRead;
- (void)markAllNotifyRead;
- (unsigned int)interactionCountWithTextStateId:(id)arg1;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 withLimit:(unsigned int)arg2;
- (BOOL)addComment:(id)arg1;
- (BOOL)addTextStateLikeInfo:(id)arg1;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)arg1;
- (id)getAllUnreadLikeInfo;
- (void)removeTextStateLikeInto:(id)arg1;
- (BOOL)addStatusReadRecord:(id)arg1 statusId:(id)arg2 username:(id)arg3;
- (id)getLikeInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (void)updateCachedCommentCount:(id)arg1;
- (void)updateCachedCommentCount:(unsigned long long)arg1 textStateId:(id)arg2;
- (void)removeAllCachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)arg1;
- (id)cachedNotifyUserNames;
- (BOOL)showNewMessageReddot;
- (void)setShowNewMessageReddot:(BOOL)arg1;
- (id)getAllUnreadReferenceInfo;
- (BOOL)isCacheReady;
- (id)platformDB;
- (void)setPlatformDB:(id)arg1;
- (id)affDB;
- (void)setAffDB:(id)arg1;
- (BOOL)useAffDB;
- (void)setUseAffDB:(BOOL)arg1;
- (BOOL)affDBTransferFinish;
- (void)setAffDBTransferFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end
