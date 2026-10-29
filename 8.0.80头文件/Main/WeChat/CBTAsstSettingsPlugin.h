@interface CBTAsstSettingsPlugin : NSObject <CBTAsstContactSelectViewControllerDelegate, MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
}
+ (void)openWebPageWithURL:(id)arg1;
+ (void)openInviteFriendsPickerWithDelegate:(id)arg1 remainingQuota:(unsigned long long)arg2 inviteQuotaReddotId:(id)arg3 negScreenSessionId:(id)arg4 enterScene:(long long)arg5;
+ (void)resolveAndApplyInvitedHashes:(id)arg1 picker:(id)arg2;
+ (id)resolveUsernamesFromHashes:(id)arg1 mapping:(id)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)didSelectContacts:(id)arg1;
- (void)onCancelSelectContact;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
