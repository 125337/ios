@interface TPDownloadRecord : NSObject
{
    NSString * _cdnUip; // +0x8
    NSString * _cdnIp; // +0x10
    NSString * _cdnUrl; // +0x18
    long long _speed; // +0x20
    long long _maxSpeed; // +0x28
    long long _totalSpeed; // +0x30
    long long _totalSpeedCount; // +0x38
    NSDictionary * _extraInfo; // +0x40
    NSString * _protocol; // +0x48
    NSString * _protocolVer; // +0x50
    long long _hitDownloaded; // +0x58
}
- (id)cdnUip;
- (void)setCdnUip:(id)arg1;
- (id)cdnIp;
- (void)setCdnIp:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (long long)speed;
- (void)setSpeed:(long long)arg1;
- (long long)maxSpeed;
- (void)setMaxSpeed:(long long)arg1;
- (long long)totalSpeed;
- (void)setTotalSpeed:(long long)arg1;
- (long long)totalSpeedCount;
- (void)setTotalSpeedCount:(long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)protocol;
- (void)setProtocol:(id)arg1;
- (id)protocolVer;
- (void)setProtocolVer:(id)arg1;
- (long long)hitDownloaded;
- (void)setHitDownloaded:(long long)arg1;
- (void).cxx_destruct;
@end
