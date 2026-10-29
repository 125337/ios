@interface MMFinderLiveCommentDataFetchEngne : MMLiveCommentDataFetchEngne <WCFinderLiveExt>
{
    int _logCommentOpen; // +0x8
}
+ (void)filterUnValidMsg:(id)arg1;
+ (id)filterLikeMsg:(id)arg1;
+ (id)filterAdAppMsg:(id)arg1 type:(unsigned int)arg2;
+ (id)filterNotifyTypeCommentData:(id)arg1 taskId:(id)arg2;
+ (void)logForRewardRankComment:(id)arg1 logStr:(id)arg2;
- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyGetLiveMessageWithTaskId:(id)arg1;
- (id)commentDataMgr;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)arg1;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 extraClientConfigUpdated:(BOOL)arg14 liveGameData:(id)arg15 respContext:(id)arg16;
- (BOOL)isCommentMsgTypeBanCommentPersonal:(unsigned int)arg1;
- (void)logForCommentData:(id)arg1;
- (void)logForComboLiveRewardComment:(id)arg1 logStr:(id)arg2 selfUserName:(id)arg3;
- (void)logForRewardRankingNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForGlobalRankUpdateNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForJoinFansGroupNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForRedPacketComment:(id)arg1 logStr:(id)arg2;
- (void)checkAndPickExtraInfoFromCommentDatas:(id)arg1 forTaskId:(id)arg2;
- (void)checkAndPickExraInfoFromGlobalRankUpdateNoticeMsg:(id)arg1 forTaskId:(id)arg2;
- (void)logForSpecialNotifyToMe:(id)arg1 logStr:(id)arg2;
- (int)logCommentOpen;
- (void)setLogCommentOpen:(int)arg1;
@end
