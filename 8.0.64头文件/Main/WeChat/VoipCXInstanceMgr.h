@interface VoipCXInstanceMgr : MMRootService <MMServiceProtocol>
{
    CXCallController * _cxController; // +0x8
    CXProvider * _provider; // +0x10
}
- (id)init;
- (void)renewRingToneSoundForCaller:(id)arg1;
- (id)cxController;
- (id)provider;
- (void).cxx_destruct;
@end
