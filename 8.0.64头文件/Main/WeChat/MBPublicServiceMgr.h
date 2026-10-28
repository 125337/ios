@interface MBPublicServiceMgr : MMUserService <MMServiceProtocol, IMBPublicServiceProxy>
{
    NSMapTable * _extServicesMap; // +0x8
    MagicBrushService * _magicbrush; // +0x10
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)providePublicServiceObject:(id)arg1;
- (void)forceStop:(id)arg1 withAllConnectedBizes:(BOOL)arg2;
- (id)extServicesMap;
- (void)setExtServicesMap:(id)arg1;
- (id)magicbrush;
- (void)setMagicbrush:(id)arg1;
- (void).cxx_destruct;
@end
