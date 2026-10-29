@interface MomentsFlutterPrivacyEntranceManager : NSObject
+ (id)getPrivacyViewControllerForCommitVc:(long long)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5 interactContactList:(id)arg6 excludeContactList:(id)arg7 excludeTagNameList:(id)arg8 commitViewController:(id)arg9;
+ (void)openShareScopeDialogWithDataItem:(id)arg1 viewController:(id)arg2;
+ (void)openRecentGroupDialogWithViewController:(id)arg1;
+ (void)openModifyPrivacySettingVcWithDataItem:(id)arg1 viewController:(id)arg2;
@end
