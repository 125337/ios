@interface MMStarterLiveMoreFunctionManager : MMLiveMoreFunctionBaseManager
{
    WCFinderLiveStarterReporter * _starterReporter; // +0x8
}
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3;
+ (id)getMoreFunctionItemsForParticipantWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3 coLiveAnchorPermissionFlags:(unsigned long long)arg4;
+ (void)micItem:(id)arg1 taskId:(id)arg2 isGameLive:(BOOL)arg3;
+ (void)nickItem:(id)arg1 taskId:(id)arg2;
+ (void)giftItem:(id)arg1 taskId:(id)arg2;
+ (void)creationGiftItem:(id)arg1 taskId:(id)arg2;
+ (void)likeItem:(id)arg1 taskId:(id)arg2;
+ (void)realTimeDataPanelItem:(id)arg1 taskId:(id)arg2;
+ (void)recommendItem:(id)arg1 taskId:(id)arg2;
+ (void)commentItems:(id)arg1 taskId:(id)arg2;
+ (void)sensitiveItem:(id)arg1 taskId:(id)arg2;
+ (void)commentAssistantItem:(id)arg1 taskId:(id)arg2;
+ (void)quickReplyItem:(id)arg1 taskId:(id)arg2 isGameLive:(BOOL)arg3;
+ (id)liveTask:(id)arg1;
+ (BOOL)isMicEnable:(id)arg1;
+ (BOOL)isRewardEnable:(id)arg1;
+ (BOOL)isRewardAnchorEntrenceEnable;
+ (BOOL)isCreationGiftSwitchAvailableWithTaskId:(id)arg1;
+ (BOOL)isCreationGiftEntrenceEnable;
+ (BOOL)isLikeAnchorEntrenceEnable;
+ (BOOL)isLikeEnable:(id)arg1;
+ (BOOL)isCreationGiftShowEnable:(id)arg1;
+ (BOOL)isGloryShowEnable:(id)arg1;
+ (BOOL)isHiddenAudienceNameEnable;
+ (BOOL)isHiddenAudienceName:(id)arg1;
+ (BOOL)isCommentEnable:(id)arg1;
+ (BOOL)isBigEmoticonCommentEnable:(id)arg1;
+ (BOOL)isBigEmoticonCommentSwitchEnable;
+ (BOOL)isAiAssistantSwitchEnabled;
+ (BOOL)isAiAssistantMasterSwitchEnabled;
+ (BOOL)isCommentAssistantEnable;
+ (BOOL)isQuickReplyEnable:(id)arg1;
- (id)init;
- (id)createData:(unsigned long long)arg1;
- (void)reportQuickReplyExpose;
- (id)liveTask;
- (void)reportAnchorActionSheetItems:(id)arg1;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (void).cxx_destruct;
@end
