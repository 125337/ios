@interface CBTCoopV3EmoticonService : NSObject <CBTCoopV3NotificationObserverBase>
{
    NSMutableDictionary * _downloaders; // +0x8
    CBTCoopV3NotificationObserver * _observer; // +0x10
}
+ (id)sharedInstance;
- (void)downloaderDidFinish:(id)arg1 path:(id)arg2;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handlePrepareStoreDownload:(id)arg1;
- (void)handlePrepareStoreDownloadByMd5:(id)arg1;
- (void)cleanupDownloaderForMd5:(id)arg1;
- (void)dispatchStoreReadyForMd5:(id)arg1 path:(id)arg2;
- (void)dispatchStoreFailedForMd5:(id)arg1;
- (void)handleOpenPage:(id)arg1;
- (id)parseJSON:(id)arg1;
- (id)stringFromParams:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
@end
