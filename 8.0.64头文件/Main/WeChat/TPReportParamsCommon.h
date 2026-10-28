@interface TPReportParamsCommon : NSObject <ITPReportParams>
{
    BOOL _downloadkit; // +0x8
    BOOL _online; // +0x9
    BOOL _p2p; // +0xa
    long long _platform; // +0x10
    NSString * _flowid; // +0x18
    NSString * _playno; // +0x20
    unsigned long long _step; // +0x28
    long long _seq; // +0x30
    NSString * _uin; // +0x38
    NSString * _QQopenid; // +0x40
    NSString * _WXopenid; // +0x48
    long long _logintype; // +0x50
    NSString * _guid; // +0x58
    NSString * _uip; // +0x60
    NSString * _cdnuip; // +0x68
    NSString * _cdnip; // +0x70
    long long _sstrength; // +0x78
    long long _network; // +0x80
    NSString * _protocol; // +0x88
    NSString * _protocolVer; // +0x90
    long long _speed; // +0x98
    NSString * _device; // +0xa0
    NSString * _resolution; // +0xa8
    long long _testid; // +0xb0
    NSString * _osver; // +0xb8
    NSString * _p2pver; // +0xc0
    NSString * _appver; // +0xc8
    NSString * _playerver; // +0xd0
    long long _playertype; // +0xd8
    long long _cdnid; // +0xe0
    long long _scenesid; // +0xe8
    long long _playtype; // +0xf0
    long long _dltype; // +0xf8
    NSString * _vid; // +0x100
    NSString * _definition; // +0x108
    long long _fmt; // +0x110
    long long _rate; // +0x118
    double _duration; // +0x120
}
- (id)init;
- (void)setErrorCode:(id)arg1;
- (long long)platform;
- (void)setPlatform:(long long)arg1;
- (id)flowid;
- (void)setFlowid:(id)arg1;
- (id)playno;
- (void)setPlayno:(id)arg1;
- (unsigned long long)step;
- (void)setStep:(unsigned long long)arg1;
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (id)uin;
- (void)setUin:(id)arg1;
- (id)QQopenid;
- (void)setQQopenid:(id)arg1;
- (id)WXopenid;
- (void)setWXopenid:(id)arg1;
- (long long)logintype;
- (void)setLogintype:(long long)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (id)uip;
- (void)setUip:(id)arg1;
- (id)cdnuip;
- (void)setCdnuip:(id)arg1;
- (id)cdnip;
- (void)setCdnip:(id)arg1;
- (BOOL)downloadkit;
- (void)setDownloadkit:(BOOL)arg1;
- (BOOL)online;
- (void)setOnline:(BOOL)arg1;
- (BOOL)p2p;
- (void)setP2p:(BOOL)arg1;
- (long long)sstrength;
- (void)setSstrength:(long long)arg1;
- (long long)network;
- (void)setNetwork:(long long)arg1;
- (id)protocol;
- (void)setProtocol:(id)arg1;
- (id)protocolVer;
- (void)setProtocolVer:(id)arg1;
- (long long)speed;
- (void)setSpeed:(long long)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (long long)testid;
- (void)setTestid:(long long)arg1;
- (id)osver;
- (void)setOsver:(id)arg1;
- (id)p2pver;
- (void)setP2pver:(id)arg1;
- (id)appver;
- (void)setAppver:(id)arg1;
- (id)playerver;
- (void)setPlayerver:(id)arg1;
- (long long)playertype;
- (void)setPlayertype:(long long)arg1;
- (long long)cdnid;
- (void)setCdnid:(long long)arg1;
- (long long)scenesid;
- (void)setScenesid:(long long)arg1;
- (long long)playtype;
- (void)setPlaytype:(long long)arg1;
- (long long)dltype;
- (void)setDltype:(long long)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)definition;
- (void)setDefinition:(id)arg1;
- (long long)fmt;
- (void)setFmt:(long long)arg1;
- (long long)rate;
- (void)setRate:(long long)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end
