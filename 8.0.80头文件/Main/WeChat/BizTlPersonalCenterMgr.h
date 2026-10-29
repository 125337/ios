@interface BizTlPersonalCenterMgr : MMUserService <WCPayLogicMgrExt, MMLimitedModeExt, MMServiceProtocol>
{
    BOOL _usingBizAsInteractiveIdentity; // +0x8
    BOOL _initFlag; // +0x9
    BOOL _shouldShowNotifyReddotOnChat; // +0xa
    BOOL _usingPhotoAccountAsInteractiveIdentity; // +0xb
    BOOL _photoAccountInitFlag; // +0xc
    BOOL _interactiveIdentityEnable; // +0xd
    BOOL _meTabEntranceEnable; // +0xe
    BOOL _meTabEntranceWithoutAcctEnable; // +0xf
    BOOL _serverEnableArticleNativeEditor; // +0x10
    unsigned int _banType; // +0x14
    unsigned int _fansNum; // +0x18
    unsigned int _verifyFlag; // +0x1c
    unsigned int _notifyUpdateTimestamp; // +0x20
    unsigned int _photoAccountBanType; // +0x24
    unsigned int _photoAccountFansNum; // +0x28
    unsigned int _photoAccountVerifyFlag; // +0x2c
    int _sessionId; // +0x30
    unsigned int _chatNotifyReddotCleanTime; // +0x34
    NSString * _personalCenterBiz; // +0x38
    NSString * _bizUsername; // +0x40
    NSString * _bizNickname; // +0x48
    NSString * _bizHeadImgUrl; // +0x50
    NSString * _banUrl; // +0x58
    AcctResp * _bizResp; // +0x60
    long long _notifyCount; // +0x68
    id <BizTlPersonalCenterMgrRegisterExt> _registerExt; // +0x70
    NSString * _photoAccountBiz; // +0x78
    NSString * _photoAccountUsername; // +0x80
    NSString * _photoAccountNickname; // +0x88
    NSString * _photoAccountHeadImgUrl; // +0x90
    NSString * _photoAccountBanUrl; // +0x98
    AcctResp * _photoResp; // +0xa0
    FinderPersonalCenterParams * _finderParams; // +0xa8
    NSMutableArray * _groupCellList; // +0xb0
    MemoryMappedKV * _mmkv; // +0xb8
    OriginalPictureStrategy * _originalPictureStrategy; // +0xc0
    unsigned long long _draftReminderCheckGeneration; // +0xc8
}
- (void)onServiceInit;
- (BOOL)enableArticleNativeEditor;
- (void)setupIamEvents;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (unsigned int)updateSessionId;
- (void)resetSessionId;
- (id)getPersonalCenterTabInfo;
- (void)selectGroupIndex:(long long)arg1 cellIndex:(long long)arg2 viewController:(id)arg3;
- (void)jumpToMyBizList:(id)arg1;
- (void)openSubscribeAccountList:(id)arg1 bizType:(int)arg2 source:(unsigned long long)arg3;
- (void)openSubscribeAccountList:(id)arg1 bizType:(int)arg2 source:(unsigned long long)arg3 initialTab:(long long)arg4;
- (void)openBrsSubscribeAccountList:(id)arg1 source:(unsigned long long)arg2;
- (void)openBrsSubscribeAccountList:(id)arg1 source:(unsigned long long)arg2 initialTab:(long long)arg3;
- (void)jumpToRecentReading;
- (void)jumpToNotify;
- (void)jumpToSetting;
- (void)jumpToWeb:(id)arg1;
- (void)jumpToWxa:(id)arg1;
- (id)convertToPersonalCenterTabInfo;
- (BOOL)triggerRedline:(id)arg1;
- (id)getNewDynamicList;
- (void)filterDataSource:(id)arg1;
- (BOOL)checkCellInfoAvaliable:(id)arg1;
- (void)report27213:(unsigned int)arg1 scene:(unsigned int)arg2;
- (void)report27213:(unsigned int)arg1 scene:(unsigned int)arg2 redPointNum:(unsigned int)arg3 biz:(id)arg4 hasSmallPoint:(BOOL)arg5 enterFromNotifyTips:(unsigned int)arg6 wording:(id)arg7;
- (id)getExtraParamInfoWithInfoList:(id)arg1 picFromScene:(long long)arg2 appId:(id)arg3 wxaData:(id)arg4 bizType:(unsigned int)arg5 biz:(id)arg6;
- (id)generateBasicNativeExtraData:(unsigned int)arg1 biz:(id)arg2;
- (id)generatePhotoSwitch;
- (id)processImageIfNeeded:(id)arg1;
- (id)getImageItemInfoForItem:(id)arg1 appId:(id)arg2;
- (id)getImageItemLivePhotoExtraInfoForItem:(id)arg1 appId:(id)arg2;
- (id)copyOriginFileToWxfile:(id)arg1 appId:(id)arg2;
- (void)selectPhotoAndJumpToPluginAppJumpInfo:(id)arg1 viewController:(id)arg2 limit:(long long)arg3;
- (void)openPersonalCenterMiniAppPageJumpInfo:(id)arg1 handlerWrapper:(id)arg2 finishCallback:(id /* block */)arg3;
- (void)onPersonalCenterLogin:(id)arg1;
- (void)updateBizIdentityInfo;
- (id)covertBizSelectImgInfoToPersonalCenterPhotoInfo:(id)arg1;
- (BOOL)usingBizAsInteractiveIdentity;
- (BOOL)usingPhotoAccountAsInteractiveIdentity;
- (void)onPersonalCenterLogout:(id)arg1;
- (void)updateBizResp;
- (void)onPhotoAccountLogin:(id)arg1;
- (void)updatePhotoAccountIdentityInfo;
- (void)onPhotoAccountLogout:(id)arg1;
- (void)updatePhotoResp;
- (void)getWeAppContactWithAppid:(id)arg1;
- (id)getPersonalCenterBiz;
- (void)getRemotePersonalCenterBiz:(id /* block */)arg1;
- (void)getRemotePhotoAccountBiz:(id /* block */)arg1;
- (id)getPhotoAccountBiz;
- (void)updatePersonalCenterReddotInfo:(id)arg1;
- (BOOL)canShowBizCreatorCenter;
- (long long)getPersonalCenterNotifyCount;
- (unsigned int)getPersonalCenterReddotUpdateTimestamp;
- (void)cleanChatNotifyReddot;
- (void)writeDraftData:(long long)arg1 draftData:(id)arg2 sceneMd5:(id)arg3 bizType:(int)arg4;
- (void)readDraftData:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3 completion:(id /* block */)arg4;
- (void)clearDraftData:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3 includeNative:(BOOL)arg4;
- (void)readNativeDraftData:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3 completion:(id /* block */)arg4;
- (BOOL)draftExist:(long long)arg1 bizType:(int)arg2;
- (BOOL)draftExist:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3 launchScene:(int)arg4;
- (BOOL)checkUseDraft:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3;
- (BOOL)checkUseDraft:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3 launchScene:(int)arg4;
- (id)pathOfDraft:(long long)arg1 sceneMd5:(id)arg2 bizType:(int)arg3;
- (BOOL)isBizValid;
- (BOOL)isPhotoAccountValid;
- (void)checkRemoteBizAndPhotoBizAcct:(id /* block */)arg1;
- (void)checkBizAndPhotoBizAcct:(id /* block */)arg1;
- (void)checkHasFinishRegisterAndLogin:(id)arg1;
- (void)handleResp:(id)arg1 photoAcctResp:(id)arg2;
- (void)clearRegisterExtState;
- (void)openPublishImage:(id)arg1 taskInfo:(id)arg2 useDraft:(BOOL)arg3 viewController:(id)arg4 handlerWrapper:(id)arg5 finishCallback:(id /* block */)arg6;
- (void)openPersonalCenterMiniAppPage:(id)arg1 taskInfo:(id)arg2 handlerWrapper:(id)arg3 finishCallback:(id /* block */)arg4 launchInfo:(id)arg5;
- (id)getImageRealPathFromDic:(id)arg1;
- (void)openRegister;
- (BOOL)shouldShowEntryAtMineTab;
- (void)refreshMeTabStrategy;
- (void)queryCtrlInfoAndFetchMeTabRedPoint;
- (BOOL)shouldShowPhotoWorks;
- (void)onReceiveMeTabRedPointInfo:(optional<NSData *>)arg1;
- (void)disposeMeTabRedPoint:(id)arg1 scene:(unsigned long long)arg2;
- (void)addMeTabPhotoEduRedDotIfNeed;
- (id)meTabPhotoEduRedDotTitleKey;
- (void)addMeTabPhotoEduRed;
- (void)removeOrChangeMeTabPhotoEduRedDotIfNeed;
- (void)checkPhotoMeTabEduRedDotState;
- (BOOL)hasBizAccount;
- (BOOL)hasFinderAccount;
- (BOOL)hasPhotoAccount;
- (id)mmkv;
- (BOOL)canCreateBizPhoto;
- (BOOL)canCreatePhotoAcct;
- (BOOL)canCreateBizAcct;
- (id)getCanCreateBizPhotoValue;
- (void)clearAllClientExpItemValues;
- (void)putClientExpItemValue:(id)arg1 value:(id)arg2;
- (id)getClientExpItemValue:(id)arg1 defaultValue:(id)arg2;
- (BOOL)hasClientExpItemValue:(id)arg1;
- (id)getOriginalPictureStrategy;
- (id)getAllBiz;
- (id)buildAcctRespJson:(id)arg1;
- (id)getPersonalCenterBizWithServiceProxyType:(int)arg1;
- (void)turnOnCreateBizPhotoAndFetchMeTabStrategy;
- (void)pushToPhotoWorksPage:(id)arg1;
- (void)pushToPhotoWorksPage:(id)arg1 fromWorksEntry:(BOOL)arg2;
- (void)redDotReportAction;
- (id)makeRedDotInfo;
- (id)makeFinderRedDotInfo;
- (void)initPhotosWorkEnvironment;
- (void)updateFinderPersonalCenterParams;
- (void)report37479:(int)arg1 hasRedDot:(BOOL)arg2 timeStamp:(long long)arg3 redDotType:(int)arg4 redDotContent:(id)arg5 redDotId:(id)arg6 hasInteractiveRedDot:(BOOL)arg7 interactiveRedDotCnt:(int)arg8;
- (void)reportMeTabPhotoWorkWithAction:(int)arg1 timeStamp:(long long)arg2;
- (void)reportMeTabPhotoWorkExposure;
- (void)reportMeTabPhotoWorkClick:(long long)arg1;
- (id)handledKeyForIdentity:(id)arg1;
- (BOOL)isIdentityHandled:(id)arg1;
- (void)markIdentityHandled:(id)arg1;
- (BOOL)isReminderCtrl:(id)arg1 tipsUuid:(id)arg2;
- (unsigned long long)draftReminderState;
- (void)transitionToShowingWithBizType:(unsigned long long)arg1 tipsUuid:(id)arg2;
- (void)transitionToIdle;
- (void)loadDraftCandidate:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)showReminder:(id)arg1;
- (void)handleCandidates:(id)arg1 generation:(unsigned long long)arg2;
- (id)draftPresenceMMKV;
- (void)checkDraftReminderState;
- (unsigned long long)consumeReminderBizType;
- (void)onWorksEntryRedDotUpdated:(int)arg1 wording:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)genMeTabDSLRenderWithText:(id)arg1 withRedDot:(BOOL)arg2;
- (void)disposeWorksEntryRedDot;
- (void)disposeWorksEntryRightRedDot;
- (void)onLimitedModeChanged;
- (id)personalCenterBiz;
- (void)setPersonalCenterBiz:(id)arg1;
- (void)setUsingBizAsInteractiveIdentity:(BOOL)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)bizNickname;
- (void)setBizNickname:(id)arg1;
- (id)bizHeadImgUrl;
- (void)setBizHeadImgUrl:(id)arg1;
- (BOOL)initFlag;
- (void)setInitFlag:(BOOL)arg1;
- (unsigned int)banType;
- (void)setBanType:(unsigned int)arg1;
- (unsigned int)fansNum;
- (void)setFansNum:(unsigned int)arg1;
- (id)banUrl;
- (void)setBanUrl:(id)arg1;
- (unsigned int)verifyFlag;
- (void)setVerifyFlag:(unsigned int)arg1;
- (id)bizResp;
- (void)setBizResp:(id)arg1;
- (unsigned int)notifyUpdateTimestamp;
- (void)setNotifyUpdateTimestamp:(unsigned int)arg1;
- (long long)notifyCount;
- (void)setNotifyCount:(long long)arg1;
- (BOOL)shouldShowNotifyReddotOnChat;
- (void)setShouldShowNotifyReddotOnChat:(BOOL)arg1;
- (id)registerExt;
- (void)setRegisterExt:(id)arg1;
- (id)photoAccountBiz;
- (void)setPhotoAccountBiz:(id)arg1;
- (void)setUsingPhotoAccountAsInteractiveIdentity:(BOOL)arg1;
- (id)photoAccountUsername;
- (void)setPhotoAccountUsername:(id)arg1;
- (id)photoAccountNickname;
- (void)setPhotoAccountNickname:(id)arg1;
- (id)photoAccountHeadImgUrl;
- (void)setPhotoAccountHeadImgUrl:(id)arg1;
- (BOOL)photoAccountInitFlag;
- (void)setPhotoAccountInitFlag:(BOOL)arg1;
- (unsigned int)photoAccountBanType;
- (void)setPhotoAccountBanType:(unsigned int)arg1;
- (unsigned int)photoAccountFansNum;
- (void)setPhotoAccountFansNum:(unsigned int)arg1;
- (id)photoAccountBanUrl;
- (void)setPhotoAccountBanUrl:(id)arg1;
- (unsigned int)photoAccountVerifyFlag;
- (void)setPhotoAccountVerifyFlag:(unsigned int)arg1;
- (id)photoResp;
- (void)setPhotoResp:(id)arg1;
- (id)finderParams;
- (void)setFinderParams:(id)arg1;
- (id)groupCellList;
- (void)setGroupCellList:(id)arg1;
- (int)sessionId;
- (void)setSessionId:(int)arg1;
- (unsigned int)chatNotifyReddotCleanTime;
- (void)setChatNotifyReddotCleanTime:(unsigned int)arg1;
- (BOOL)interactiveIdentityEnable;
- (void)setInteractiveIdentityEnable:(BOOL)arg1;
- (BOOL)meTabEntranceEnable;
- (void)setMeTabEntranceEnable:(BOOL)arg1;
- (BOOL)meTabEntranceWithoutAcctEnable;
- (void)setMeTabEntranceWithoutAcctEnable:(BOOL)arg1;
- (BOOL)serverEnableArticleNativeEditor;
- (void)setServerEnableArticleNativeEditor:(BOOL)arg1;
- (void)setMmkv:(id)arg1;
- (id)originalPictureStrategy;
- (void)setOriginalPictureStrategy:(id)arg1;
- (unsigned long long)draftReminderCheckGeneration;
- (void)setDraftReminderCheckGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
