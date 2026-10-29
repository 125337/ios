@interface CaraJoinLiveQualityProphetService : MMUserService <MMServiceProtocol>
{
    CaraCppJoinLiveQualityProphet * _underlying; // +0x8
}
- (id)init;
- (void)reportThatJoinLive:(id)arg1 context:(id)arg2;
- (void)startPredict;
- (id)getPrediction;
- (void)stopPredict;
- (void)reportThatLiveRoomLag:(id)arg1 context:(id)arg2;
- (id)underlying;
- (void).cxx_destruct;
@end

