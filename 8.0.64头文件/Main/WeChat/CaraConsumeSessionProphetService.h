@interface CaraConsumeSessionProphetService : MMUserService <IMainSessionMgrExt, ICaraSessionExt, MMServiceProtocol>
{
    CaraCppConsumeSessionProphet * _underlying; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)onMainFrameEndReload;
- (void)onMainSessionReload;
- (void)onConsumeSession:(id)arg1 stayTimeInterval:(float)arg2;
- (id)underlying;
- (void).cxx_destruct;
@end
