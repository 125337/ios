@interface MMStarterLiveMoreFunctionManager : MMLiveMoreFunctionBaseManager
{
    WCFinderLiveStarterReporter * _starterReporter; // +0x8
}
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3;
+ (BOOL)isFreeTalkEnabled:(id)arg1;
+ (BOOL)isMicEnable:(id)arg1;
+ (BOOL)isRewardEnable:(id)arg1;
+ (BOOL)isRewardAnchorEntrenceEnable;
+ (BOOL)isLikeAnchorEntrenceEnable;
+ (BOOL)isLikeEnable:(id)arg1;
+ (BOOL)isGloryShowEnable:(id)arg1;
+ (BOOL)isHiddenAudienceNameEnable;
+ (BOOL)isHiddenAudienceName:(id)arg1;
+ (BOOL)isCommentEnable:(id)arg1;
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

