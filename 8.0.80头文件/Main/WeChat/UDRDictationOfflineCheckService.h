@interface UDRDictationOfflineCheckService : MMRootService <MMServiceProtocol>
+ (void)handleDownloadSuccessForProjectId:(id)arg1 name:(id)arg2;
+ (id)dictationOfflineResourceName;
+ (unsigned int)dictationOfflineResourceServerVersion;
+ (void)triggerCheckIfNeeded;
+ (void)triggerCleanIfExpired;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
@end
