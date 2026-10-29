@interface TRTCStatistics : NSObject
{
    unsigned int _appCpu; // +0x8
    unsigned int _systemCpu; // +0xc
    unsigned int _upLoss; // +0x10
    unsigned int _downLoss; // +0x14
    unsigned int _rtt; // +0x18
    unsigned int _gatewayRtt; // +0x1c
    unsigned long long _sentBytes; // +0x20
    unsigned long long _receivedBytes; // +0x28
    NSArray * _localStatistics; // +0x30
    NSArray * _remoteStatistics; // +0x38
}
- (id)description;
- (unsigned int)appCpu;
- (void)setAppCpu:(unsigned int)arg1;
- (unsigned int)systemCpu;
- (void)setSystemCpu:(unsigned int)arg1;
- (unsigned int)upLoss;
- (void)setUpLoss:(unsigned int)arg1;
- (unsigned int)downLoss;
- (void)setDownLoss:(unsigned int)arg1;
- (unsigned int)rtt;
- (void)setRtt:(unsigned int)arg1;
- (unsigned int)gatewayRtt;
- (void)setGatewayRtt:(unsigned int)arg1;
- (unsigned long long)sentBytes;
- (void)setSentBytes:(unsigned long long)arg1;
- (unsigned long long)receivedBytes;
- (void)setReceivedBytes:(unsigned long long)arg1;
- (id)localStatistics;
- (void)setLocalStatistics:(id)arg1;
- (id)remoteStatistics;
- (void)setRemoteStatistics:(id)arg1;
- (void).cxx_destruct;
@end

