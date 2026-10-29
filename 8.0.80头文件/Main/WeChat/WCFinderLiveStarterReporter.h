@interface WCFinderLiveStarterReporter : NSObject
{
    WCFinderLiveStarterStruct * _bean; // +0x8
    BOOL _isFrontCamera; // +0x10
    unsigned long long _enterUITimeMs; // +0x18
    unsigned long long _ruleType; // +0x20
    unsigned long long _coverType; // +0x28
    NSString * _description; // +0x30
    NSString * _poiJson; // +0x38
    BOOL _hadCancelTimer; // +0x40
}
+ (unsigned long long)liveModeTypeWithStarterModeItem:(id)arg1;
+ (unsigned long long)currentLiveModeType;
+ (void)reportStartPrecheckResultWith:(unsigned long long)arg1;
+ (void)reportStartFinalResultWithStepExtInfo:(id)arg1;
+ (void)reportSimpleStartLiveStep:(unsigned long long)arg1;
+ (void)reportStartLiveStep:(unsigned long long)arg1 stepExtInfo:(id)arg2;
+ (void)realReportStartLiveStep:(unsigned long long)arg1 entrance:(unsigned long long)arg2 entranceId:(unsigned long long)arg3 stepExtInfo:(id)arg4;
+ (void)reportProfileLiveBtnExpose;
+ (void)reportProfileLiveBtnClick;
+ (void)reportProfileMenuLiveBtnClick;
+ (void)reportLiveAfterAbnormal:(id)arg1 startExtraInfo:(id)arg2;
+ (void)reportCoverEnhanceAction:(id)arg1;
+ (void)reportKTVRedDot:(long long)arg1 redDotId:(id)arg2 source:(unsigned long long)arg3 refSource:(unsigned long long)arg4;
+ (void)reportSquareChat:(unsigned int)arg1 pullSource:(unsigned long long)arg2 action:(unsigned long long)arg3;
+ (void)reportSquareChatElement:(unsigned int)arg1 pullSource:(unsigned long long)arg2 isExpose:(BOOL)arg3;
+ (void)reportClickStartLive:(unsigned int)arg1 pullSource:(unsigned long long)arg2;
+ (void)reportGroupLiveHalfScreenType:(unsigned long long)arg1 elementName:(id)arg2 elementStrategyType:(unsigned int)arg3;
+ (void)setChatRoomContactIdList:(id)arg1 ContactUsernameList:(id)arg2;
+ (unsigned long long)getStartVisiableCount;
+ (void)setStartSourceScene:(unsigned long long)arg1;
+ (unsigned long long)getStartSourceScene;
+ (void)setStartEntrance:(unsigned long long)arg1;
+ (unsigned long long)getStartEntrance;
+ (void)setStartAuthMethod:(unsigned int)arg1;
+ (unsigned int)getStartAuthMethod;
+ (void)setEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getEntranceId;
+ (void)setGroupFinderLiveEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getGroupFinderLiveEntranceId;
+ (void)setWAGameLiveEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getWAGameLiveEntranceId;
+ (void)setFinderProfileLiveEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getFinderProfileLiveEntranceId;
+ (id)_LogStrFromReportStruct:(id)arg1 actionType:(unsigned long long)arg2 actionJSON:(id)arg3 connectCount:(unsigned long long)arg4 connectTime:(unsigned long long)arg5 chnlExtra:(id)arg6 liveModeType:(unsigned long long)arg7;
- (void)reportLiveSimpleModePubbleGuide:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)reportEnterLiveStarterVC:(unsigned long long)arg1 startExtraInfo:(id)arg2 extraInfo:(id)arg3;
- (void)reportStartLive:(unsigned long long)arg1 liveTask:(id)arg2 startExtraInfo:(id)arg3;
- (void)reportRule:(unsigned long long)arg1;
- (void)repoortLiveThemeGuideWithActionDic:(id)arg1;
- (void)repoortLiveNoticeReminderWithActionType:(unsigned long long)arg1 actionDic:(id)arg2;
- (void)repoortSwitchLiveModeWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)repoortRedPacketRoomSelect:(unsigned long long)arg1;
- (void)reportCommerce;
- (void)reportBeautyContainerActionWithType:(unsigned long long)arg1;
- (void)reportMakeupFilterActionWithType:(long long)arg1 makeupType:(id)arg2 makeupValue:(float)arg3 makeupFilterVaule:(float)arg4 filterType:(id)arg5 filterValue:(float)arg6;
- (void)reportMakeupActionWithType:(id)arg1 makeupDetail:(id)arg2;
- (void)reportEditCover:(unsigned long long)arg1;
- (void)reportEditGameLiveCover:(unsigned long long)arg1;
- (void)updateLastEditLiveCoverType:(unsigned long long)arg1;
- (void)reportEditLiveCoverEntrance:(unsigned long long)arg1;
- (void)reportMicSwitch:(BOOL)arg1;
- (void)reportGiftSwitch:(BOOL)arg1;
- (void)reportLikeSwitch:(BOOL)arg1;
- (void)reportCancelTimerWithLiveTask:(id)arg1 startExtraInfo:(id)arg2;
- (void)reportMMLiveStartFinishedStream:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)reportMMLiveStartFinishedResult:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (id)getBeautyDecorationResultString;
- (id)getBeautyVisionEffectResultString;
- (id)getBeautyResultString;
- (void)reportStartResult:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 idUnit:(id)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 idUnits:(id)arg2;
- (void)onFinderLiveAddGoodsButtonClicked:(id)arg1 withSceneNote:(id)arg2;
- (void)onFinderLiveGoodsItemSelected:(id)arg1 sceneNote:(id)arg2 shopContext:(id)arg3;
- (void)onLotteryTypeSelected:(BOOL)arg1;
- (void)reportShopSettingsItemExpose:(unsigned int)arg1;
- (void)reportShopSettingsItemClick:(unsigned int)arg1;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2 withSceneNote:(id)arg3;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2 withSceneNote:(id)arg3 reportExtraInfo:(id)arg4;
- (id)replaceCommaToSemicolon:(id)arg1;
- (void)reportBGMusicAction:(long long)arg1 musicIdArr:(id)arg2;
- (void)reportBGMusicWithAction:(unsigned long long)arg1 tab:(unsigned int)arg2 listenId:(id)arg3 aiAssistantId:(id)arg4;
- (void)reportBGMusicPlayWithAction:(unsigned long long)arg1 listenId:(id)arg2 playId:(unsigned long long)arg3 playDuration:(unsigned long long)arg4;
- (void)reportAnchorLiveNewSongPanelAction:(unsigned long long)arg1 songItems:(id)arg2 listOrder:(unsigned long long)arg3;
- (void)reportAnchorLiveNewSongRequestPanelAction:(unsigned long long)arg1 boardItem:(id)arg2 subBoardItem:(id)arg3 songItem:(id)arg4;
- (void)reportAnchorLiveNewSongPlayAction:(unsigned long long)arg1 songItem:(id)arg2 playDuration:(unsigned int)arg3 playId:(id)arg4;
- (void)reportFinderLiveToGamePayActionType:(id)arg1;
- (void)reportFinderLiveSetRecommend:(id)arg1;
- (void)reportFinderLiveToGameActionType:(unsigned long long)arg1;
- (void)reportFinderLiveToGameActionType:(unsigned long long)arg1 params:(id)arg2;
- (void)reportFinderRecordLiveAction:(unsigned long long)arg1;
- (void)reportFinderLiveNewAnchorTaskWithType:(unsigned int)arg1 style:(unsigned int)arg2 anchorTaskId:(id)arg3 targetIndex:(unsigned int)arg4;
- (void)reportGameLiveOperationAction:(unsigned long long)arg1 activityid:(id)arg2 params:(id)arg3;
- (void)reportGameLiveToFinderActionType:(unsigned long long)arg1;
- (void)reportMuteMicAction:(long long)arg1;
- (void)reportMiniGameAction:(unsigned long long)arg1 result:(id)arg2;
- (void)reportFansGroupAction:(long long)arg1;
- (void)reportFansGroupNoticeEditAction:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 extra:(id)arg3 userType:(long long)arg4;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 reportData:(id)arg3;
- (void)reportBeautyExtAction:(unsigned long long)arg1 entry:(int)arg2;
- (void)reportCommonButtonAction:(unsigned long long)arg1 event:(unsigned long long)arg2 customParameterMap:(id)arg3;
- (void)reportLiveAudioModeAction:(unsigned long long)arg1;
- (void)reportLiveStarterOperation:(id)arg1;
- (void)reportRedDotEventWithDict:(id)arg1;
- (void)reportLiveStickerOperation:(id)arg1;
- (void)reportLiveStarterMinimizeEvent:(unsigned long long)arg1;
- (void)reportFinderLiveCreatLiveGuidePanelAction:(unsigned long long)arg1 createLivePageMode:(long long)arg2 showTopicGuide:(BOOL)arg3 showPOIGuide:(BOOL)arg4;
- (id)_logStrWithActionType:(unsigned long long)arg1 actionJSON:(id)arg2 connectCount:(unsigned long long)arg3 connectTime:(unsigned long long)arg4 chnlExtra:(id)arg5;
- (void)reportAnchorLiveStarterActionType:(unsigned long long)arg1 dict:(id)arg2;
- (void)reportEnableCameraSheetActionType:(unsigned long long)arg1 enterSource:(unsigned long long)arg2;
- (void)reportPreparePageAnnouncementActionType:(unsigned long long)arg1 announcementId:(id)arg2 announcementType:(unsigned long long)arg3;
- (void)reportNewLiveAgreementAction:(unsigned long long)arg1;
- (void)reportAgreementAction:(unsigned long long)arg1 realnameVerified:(BOOL)arg2;
- (void)reportMoreActionGuideExpose;
- (void)reportUpdateMicTopic:(id)arg1;
- (void).cxx_destruct;
@end
