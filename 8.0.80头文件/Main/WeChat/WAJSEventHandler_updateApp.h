@interface WAJSEventHandler_updateApp : WAJSEventHandler_BaseEvent <MMTipsViewControllerDelegate>
{
    WAContactGetter * _contactGetter; // +0x8
    unsigned int _latestVersion; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (BOOL)isUpdateAppRunning;
- (void)markUpdateAppRunning:(BOOL)arg1;
- (void)endWithSuccess:(BOOL)arg1 error:(id)arg2;
- (unsigned int)latestVersion;
- (void)setLatestVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
