@interface CBTCoopV3PhotoAccountArticleService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleLaunchArticle:(id)arg1;
- (unsigned int)subSceneFromPayload:(id)arg1;
- (void).cxx_destruct;
@end
