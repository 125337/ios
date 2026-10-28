@interface BizTlPersonalCenterMgr : MMUserService <WCPayLogicMgrExt, MMServiceProtocol>
{
    BOOL _usingBizAsInteractiveIdentity; // +0x8
    BOOL _initFlag; // +0x9
    BOOL _shouldShowNotifyReddotOnChat; // +0xa
    BOOL _interactiveIdentityEnable; // +0xb
    unsigned int _banType; // +0xc
    unsigned int _fansNum; // +0x10
    unsigned int _notifyUpdateTimestamp; // +0x14
    int _sessionId; // +0x18
    unsigned int _chatNotifyReddotCleanTime; // +0x1c
    NSString * _personalCenterBiz; // +0x20
    NSString * _bizUsername; // +0x28
    NSString * _bizNickname; // +0x30
    NSString * _bizHeadImgUrl; // +0x38
    NSString * _banUrl; // +0x40
    long long _notifyCount; // +0x48
    id <BizTlPersonalCenterMgrRegisterExt> _registerExt; // +0x50
    NSMutableArray * _groupCellList; // +0x58
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateSessionId;
- (void)resetSessionId;
- (id)getPersonalCenterTabInfo;
- (void)selectGroupIndex:(long long)arg1 cellIndex:(long long)arg2 viewController:(id)arg3;
- (void)jumpToMyBizList:(id)arg1;
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
- (void)report27213:(unsigned int)arg1 scene:(unsigned int)arg2 redPointNum:(unsigned int)arg3 biz:(id)arg4 hasSmallPoint:(BOOL)arg5;
- (id)getExtraParamInfoWithInfoList:(id)arg1 picFromScene:(long long)arg2 appId:(id)arg3 wxaData:(id)arg4;
- (id)getImageItemInfoForItem:(id)arg1 appId:(id)arg2;
- (id)getImageItemLivePhotoExtraInfoForItem:(id)arg1 appId:(id)arg2;
- (void)selectPhotoAndJumpToPluginAppJumpInfo:(id)arg1 viewController:(id)arg2 limit:(long long)arg3;
- (void)openPersonalCenterMiniAppPageJumpInfo:(id)arg1 handlerWrapper:(id)arg2;
- (void)onPersonalCenterLogin:(id)arg1;
- (void)updateBizIdentityInfo;
- (id)covertBizSelectImgInfoToPersonalCenterPhotoInfo:(id)arg1;
- (BOOL)usingBizAsInteractiveIdentity;
- (void)onPersonalCenterLogout:(id)arg1;
- (void)getWeAppContactWithAppid:(id)arg1;
- (id)getPersonalCenterBiz;
- (void)getRemotePersonalCenterBiz:(id /* block */)arg1;
- (void)updatePersonalCenterReddotInfo:(id)arg1;
- (BOOL)canShowBizCreatorCenter;
- (long long)getPersonalCenterNotifyCount;
- (unsigned int)getPersonalCenterReddotUpdateTimestamp;
- (void)cleanChatNotifyReddot;
- (void)writeDraftData:(long long)arg1 draftData:(id)arg2 sceneMd5:(id)arg3;
- (void)readDraftData:(long long)arg1 sceneMd5:(id)arg2 completion:(id /* block */)arg3;
- (void)clearDraftData:(long long)arg1 sceneMd5:(id)arg2;
- (BOOL)draftExist:(long long)arg1;
- (BOOL)draftExist:(long long)arg1 sceneMd5:(id)arg2;
- (BOOL)checkUseDraft:(long long)arg1 sceneMd5:(id)arg2;
- (id)pathOfDraft:(long long)arg1 sceneMd5:(id)arg2;
- (void)checkHasFinishRegisterAndLogin:(id)arg1;
- (void)handleResp:(id)arg1;
- (void)clearRegisterExtState;
- (void)openPublishImage:(id)arg1 taskInfo:(id)arg2 useDraft:(BOOL)arg3 viewController:(id)arg4 handlerWrapper:(id)arg5;
- (void)openPersonalCenterMiniAppPage:(id)arg1 taskInfo:(id)arg2 handlerWrapper:(id)arg3;
- (id)getImageRealPathFromDic:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)openRegister;
- (BOOL)shouldShowEntryAtMineTab;
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
- (unsigned int)notifyUpdateTimestamp;
- (void)setNotifyUpdateTimestamp:(unsigned int)arg1;
- (long long)notifyCount;
- (void)setNotifyCount:(long long)arg1;
- (BOOL)shouldShowNotifyReddotOnChat;
- (void)setShouldShowNotifyReddotOnChat:(BOOL)arg1;
- (id)registerExt;
- (void)setRegisterExt:(id)arg1;
- (id)groupCellList;
- (void)setGroupCellList:(id)arg1;
- (int)sessionId;
- (void)setSessionId:(int)arg1;
- (unsigned int)chatNotifyReddotCleanTime;
- (void)setChatNotifyReddotCleanTime:(unsigned int)arg1;
- (BOOL)interactiveIdentityEnable;
- (void)setInteractiveIdentityEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
