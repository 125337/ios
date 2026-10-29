@interface SnsFlutterSelectContactPluginImpl : NSObject <MultiSelectContactsViewControllerDelegate, WCMomentsContactTagListViewControllerDelegate, WCMomentsVisibilityCombinedDelegate, ContactTagNewDetailViewControllerDelegate, MMFlutterPlugin, PlatformSnsSelectContactApi>
{
    MMFlutterViewController * _viewController; // +0x8
    id /* block */ _selectContactCallback; // +0x10
    id /* block */ _selectLabelCallback; // +0x18
    id /* block */ _selectContactAndLabelCallback; // +0x20
    MMUIViewController * _selectContactVc; // +0x28
    MMUINavigationController * _contactTagDetailNav; // +0x30
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x38
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)selectContactCurrent:(id)arg1 excludeToSelect:(id)arg2 completion:(id /* block */)arg3;
- (void)selectLabelCurrent:(id)arg1 excludeToSelect:(id)arg2 completion:(id /* block */)arg3;
- (void)selectContactAndLabelSnsVisibilityData:(id)arg1 completion:(id /* block */)arg2;
- (void)selectContactWithVisibilityTypeVisibilityType:(long long)arg1 current:(id)arg2 excludeToSelect:(id)arg3 completion:(id /* block */)arg4;
- (id)getLabelListWithUsersLabelIdList:(id)arg1 error:(id *)arg2;
- (id)getLabelListLabelIdList:(id)arg1 error:(id *)arg2;
- (id)getValidToVisibilityUserNamesUserNames:(id)arg1 error:(id *)arg2;
- (void)jumpToContactTagDetailLabelName:(id)arg1 error:(id *)arg2;
- (void)dismissContactTagDetail;
- (void)reloadContactTagListView;
- (void)onTagDetailDismissedWithAddContactLabel;
- (void)onTagDetailDeletedAndDismissed;
- (void)notifyContactTagDetailChangedToFlutter;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)contactTagListViewControllerCancelSelect:(id)arg1;
- (void)combinedVC:(id)arg1 didConfirmWithSelectedTagIDs:(id)arg2 selectedContacts:(id)arg3;
- (void)combinedVCDidCancel:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)selectContactCallback;
- (void)setSelectContactCallback:(id /* block */)arg1;
- (id /* block */)selectLabelCallback;
- (void)setSelectLabelCallback:(id /* block */)arg1;
- (id /* block */)selectContactAndLabelCallback;
- (void)setSelectContactAndLabelCallback:(id /* block */)arg1;
- (id)selectContactVc;
- (void)setSelectContactVc:(id)arg1;
- (id)contactTagDetailNav;
- (void)setContactTagDetailNav:(id)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
