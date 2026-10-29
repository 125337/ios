@interface WCMomentsShareScopeMgr : NSObject <WCMomentsPrivacyViewControllerDelegate, WCFacadeExt, WCMomentsShareScopeViewControllerDelegate>
{
    BOOL _isModifyShareScopeEnabled; // +0x8
    BOOL _isRequestContactDataForOpening; // +0x9
    BOOL _isRequestContactDataForModifying; // +0xa
    BOOL _isModifyFromShareScopeVC; // +0xb
    WCMomentsShareScopeViewController * _shareScopeVC; // +0x10
    MMUIViewController * _shareScopeParentVC; // +0x18
    WCDataItem * _openDataItem; // +0x20
    WCMomentsPrivacyViewController * _privacyVC; // +0x28
    WCDataItem * _modifyDataItem; // +0x30
    SnsObjectOpChangeVisibility * _changeVisibilityOp; // +0x38
    unsigned long long _modifyShareScopeEnterScene; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)openShareScopeWithDataItem:(id)arg1 viewController:(id)arg2;
- (void)modifyShareScopeWithDataItem:(id)arg1 viewController:(id)arg2;
- (void)_openShareScopeWithDataItem:(id)arg1 isNeedForceUpdate:(BOOL)arg2;
- (id)_changeVisibilityOpWithPrivacy:(long long)arg1 contactTags:(id)arg2 contacts:(id)arg3;
- (void)_modifyShareScopeIfNeeded;
- (void)_onModifyPrvicyExceedLimitDuration;
- (void)_updatePrivacyVCWithDataItem:(id)arg1;
- (id)_createPrivacyParamsWithDataItem:(id)arg1;
- (void)_handleModifyDataItemFinishedWithResult:(BOOL)arg1;
- (void)_handleUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (BOOL)_isPrivacyChangedWithPrivacy:(long long)arg1 newTags:(id)arg2 newContacts:(id)arg3;
- (void)_clearData;
- (void)_clearOpenShareScopeData;
- (void)_clearModifyShareScopeData;
- (unsigned long long)modifyShareScopeEnterSceneWithVC:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)onClickCell:(unsigned long long)arg1;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (void)onUploadTaskDidFail:(id)arg1;
- (void)shareScopeViewController:(id)arg1 didClickModifyScopeButton:(id)arg2;
- (id)shareScopeViewControllerGetPresentingVC:(id)arg1;
- (void)onClickTagGroup:(unsigned int)arg1;
- (void)onClickUserName:(id)arg1;
- (void)resetEditBehaviorReporter;
- (BOOL)isModifyShareScopeEnabled;
- (void)setIsModifyShareScopeEnabled:(BOOL)arg1;
- (id)shareScopeVC;
- (void)setShareScopeVC:(id)arg1;
- (id)shareScopeParentVC;
- (void)setShareScopeParentVC:(id)arg1;
- (id)openDataItem;
- (void)setOpenDataItem:(id)arg1;
- (BOOL)isRequestContactDataForOpening;
- (void)setIsRequestContactDataForOpening:(BOOL)arg1;
- (id)privacyVC;
- (void)setPrivacyVC:(id)arg1;
- (id)modifyDataItem;
- (void)setModifyDataItem:(id)arg1;
- (id)changeVisibilityOp;
- (void)setChangeVisibilityOp:(id)arg1;
- (BOOL)isRequestContactDataForModifying;
- (void)setIsRequestContactDataForModifying:(BOOL)arg1;
- (BOOL)isModifyFromShareScopeVC;
- (void)setIsModifyFromShareScopeVC:(BOOL)arg1;
- (unsigned long long)modifyShareScopeEnterScene;
- (void)setModifyShareScopeEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

