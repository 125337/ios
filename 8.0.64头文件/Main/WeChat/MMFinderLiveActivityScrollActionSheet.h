@interface MMFinderLiveActivityScrollActionSheet : MMScrollActionSheet <MMLiveActionSheetFlowLayoutViewDelegate>
{
    BOOL _isInStopState; // +0x8
    BOOL _isLiveBannerMore; // +0x9
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    MMLiveActionSheetFlowLayoutView * _anchorOrAssistantFlowLayoutView; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 isBannerMore:(BOOL)arg2;
- (id)initWithLiveTaskId:(id)arg1;
- (void)loadData;
- (id)loadBannerItemArrayForAudience;
- (id)loadItemArrayForAudience;
- (id)loadItemArrayForAnchor;
- (id)loadItemArrayForAssistant;
- (id)getChangeAppSceneItem;
- (BOOL)isCurrentInMainScene;
- (void)setIsInStopState:(BOOL)arg1;
- (BOOL)isCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isConnectMicEnabled;
- (BOOL)isRewardEnable;
- (BOOL)isLiveGiftEffectOff;
- (BOOL)isCameraClosed;
- (BOOL)isMicMuted;
- (BOOL)isHiddenAudienceNameEnable;
- (BOOL)isHiddenAudienceName;
- (unsigned int)anchorSwitchFlag;
- (BOOL)isRewardAnchorOrAssistantEntrenceEnable;
- (BOOL)isLikeAnchorOrAssistantEntrenceEnable;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)enableShowFansGroupEntrance;
- (BOOL)enableDataBoardEntrance;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)disableScrollSheetItem:(long long)arg1;
- (BOOL)handleConnectMic;
- (id)liveTask;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (void)showInView:(id)arg1;
- (void)reportForChangeAppSceneItemExpose;
- (BOOL)isFansGroupItemExpose;
- (BOOL)isLiveBannerMore;
- (BOOL)isInStopState;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)anchorOrAssistantFlowLayoutView;
- (void)setAnchorOrAssistantFlowLayoutView:(id)arg1;
- (void)setIsLiveBannerMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
