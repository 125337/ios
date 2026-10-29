@interface CaraAppleLiveFeatureCenter : NSObject <CaraNativeLiveFeatureCenterBase, ICaraLiveExt>
{
    CaraCppLiveFeatureCenter * _underlying; // +0x8
}
- (id)init;
- (void)dealloc;
- (int)currentNetworkQuality;
- (void)onLiveReddotExpose:(id)arg1;
- (void)onLiveReddotConsume:(id)arg1;
- (void)onLiveCellExpose;
- (void)onLiveCellConsume;
- (void)onLiveUserActiveLevelUpdate:(int)arg1;
- (id)underlying;
- (void).cxx_destruct;
@end
