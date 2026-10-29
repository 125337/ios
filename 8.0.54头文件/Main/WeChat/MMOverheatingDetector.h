@interface MMOverheatingDetector : MMRootService <INetworkStatusMgrExt, MMServiceProtocol>
{
    MMOverheatingCharacteristics * _currentCharacteristics; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)initDetector;
- (void)setCurrentCharacteristics:(id)arg1;
- (void)notifyThatDeviceMayBecomeOverheating:(id)arg1;
- (void)notifyThatDeviceMayResignOverheating:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)handleNetworkChangeToUnreachable;
- (id)currentCharacteristics;
- (void).cxx_destruct;
@end

