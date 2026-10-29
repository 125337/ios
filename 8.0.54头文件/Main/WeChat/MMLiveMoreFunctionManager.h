@interface MMLiveMoreFunctionManager : MMLiveMoreFunctionBaseManager
{
    BOOL _isConnectMicEnabled; // +0x8
    WCFinderLiveBaseLogReporter * _reporter; // +0x10
}
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3;
+ (void)setSubPath:(id)arg1 liveTaskId:(id)arg2;
+ (BOOL)shouldShowAnchorTaskGuide:(id)arg1 liveTaskId:(id)arg2;
+ (BOOL)isRewardAnchorOrAssistantEntrenceEnable:(id)arg1;
+ (unsigned int)anchorSwitchFlag:(id)arg1;
+ (BOOL)isLikeAnchorOrAssistantEntrenceEnable:(id)arg1;
+ (BOOL)isHiddenAudienceNameEnable:(id)arg1;
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

