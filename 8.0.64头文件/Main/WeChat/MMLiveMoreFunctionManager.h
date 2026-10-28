@interface MMLiveMoreFunctionManager : MMLiveMoreFunctionBaseManager
{
    BOOL _isConnectMicEnabled; // +0x8
    WCFinderLiveBaseLogReporter * _reporter; // +0x10
}
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3;
+ (void)nickItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)commentsItems:(id)arg1 liveTaskId:(id)arg2;
+ (void)sensitiveItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)commentAssistantItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)quickReplyItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)productQuestionItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)micItems:(id)arg1 liveTaskId:(id)arg2;
+ (void)giftItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)gloryItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)likeItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)aiAssistantItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)realTimeDataPanelItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)weakNetOptimizationItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)recommendItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)modifyCoverImageItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)openBulletinItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)visibleRangeItem:(id)arg1 liveTaskId:(id)arg2;
+ (void)locationItem:(id)arg1 liveTaskId:(id)arg2;
+ (id)liveTask:(id)arg1;
+ (void)setSubPath:(id)arg1 liveTaskId:(id)arg2;
+ (BOOL)shouldShowAnchorTaskGuide:(id)arg1 liveTaskId:(id)arg2;
+ (BOOL)isRewardAnchorOrAssistantEntrenceEnable:(id)arg1;
+ (unsigned int)anchorSwitchFlag:(id)arg1;
+ (BOOL)isLikeAnchorOrAssistantEntrenceEnable:(id)arg1;
+ (BOOL)isHiddenAudienceNameEnable:(id)arg1;
+ (id)getShowCityWithWCLocationInfo:(id)arg1;
+ (BOOL)showVisibleRangeWithTask:(id)arg1;
+ (id)getVisibleRangeDescriptionWithTask:(id)arg1;
- (id)createData:(unsigned long long)arg1;
- (id)liveTask;
- (BOOL)isCommentAssistantEnable;
- (void)reportAnchorActionSheetItems:(id)arg1;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (BOOL)isConnectMicEnabled;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
