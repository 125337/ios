@interface MMLimitedModeMgr : MMUserService <IOplogExt, IUpdateProfileMgrExt, IMsgExt, MMServiceProtocol>
{
    MMLimitedModeDataPB * m_limitedModeData; // +0x8
    BOOL _isLimitedModeOn; // +0x10
    BOOL _isChangingSwitch; // +0x11
    BOOL _isChangingLevel; // +0x12
    BOOL _syncSwitch; // +0x13
    long long _finderBizLevel; // +0x18
    long long _weappBizLevel; // +0x20
    long long _brandBizLevel; // +0x28
    long long _emoticonLevel; // +0x30
    long long _recentEntryScene; // +0x38
    long long _syncBizType; // +0x40
    long long _syncLevel; // +0x48
}
+ (long long)finderLimitModeLevel;
+ (BOOL)isFinderLimitModeLevelAllow;
+ (BOOL)isFinderLimitModeLevelBlock;
+ (BOOL)isFinderLimitModeLevelLimited;
+ (BOOL)isFinderNearbyLimitModeLevelAllow;
+ (BOOL)isFinderLiveLimitModeLevelAllow;
- (void)reportBindGuardianAction:(unsigned int)arg1 stepAction:(unsigned int)arg2 roleCode:(unsigned int)arg3 targetUserName:(id)arg4;
- (void)reportAuthorizeAction:(unsigned int)arg1 roleCode:(unsigned int)arg2 requestType:(unsigned int)arg3 requestID:(id)arg4 requestResource:(id)arg5 requestResourceExtra:(id)arg6;
- (void)reportAuthorizeAction:(unsigned int)arg1 roleCode:(unsigned int)arg2 requestID:(id)arg3 bizType:(unsigned int)arg4 accessMessage:(id)arg5;
- (void)doReportAuthorizeAction:(unsigned int)arg1 roleCode:(unsigned int)arg2 requestID:(id)arg3 bizType:(unsigned int)arg4 accessMessage:(id)arg5;
- (unsigned int)getRequestTypeWithBizType:(unsigned int)arg1;
- (id)getRequestResourceWithBizType:(unsigned int)arg1 accessMessage:(id)arg2;
- (id)getRequestResourceExtraWithBizType:(unsigned int)arg1 accessMessage:(id)arg2;
- (void)onServiceInitInGuardian;
- (void)clickLimitedModeMessageCell:(id)arg1 viewController:(id)arg2;
- (void)showLimitedModeBindGuardian:(id)arg1 viewController:(id)arg2;
- (void)showLimitedModeAuthorizeRequest:(id)arg1 viewController:(id)arg2;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 inView:(id)arg4;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 actionButtonTitle:(id)arg4 inView:(id)arg5;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 inView:(id)arg4 block:(id /* block */)arg5;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 inView:(id)arg4 actionButtonTitle:(id)arg5 block:(id /* block */)arg6;
- (BOOL)checkIsRequestBindGuardianValid:(id)arg1;
- (BOOL)checkIsRequestAuthorizeValid:(id)arg1;
- (BOOL)checkIsRequestAuthorizeAgreenAuthorizationValid:(id)arg1;
- (BOOL)checkIsQuestTimeValid:(unsigned int)arg1;
- (void)deleteExpiredAuthorizeAgreen;
- (void)deleteExpiredBecomeGuardianInfo;
- (BOOL)checkAccessAuthorizationHadApproveWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)saveAgreenAuthorizationInfo:(id)arg1;
- (void)saveBecomeGuardianInfo:(id)arg1;
- (BOOL)checkHadGuardian;
- (id)getLimitedModeAuthorizeRequestDisplayViewController:(id)arg1;
- (id)getLimitedModeGuardianSetAuthorizationWaitViewController;
- (unsigned int)getAntiAddictInterval;
- (id)getAccessAuthorizationSendDesc:(unsigned int)arg1;
- (id)getAccessAuthorizationSendAgreenDesc:(unsigned int)arg1;
- (id)getAccessAuthorizationSendInvalidAgreenDesc:(unsigned int)arg1;
- (id)getAccessAuthorizationAcceptTitle:(id)arg1;
- (id)getAccessAuthorizationTitle:(unsigned int)arg1;
- (id)getAccessAuthorizationAcceptDesc:(id)arg1;
- (id)getAccessAuthorizationAcceptAgreenDesc:(id)arg1;
- (id)getAccessAuthorizationAcceptInvalidAgreenDesc:(unsigned int)arg1 accessTime:(unsigned int)arg2;
- (void)makeTeenagerModeBecomeGuardianWithSystemMsgWrap:(id)arg1;
- (void)makeTeenagerModeAuthorizationWithSystemMsgWrap:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)passwordResetApplyKey;
- (void)setPasswordResetApplyKey:(id)arg1;
- (BOOL)canShowLimitedModeEntry;
- (BOOL)isLimitedModeOn;
- (BOOL)isLimitedModeOnCore;
- (void)setLimitedModeOn:(BOOL)arg1 ticket:(id)arg2;
- (long long)levelForBiz:(long long)arg1;
- (void)changeLevel:(long long)arg1 forBiz:(long long)arg2 ticket:(id)arg3;
- (BOOL)isBizTypeAllowed:(long long)arg1;
- (BOOL)shouldBlockUrlInLimitedMode:(id)arg1;
- (id)encryptIndependentPwd:(id)arg1;
- (void)reportLimitedModeNoticeStatusOpen:(BOOL)arg1;
- (id)p_getLimitedModeDataFilePath;
- (void)saveLimitedModeToDataFileInternal;
- (void)p_loadLimitedModeInternal;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onProfileChange;
- (void)checkUpdateAndNotify;
- (void)checkInvalidLogic;
- (void)updateLimitedModeEntryScene:(long long)arg1;
- (void)setIsLimitedModeOn:(BOOL)arg1;
- (long long)finderBizLevel;
- (void)setFinderBizLevel:(long long)arg1;
- (long long)weappBizLevel;
- (void)setWeappBizLevel:(long long)arg1;
- (long long)brandBizLevel;
- (void)setBrandBizLevel:(long long)arg1;
- (long long)emoticonLevel;
- (void)setEmoticonLevel:(long long)arg1;
- (long long)recentEntryScene;
- (void)setRecentEntryScene:(long long)arg1;
- (BOOL)isChangingSwitch;
- (void)setIsChangingSwitch:(BOOL)arg1;
- (BOOL)isChangingLevel;
- (void)setIsChangingLevel:(BOOL)arg1;
- (BOOL)syncSwitch;
- (void)setSyncSwitch:(BOOL)arg1;
- (long long)syncBizType;
- (void)setSyncBizType:(long long)arg1;
- (long long)syncLevel;
- (void)setSyncLevel:(long long)arg1;
- (void).cxx_destruct;
@end

