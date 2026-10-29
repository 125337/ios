@interface WCFinderAccountSelectorViewController : WCFinderWCTableViewManagerVC <WCActionSheetDelegate, WCFinderSwitchExt>
+ (id)displayNicknameForSelectedAccount;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onBuildTables;
- (void)editTrumpetAccount;
- (void)selectedLiveIdentity:(id)arg1;
- (void)deleteTrumpetAccount;
- (void)createTrumpetAccount;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finderLiveIdentityChange;
@end

