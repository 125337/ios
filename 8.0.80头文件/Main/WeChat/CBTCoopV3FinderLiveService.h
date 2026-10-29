@interface CBTCoopV3FinderLiveService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleOpenPage:(id)arg1;
- (id)parsedExtInfo:(id)arg1;
- (id)currentVisibleNavigationController;
- (void).cxx_destruct;
@end
