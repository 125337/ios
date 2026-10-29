@interface EcsMagicCardService : MMUserService <MMServiceProtocol>
{
    NSPointerArray * _activeInstances; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerInstance:(id)arg1;
- (void)unregisterInstance:(id)arg1;
- (id)allActiveInstances;
- (id)activeInstances;
- (void)setActiveInstances:(id)arg1;
- (void).cxx_destruct;
@end
