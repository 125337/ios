@interface MMFinderLiveOlyBarragePubbleTravelFactory : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _barragePubbleTravelRouteList; // +0x8
    MMFinderLiveOlyBarrageTravel * _barrageTravel; // +0x10
}
+ (id)createBarragePubbleTravelListForLayoutStyle:(long long)arg1;
+ (unsigned long long)getBarragePubbleTravelCountForLayoutStyle:(long long)arg1;
+ (id)getBarrageTravel;
+ (id)createBarragePubbleTravelListForLayoutStyleV0;
+ (id)createBarragePubbleTravelListForLayoutStyleV1;
+ (id)createBarragePubbleTravelListForLayoutStyleV2;
+ (double)getTravelAngleForIndex:(int)arg1;
+ (id)createBarragePubbleTravelListForLayoutStyleV3;
+ (id)innerGetBarrageTravel;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateResource:(id)arg1;
- (id)currentActivityTask;
- (id)barragePubbleTravelRouteList;
- (void)initDefaultSrc;
- (void)initBarragePubbleTravelRouteList;
- (void)initBarrageTravel;
- (void)updateBarragePubbleRouteConfigResource:(id)arg1;
- (void)updateBarrageTravelConfigResource:(id)arg1;
- (id)convertToBarragePubbleTravelListFromInitialList:(id)arg1;
- (id)convertToBarrageTrailStageListFromInitialList:(id)arg1;
- (void)setBarragePubbleTravelRouteList:(id)arg1;
- (id)barrageTravel;
- (void)setBarrageTravel:(id)arg1;
- (void).cxx_destruct;
@end

