@interface CBTCoopV3BizArticleService : NSObject <ICBTContactGetExt, CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleGetAvatar:(id)arg1;
- (void)onGetContactFromServer:(id)arg1;
- (void)sendAvatarResponse:(id)arg1 url:(id)arg2;
- (void)handleLaunchArticle:(id)arg1;
- (void)handleWarmupArticle:(id)arg1;
- (id)itemShowTypeFromPayload:(id)arg1;
- (unsigned int)subSceneFromPayload:(id)arg1;
- (id)uint32FromPayload:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
@end
