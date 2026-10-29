@interface CBTCoopV3LiteAppService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleOpenH5:(id)arg1;
- (void)handleOpenWeApp:(id)arg1;
- (void)handleOpenLiteApp:(id)arg1;
- (void)handleCloseStandalone:(id)arg1;
- (id)liteAppStandaloneContentFromTop:(id)arg1;
- (id)topViewController;
- (void).cxx_destruct;
@end
