@interface StatusPublishPlatformApiImpl : NSObject <WCMomentsPrivacyViewControllerDelegate, MMFlutterPlugin, StatusPublishPlatformApi>
{
    id /* block */ _completion; // +0x8
    WCMomentsPrivacyViewController * _privacyVC; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)closeFromPlatformWithError:(id *)arg1;
- (void)openStatusCardFloatViewUsername:(id)arg1 error:(id *)arg2;
- (void)showPrivacySettingsRequest:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)onClickCell:(unsigned long long)arg1;
- (long long)convertToWCPrivacy:(unsigned long long)arg1;
- (unsigned long long)convertFromWCPrivacy:(long long)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)privacyVC;
- (void)setPrivacyVC:(id)arg1;
- (void).cxx_destruct;
@end
