@interface WCFinderPrivacySettingHelper : NSObject <WCMomentsPrivacyViewControllerDelegate>
{
    int _commentScene; // +0x8
    WCFinderContact * _contact; // +0x10
    FinderNewUserPrepareResponse * _userPrepare; // +0x18
    UIViewController * _ownerVC; // +0x20
    id <WCFinderPrivacySettingHelperDelegate> _delegate; // +0x28
    long long _flag; // +0x30
}
+ (unsigned long long)getCurrentPrivacyWithContact:(id)arg1;
- (BOOL)couldDisplay;
- (void)addItemsToManager:(id)arg1;
- (BOOL)canShowPrivate;
- (id)getPrivacySettingWithSection;
- (id)addRecomendSection;
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
- (void)interationCommentBulletLimitAction;
- (void)interationMsgLimitAction;
- (id)interactionLimitDesc:(unsigned int)arg1;
- (void)addAudienceMuteCell:(id)arg1;
- (void)audienceMuteSwitchChanged:(id)arg1;
- (void)addBlockListCell:(id)arg1;
- (void)clickBlackListCell;
- (void)addRefusePrimaryMsgCell:(id)arg1;
- (void)clickFollowSendMsgCell:(id)arg1;
- (void)addReferenceSection:(id)arg1;
- (void)addMpRefCell:(id)arg1;
- (void)extractPOIInfoPermissionFromAssetCell:(id)arg1;
- (void)extractPOIFromAssetPermissionChange:(id)arg1;
- (void)mpRefSwitchDidChange:(id)arg1;
- (void)addMiniappReferenceCell:(id)arg1;
- (void)miniappReferenceSectionSwitchChanged:(id)arg1;
- (void)addMJRefCell:(id)arg1;
- (void)mjRefSwitchDidChange:(id)arg1;
- (void)addMJPublisherMutatedContentSaveCell:(id)arg1;
- (void)mjPublisherMutatedContentSwitchDidChange:(id)arg1;
- (void)postAssistForNewLifeSwitchDidChange:(id)arg1;
- (void)addMemtionFilterCell:(id)arg1;
- (void)clickUnDisplayMentioned:(id)arg1;
- (void)reportSwitchChangedWithEid:(id)arg1 reportType:(long long)arg2 open:(BOOL)arg3;
- (id)addExportInfoSection;
- (void)clickPrivacyExportAction;
- (id)addAccountManagerSection;
- (void)openAccountSettingVC;
- (id)addGuardNowSection;
- (BOOL)isGuardNowOpened;
- (void)_configCellEnableForGuardNow:(id)arg1;
- (void)_addGuardNowStatsLabelToHeader:(id)arg1;
- (void)onClickGuardNow;
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
