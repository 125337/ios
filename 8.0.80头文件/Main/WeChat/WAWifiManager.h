@interface WAWifiManager : MMRootService <MMServiceProtocol>
{
    BOOL _isRegisterHotspotInterface; // +0x8
    NSHashTable * _commandHandlers; // +0x10
}
- (void)dealloc;
- (id)init;
- (void)registerHandler:(id)arg1;
- (void)unregisterHandler:(id)arg1;
- (void)registerHotspotHelper;
- (BOOL)isRegisterHotspotInterface;
- (void)setIsRegisterHotspotInterface:(BOOL)arg1;
- (id)commandHandlers;
- (void)setCommandHandlers:(id)arg1;
- (void).cxx_destruct;
@end
