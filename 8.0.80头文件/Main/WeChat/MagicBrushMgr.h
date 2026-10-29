@interface MagicBrushMgr : MMUserService <IMBReportProxy, MMServiceProtocol, IMBBizInfoDelegate>
{
    MagicBrushService * _magicbrush; // +0x8
    NSMutableSet * _activeBizsSet; // +0x10
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)newBiz:(id)arg1;
- (void)report:(int)arg1 logStr:(id)arg2;
- (id)getReportExtraDictionary:(id)arg1 publicServices:(id)arg2;
- (void)onBizCallStart:(id)arg1;
- (void)onBizCallDestroy:(id)arg1;
- (void)updateActiveBizs;
- (id)magicbrush;
- (void)setMagicbrush:(id)arg1;
- (id)activeBizsSet;
- (void)setActiveBizsSet:(id)arg1;
- (void).cxx_destruct;
@end
