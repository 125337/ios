@interface TextStatePrivacyMgr : NSObject <WCMomentsPrivacyViewControllerDelegate, WCMomentsShareScopeViewControllerDelegate, WCFacadeExt>
{
    BOOL _isRequestContactDataForOpening; // +0x8
    BOOL _isRequestContactDataForModifying; // +0x9
    BOOL _isModifyFromShareScopeVC; // +0xa
    WCMomentsShareScopeViewController * _shareScopeVC; // +0x10
    MMUIViewController * _shareScopeParentVC; // +0x18
    TextStateBaseCardContentView * _contentView; // +0x20
    TextStateModel * _openDataItem; // +0x28
    WCMomentsPrivacyViewController * _privacyVC; // +0x30
}
+ (long long)statusPrivacy2WCPostPrivacy:(long long)arg1;
+ (long long)wcPostPrivacy2StatusPrivacy:(long long)arg1;
- (id)init;
- (void)dealloc;
- (void)openShareScopeWithDataItem:(id)arg1 viewController:(id)arg2 contentView:(id)arg3;
- (void)modifyShareScopeWithDataItem:(id)arg1 viewController:(id)arg2;
- (void)_openShareScopeWithDataItem:(id)arg1 isNeedForceUpdate:(BOOL)arg2;
- (void)_updatePrivacyVCWithDataItem:(id)arg1;
- (id)_createPrivacyParamsWithDataItem:(id)arg1;
- (void)_handleModifyDataItemFinishedWithResult:(BOOL)arg1;
- (BOOL)_isPrivacyChangedWithPrivacy:(long long)arg1 newTags:(id)arg2 newContacts:(id)arg3;
- (void)_clearData;
- (void)_clearOpenShareScopeData;
- (void)_clearModifyShareScopeData;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)onClickCell:(unsigned long long)arg1;
- (void)shareScopeViewController:(id)arg1 didClickModifyScopeButton:(id)arg2;
- (id)shareScopeViewControllerGetPresentingVC:(id)arg1;
- (void)onClickTagGroup:(unsigned int)arg1;
- (void)onClickUserName:(id)arg1;
- (id)shareScopeVC;
- (void)setShareScopeVC:(id)arg1;
- (id)shareScopeParentVC;
- (void)setShareScopeParentVC:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)openDataItem;
- (void)setOpenDataItem:(id)arg1;
- (BOOL)isRequestContactDataForOpening;
- (void)setIsRequestContactDataForOpening:(BOOL)arg1;
- (id)privacyVC;
- (void)setPrivacyVC:(id)arg1;
- (BOOL)isRequestContactDataForModifying;
- (void)setIsRequestContactDataForModifying:(BOOL)arg1;
- (BOOL)isModifyFromShareScopeVC;
- (void)setIsModifyFromShareScopeVC:(BOOL)arg1;
- (void).cxx_destruct;
@end

