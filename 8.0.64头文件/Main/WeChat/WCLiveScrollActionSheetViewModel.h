@interface WCLiveScrollActionSheetViewModel : NSObject
{
    BOOL _isInStopState; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)isCurrentInMainScene;
- (BOOL)isCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isConnectMicEnabled;
- (BOOL)isRewardEnable;
- (BOOL)isShareEnable;
- (BOOL)isConcertTicket;
- (BOOL)isCommentAssistantEnable;
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
- (BOOL)isShowEntranceForFeedbackHelp;
- (BOOL)enableDataBoardEntrance;
- (BOOL)enableShowFansGroupEntrance;
- (BOOL)canShowCreatorCenter;
- (BOOL)enableShowOpPromotionCardEntrance;
- (BOOL)enableShowTrafficEntrance;
- (BOOL)enableConnectMicEntrance;
- (BOOL)canShowVote;
- (BOOL)canShowPromote;
- (BOOL)canShowScreenShare;
- (BOOL)isLiveThemeReminderSwitchOpen;
- (BOOL)enableShowGameCanvasDebugEntrance;
- (BOOL)enableShowPerformanceAnalysisEntrance;
- (BOOL)isLiveQrCodeEnableForAnchor;
- (BOOL)isLiveQrCodeEnableForAudience;
- (BOOL)isRewardItemExpose;
- (BOOL)isAnchorCustomizeRewardEnabled;
- (BOOL)isDislikeEnable;
- (BOOL)canShowReplaySettingEntrance;
- (id)liveTask;
- (BOOL)showComplain;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isInStopState;
- (void)setIsInStopState:(BOOL)arg1;
- (void).cxx_destruct;
@end
