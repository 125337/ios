@interface KSUPnPDiscoveryRequest : NSObject
{
    NSString * _UUID; // +0x8
    NSString * _host; // +0x10
    long long _port; // +0x18
    NSString * _man; // +0x20
    NSString * _searchTarget; // +0x28
    NSString * _userAgent; // +0x30
    unsigned long long _maximumResponseDelay; // +0x38
    double _socketSendTimeoutInterval; // +0x40
    double _socketReceiveTimeoutInterval; // +0x48
}
- (id)init;
- (id)generateRequestData;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (long long)port;
- (void)setPort:(long long)arg1;
- (id)man;
- (void)setMan:(id)arg1;
- (id)searchTarget;
- (void)setSearchTarget:(id)arg1;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (unsigned long long)maximumResponseDelay;
- (void)setMaximumResponseDelay:(unsigned long long)arg1;
- (double)socketSendTimeoutInterval;
- (void)setSocketSendTimeoutInterval:(double)arg1;
- (double)socketReceiveTimeoutInterval;
- (void)setSocketReceiveTimeoutInterval:(double)arg1;
- (void).cxx_destruct;
@end
