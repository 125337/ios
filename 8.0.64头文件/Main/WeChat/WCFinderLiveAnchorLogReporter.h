@interface WCFinderLiveAnchorLogReporter : WCFinderLiveBaseLogReporter <IWCFinderLiveAnchorReporterCallback, MMLiveReportEventMgrExt, WCFinderLiveExt, MMLiveTaskMgrExt>
{
    unsigned long long m_shareScene; // +0x8
    unsigned long long m_profileViewShowTime; // +0x10
    unsigned long long m_profileViewScene; // +0x18
    unsigned int m_exchangeCameraCount; // +0x20
    unsigned int m_complainCount; // +0x24
    unsigned int m_allCommentCloseCount; // +0x28
    unsigned int m_allCommentOpenCount; // +0x2c
    unsigned int m_personalCommentCloseCount; // +0x30
    unsigned int m_personalCommentOpenCount; // +0x34
    unsigned int m_kickOutCount; // +0x38
    NSMutableDictionary * m_promoteGoodsDic; // +0x40
    NSMutableDictionary * m_promoteGoodsStay; // +0x48
    NSString * m_currPromoteGoods; // +0x50
    unsigned int m_topCommentCount; // +0x58
    unsigned int m_lotteryCount; // +0x5c
    unsigned int m_clapCount; // +0x60
    unsigned int m_connectCount; // +0x64
    NSMutableString * m_connectTime; // +0x68
    unsigned long long m_connectStartTime; // +0x70
    BOOL m_isConnecting; // +0x78
    BOOL m_isGift; // +0x79
    BOOL m_isLike; // +0x7a
    NSMutableString * m_anchorConnectTime; // +0x80
    unsigned long long m_anchorConnectStartTime; // +0x88
    unsigned long long m_shareTextStateCount; // +0x90
    NSMutableArray * m_filePresentationInfos; // +0x98
}
- (id)init;
- (id)initWithRoleType:(long long)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (void)onClickOperationView:(unsigned long long)arg1;
- (void)onFilterResult:(id)arg1;
- (void)onBeautyResult:(id)arg1;
- (void)onActionSheetClicked:(id)arg1 controller:(id)arg2 button:(id)arg3 buttonTitle:(id)arg4;
- (void)onProfileViewShow:(unsigned long long)arg1 andContact:(id)arg2;
- (void)onShareTimeline;
- (void)onShareSession:(id)arg1;
- (void)onShareTextState;
- (void)onCancleShareTimeline;
- (void)onCancleShareSession:(id)arg1;
- (void)onVerifyAction:(unsigned long long)arg1;
- (void)onFloatOperation:(unsigned long long)arg1;
- (void)onCommentTop:(id)arg1 withContent:(id)arg2;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)onJoinLiveAfterAbnormal:(id)arg1 startExtraInfo:(id)arg2;
- (void)onSimpleModePubbleGuide:(id)arg1 startExtraInfo:(id)arg2;
- (void)noteFinderLiveStart:(id)arg1 isJoin:(BOOL)arg2;
- (void)onCloseFinderLiveError:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned long long)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 idUnit:(id)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 idUnits:(id)arg2;
- (void)onShopSettingsItemExpose:(unsigned int)arg1;
- (void)onShopSettingsItemClick:(unsigned int)arg1;
- (void)onProductPromoteStatusChanged:(unsigned long long)arg1 promoteStatus:(BOOL)arg2;
- (void)onAddGoodsButtonClicked:(id)arg1 withSceneNote:(id)arg2;
- (void)onOperateCoupon:(BOOL)arg1;
- (void)onGoodsItemSelected:(id)arg1 sceneNote:(id)arg2 shopContext:(id)arg3;
- (void)onLotteryTypeSelected:(BOOL)arg1;
- (void)onReportLotteryAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)onOperationLiveShoppingButtonClicked:(id)arg1;
- (void)onLotteryCreate:(id)arg1;
- (void)onLotteryAction:(unsigned long long)arg1;
- (void)onGiftRankAction:(unsigned long long)arg1;
- (void)onOpenEncashPage;
- (void)onMicAction:(unsigned long long)arg1;
- (void)onMicAction:(unsigned long long)arg1 withActionResultDictionary:(id)arg2;
- (void)onMicAction:(unsigned long long)arg1 withActionResultValue:(unsigned long long)arg2;
- (void)onMicAction:(unsigned long long)arg1 withActionResultString:(id)arg2;
- (void)onMicSwitchAtion:(unsigned long long)arg1;
- (void)onAnchorMicAtion:(unsigned long long)arg1 withUsername:(id)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)onAnchorMicClose:(id)arg1;
- (void)onAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(id)arg2 active:(BOOL)arg3;
- (void)onAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(id)arg2;
- (void)onAnchorMicFocusingAction:(unsigned long long)arg1 userIndex:(long long)arg2;
- (void)onRedPacketAction:(unsigned long long)arg1;
- (void)onClapAction;
- (void)onScreenSharingAction:(long long)arg1 fileType:(id)arg2 duration:(double)arg3;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onGameLiveAction:(id)arg1;
- (void)onPromotionReplaySettingAction:(id)arg1;
- (void)onSetRecommendAction:(id)arg1;
- (void)onAnchorCommentAction:(unsigned long long)arg1 dicActionResult:(id)arg2;
- (void)onAnchorAction:(unsigned long long)arg1 actionResults:(id)arg2;
- (void)onAnchorAction:(unsigned long long)arg1 actionResult:(id)arg2;
- (void)onAnchorBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)onAnchorLiveWeakNetWithContent:(long long)arg1;
- (void)onAnchorLiveClapModeAction:(unsigned long long)arg1;
- (void)onAnchorLiveClapTopicAction:(unsigned long long)arg1 topic:(id)arg2;
- (void)onAnchorLiveClapTopicAction:(unsigned long long)arg1 actionResultDictionary:(id)arg2;
- (void)onAnchorLiveDropGiftAction:(unsigned long long)arg1;
- (void)onAnchorLiveTrafficRewardAction:(unsigned long long)arg1;
- (void)onAnchorLiveFansGroupAction:(long long)arg1;
- (void)onAnchorFansGroupNoticeActionType:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)onAnchorLiveUIComponentShow:(id)arg1;
- (void)onAnchorLiveUIComponentClick:(id)arg1;
- (void)onAnchorFreeMicSwitchUpdated:(BOOL)arg1;
- (id)makeExposeActionCommon;
- (void)onLiveAudioModeAction:(unsigned long long)arg1;
- (void)reportLiveResult:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned long long)arg5 liveNewFansNum:(unsigned int)arg6;
- (void)reportStartLive;
- (void)reportLiveOut:(id)arg1;
- (void)reportCommentTop:(id)arg1 withContent:(id)arg2;
- (void)reportAllComment:(unsigned long long)arg1 andTask:(id)arg2;
- (void)reportLiveScrollActionSheet:(id)arg1 andTask:(id)arg2;
- (void)reportPersonalAction:(unsigned long long)arg1 andUsr:(id)arg2;
- (void)reportFloatBarrageAction:(unsigned int)arg1 barrageType:(unsigned int)arg2;
- (void)reportFinderLiveNewAnchorTaskWithType:(unsigned int)arg1 style:(unsigned int)arg2 anchorTaskId:(id)arg3 targetIndex:(unsigned int)arg4;
- (void)reportFinderLiveNewAnchorTaskElements:(id)arg1 anchorTaskId:(id)arg2 isExpose:(BOOL)arg3;
- (void)reportExchangCamera;
- (void)reportOperaAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)reportMinizaion:(unsigned long long)arg1;
- (void)reportShareGuideExpose;
- (void)reportShareSns:(unsigned long long)arg1;
- (void)reportShareTextSate:(unsigned long long)arg1;
- (void)reportShareSession:(unsigned long long)arg1 andUserArray:(id)arg2;
- (void)reportCommerce:(unsigned long long)arg1 sceneNote:(id)arg2 productId:(unsigned long long)arg3;
- (void)reportCommerceAction:(unsigned long long)arg1 extra:(id)arg2;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2 withSceneNote:(id)arg3 reportExtraInfo:(id)arg4;
- (void)onAnchorLiveGameBehaviorSettingsAction:(id)arg1;
- (void)onAnchorLivePushPromote:(long long)arg1 extra:(id)arg2 userType:(long long)arg3;
- (void)onAnchorLiveCancelPushPromote:(long long)arg1 extra:(id)arg2 userType:(long long)arg3;
- (void)onAnchorLiveLikeMsgNotify:(unsigned int)arg1;
- (void)onAnchorLiveFollowMsgNotify:(unsigned int)arg1;
- (void)onAnchorTopAreaMsgShow;
- (void)reportGiftSwitch:(BOOL)arg1;
- (void)reportLikeSwitch:(BOOL)arg1;
- (void)reportHandoffAction:(unsigned long long)arg1;
- (void)reportPayGameAction:(id)arg1;
- (void)reportPromotionReplaySettingAction:(id)arg1;
- (void)reportSetRecommendAction:(id)arg1;
- (void)notePromoteGoods:(id)arg1 promoteStatus:(BOOL)arg2;
- (void)reportFaceVerify:(unsigned long long)arg1;
- (void)reportLotteryAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)reportAnchorCommentAction:(unsigned long long)arg1 dicActionResult:(id)arg2;
- (void)reportAnchorAction:(unsigned long long)arg1 actionResults:(id)arg2;
- (void)reportAnchorAction:(unsigned long long)arg1 actionResult:(id)arg2;
- (void)reportGiftRankAction:(unsigned long long)arg1;
- (void)reportRedPacketAction:(unsigned long long)arg1;
- (void)reportMicSwitch:(unsigned long long)arg1;
- (void)reportMicAtion:(unsigned long long)arg1;
- (void)reportMicAction:(unsigned long long)arg1 withActionResultValue:(unsigned long long)arg2;
- (void)reportMicAction:(unsigned long long)arg1 withActionResultString:(id)arg2;
- (void)reportAnchorMicAtion:(unsigned long long)arg1 withUsername:(id)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)reportAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(id)arg2 active:(BOOL)arg3;
- (void)reportAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(id)arg2;
- (void)reportAnchorMicFocusingAction:(unsigned long long)arg1 userIndex:(long long)arg2;
- (void)reportClapAction;
- (void)reportBGMusicAction:(long long)arg1 musicIdArr:(id)arg2 aiAssistantInfoId:(id)arg3;
- (unsigned int)getGameTypeReportValueWith:(id)arg1;
- (unsigned int)getGameTypeReportValue;
- (void)reportBeautyContainerActionWithType:(unsigned long long)arg1;
- (id)getBaseBeautyActionDict;
- (void)reportFaceTrackAction;
- (void)_reportFaceTrackAction:(id)arg1 withFaceFeature:(id)arg2 timeStamp:(unsigned long long)arg3;
- (void)_reportFaceTrackAction:(id)arg1 withLandmarks2D:(id)arg2 timeStamp:(unsigned long long)arg3;
- (id)_reportFaceTrackAction:(unsigned long long)arg1 actionResult:(id)arg2 actionTS:(unsigned long long)arg3 liveTask:(id)arg4;
- (void)reportMakeupFilterActionWithType:(unsigned long long)arg1 makeupType:(id)arg2 makeupValue:(float)arg3 makeupFilterVaule:(float)arg4 filterType:(id)arg5 filterValue:(float)arg6;
- (void)reportMakeupActionWithType:(id)arg1 makeupDetail:(id)arg2;
- (void)reportMuteMicAction:(long long)arg1;
- (void)reportPauseAction:(long long)arg1 accumulatedTime:(long long)arg2;
- (void)reportKnowAlertActionWithResult:(unsigned long long)arg1;
- (void)reportScreenSharingAction:(long long)arg1 fileType:(id)arg2 duration:(double)arg3;
- (void)reportBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)reportClipModeAction:(unsigned long long)arg1;
- (void)reportClipTopicAction:(unsigned long long)arg1 topic:(id)arg2 actionResultDictionary:(id)arg3;
- (void)reportFansGroupAction:(long long)arg1;
- (void)reportFansGroupNoticeEditAction:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 reportData:(id)arg3 userType:(long long)arg4;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 extra:(id)arg3 userType:(long long)arg4;
- (void)reportAddQucikReplySuccess:(unsigned long long)arg1;
- (void)reportAnchorFreeMicSwitch:(BOOL)arg1;
- (void)onLiveWishBannerShowWithWishListId:(id)arg1 isGiftWall:(BOOL)arg2;
- (void)onLiveWishBannerClickedWithWishListId:(id)arg1 isGiftWall:(BOOL)arg2;
- (void)onAnchorPlayTogetherAction:(unsigned long long)arg1;
- (void)onAnchorForbidPageAction:(int)arg1 taskId:(id)arg2;
- (void)onAnchorGame3DEntranceAction:(int)arg1 taskId:(id)arg2;
- (void)onAnchorBeautyExtAction:(unsigned long long)arg1 entry:(int)arg2;
- (void)reportAnchorPlayTogetherAction:(unsigned long long)arg1;
- (void)onAnchorShareQRCodeAction:(unsigned long long)arg1;
- (void)onAnchorCameraZoomFocusAction:(unsigned long long)arg1;
- (void)onAnchorLiveScrollActionSheet:(id)arg1 andTask:(id)arg2;
- (void)onLiveAnchorOperationWithActionType:(unsigned long long)arg1 dict:(id)arg2 andTask:(id)arg3;
- (void)reportAnchorCameraZoomFocusAction:(unsigned long long)arg1;
- (void)onAnchorOpenUserProfileAction:(unsigned long long)arg1 withProfileScene:(unsigned long long)arg2 userIdentity:(unsigned long long)arg3 andUserName:(id)arg4;
- (void)onAnchorFloatBarrageAction:(unsigned int)arg1 barrageType:(unsigned int)arg2;
- (void)onAnchorDecorationActionWithDict:(id)arg1;
- (void)onAnchorVisionEffectActionWithDict:(id)arg1;
- (void)reportAnchorOpenUserProfileAction:(unsigned long long)arg1 withProfileScene:(unsigned long long)arg2 userIdentity:(unsigned long long)arg3 andUserName:(id)arg4;
- (void)reportAnchorLiveSongAction:(unsigned long long)arg1;
- (void)reportAnchorLiveSongAction:(unsigned long long)arg1 songName:(id)arg2 heartValue:(id)arg3;
- (void)reportAnchorAdjustCommentAreaStyle:(unsigned long long)arg1;
- (void)onAnchorAudioRoomConnectMicSettingAction:(unsigned long long)arg1 username:(id)arg2;
- (void)onReportLiveScrollActionSheet:(id)arg1 andTask:(id)arg2;
- (void)reportAudioRoomConnectMicSettingAction:(unsigned long long)arg1 username:(id)arg2;
- (void)onAnchorAudioRoomLocationGuideAction:(unsigned long long)arg1 isShow:(BOOL)arg2 isAuth:(BOOL)arg3;
- (void)onAnchorAudioRoomLocationAuthAction:(BOOL)arg1 isAuth:(BOOL)arg2;
- (id)reportStructWithFinderLiveTask:(id)arg1 actionType:(unsigned long long)arg2 actionResult:(id)arg3;
- (id)reportStructWithFinderLiveTask:(id)arg1 actionType:(unsigned long long)arg2;
- (void)reportDropGiftAction:(unsigned long long)arg1;
- (void)reportLiveAudioModeAction:(unsigned long long)arg1;
- (void)reportTrafficRewardAction:(unsigned long long)arg1;
- (void)reportAnchorRedDotActionWithDict:(id)arg1;
- (void)reportAnchorDecorationActionWithDict:(id)arg1;
- (void)reportAnchorVisionEffectActionWithDict:(id)arg1;
- (void)reportAnchorGiftWallActionWithDict:(id)arg1;
- (void)onLiveStickerAction:(id)arg1;
- (void)reportStickerAction:(id)arg1;
- (void)onLivePromotingBannerAction:(id)arg1;
- (void)reportPromotingBannerAction:(id)arg1;
- (void)onRecordLiveAction:(id)arg1;
- (void)reportRecordLiveAction:(id)arg1;
- (void)onRecordLivePIPAction:(id)arg1;
- (void)reportRecordLivePIPAction:(id)arg1;
- (void)reportCloseLiveGuideAction:(id)arg1;
- (void)reportQuickNoticeCreateHintAction:(id)arg1;
- (void)reportKTVRequestSongPanelEntryAction:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)reportKTVRequestSongPanelAction:(unsigned long long)arg1 element:(unsigned long long)arg2 boardItem:(id)arg3 subBoardItem:(id)arg4 songItem:(id)arg5;
- (void)reportKTVRequestedSongEntryAction:(unsigned long long)arg1;
- (void)reportKTVRequestedSongPanelAction:(unsigned long long)arg1 element:(unsigned long long)arg2 tab:(unsigned long long)arg3 pos:(unsigned long long)arg4 songItem:(id)arg5;
- (void)reportKTVAudioEffectOperatingPanelExpose:(id)arg1;
- (void)reportKTVAudioEffectOperatingPanelDismiss:(id)arg1;
- (void)reportLightSafetyNotiAction:(id)arg1;
- (void)reportAnchorNoticeAction:(BOOL)arg1 hasNotice:(BOOL)arg2;
- (void)reportAnchorPlatformNoticeComment:(BOOL)arg1 isGrowthCard:(BOOL)arg2;
- (void)reportAnchorAiAssistantAction:(unsigned long long)arg1 info:(id)arg2 pushTime:(unsigned int)arg3;
- (void)reportLiveAnchorOperationWithActionType:(unsigned long long)arg1 dict:(id)arg2 andTask:(id)arg3;
- (void).cxx_destruct;
@end
