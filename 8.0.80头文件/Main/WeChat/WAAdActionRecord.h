@interface WAAdActionRecord : NSObject
{
    BOOL _isMbAd; // +0x8
    NSString * _hostAppId; // +0x10
    long long _adType; // +0x18
    long long _lastAdActionAt; // +0x20
    unsigned long long _expiryGeneration; // +0x28
    long long _lastSparedReportedAt; // +0x30
}
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (long long)adType;
- (void)setAdType:(long long)arg1;
- (long long)lastAdActionAt;
- (void)setLastAdActionAt:(long long)arg1;
- (BOOL)isMbAd;
- (void)setIsMbAd:(BOOL)arg1;
- (unsigned long long)expiryGeneration;
- (void)setExpiryGeneration:(unsigned long long)arg1;
- (long long)lastSparedReportedAt;
- (void)setLastSparedReportedAt:(long long)arg1;
- (void).cxx_destruct;
@end
