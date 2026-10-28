@interface TPGeneralPlayFlowParams : NSObject
{
    TPPlayerConfigParams * _playerConfigParams; // +0x8
    TPPlayerBaseMediaParams * _playerBaseMediaParams; // +0x10
    TPPlayerDrmParams * _playerDrmParams; // +0x18
    TPPlayerGeneralTrackingParams * _playerGeneralTrackingParams; // +0x20
}
- (id)init;
- (id)playerConfigParams;
- (void)setPlayerConfigParams:(id)arg1;
- (id)playerBaseMediaParams;
- (void)setPlayerBaseMediaParams:(id)arg1;
- (id)playerDrmParams;
- (void)setPlayerDrmParams:(id)arg1;
- (id)playerGeneralTrackingParams;
- (void)setPlayerGeneralTrackingParams:(id)arg1;
- (void).cxx_destruct;
@end
