@interface WCFinderPrivacySettingHelper : NSObject <WCFinderPrivacyViewControllerDelegate, WCFinderUserPrepareExt>
{
    int _commentScene; // +0x8
    WCFinderContact * _contact; // +0x10
    FinderNewUserPrepareResponse * _userPrepare; // +0x18
    UIViewController * _ownerVC; // +0x20
    id <WCFinderPrivacySettingHelperDelegate> _delegate; // +0x28
    long long _flag; // +0x30
}
+ (unsigned long long)getCurrentPrivacyWithContact:(id)arg1;
+ (void)showAddToBlackListConfirmSheetInView:(id)arg1 confirmHandler:(id /* block */)arg2;
+ (void)showRemoveFromBlackListConfirmSheetInView:(id)arg1 confirmHandler:(id /* block */)arg2;
- (BOOL)couldDisplayAuthorSettings;
- (void)addItemsToManager:(id)arg1;
- (BOOL)canShowPrivate;
- (id)getPrivacySettingWithSection;
- (id)addRecomendSection;
- (id)addBlackListSection;
- (void)_addShowInWXProflie:(id)arg1;
- (id)makeSectionSeparator;
- (void)addNotRecommendCell:(id)arg1;
- (void)clickVisiblePermissionCell;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewControllerDidSelectExpandableCell:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (BOOL)privacyViewController:(id)arg1 multiSelectContactReturn:(id)arg2 finished:(BOOL)arg3;
- (unsigned long long)currentPrivacy;
- (void)addPrimarySwitch:(id)arg1;
- (void)privateAccountSwitchChanged:(id)arg1;
- (void)configRefCell:(id)arg1;
- (void)addInterationCommentBulletLimitCell:(id)arg1;
- (void)addInterationMsgLimitCell:(id)arg1;
- (void)addAuthorizeToDataCell:(id)arg1;
- (void)onClickAuthorizeToData;
- (void)interationCommentBulletLimitAction;
- (void)interationMsgLimitAction;
- (id)interactionLimitDesc:(unsigned int)arg1;
- (void)addAudienceMuteCell:(id)arg1;
- (void)audienceMuteSwitchChanged:(id)arg1;
- (void)addBlockListCell:(id)arg1;
- (void)clickBlackListCell;
- (void)addRefusePrimaryMsgCell:(id)arg1;
- (void)clickFollowSendMsgCell:(id)arg1;
- (void)postAssistForNewLifeSwitchDidChange:(id)arg1;
- (void)reportSwitchChangedWithEid:(id)arg1 reportType:(long long)arg2 open:(BOOL)arg3;
- (id)addExportInfoSection;
- (void)clickPrivacyExportAction;
- (id)addAccountManagerSection;
- (void)openAccountSettingVC;
- (id)addGuardNowSection;
- (void)addGuardNowCell:(id)arg1;
- (BOOL)isGuardNowOpened;
- (void)_configCellEnableForGuardNow:(id)arg1;
- (void)_addGuardNowStatsLabelToHeader:(id)arg1;
- (void)onClickGuardNow;
- (void)dealloc;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)finderUserPrepareGuardNowStatusChange;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)ownerVC;
- (void)setOwnerVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (void).cxx_destruct;
@end
