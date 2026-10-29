@interface TPCommonParams : NSObject
{
    float _videoFrameRate; // +0x8
    NSString * _flowId; // +0x10
    NSString * _guid; // +0x18
    long long _seq; // +0x20
    long long _platformType; // +0x28
    long long _devType; // +0x30
    long long _networkType; // +0x38
    NSString * _deviceName; // +0x40
    NSString * _osVer; // +0x48
    NSString * _appName; // +0x50
    NSString * _appVer; // +0x58
    NSString * _playerVer; // +0x60
    NSString * _reportProtocolVer; // +0x68
    long long _durationMs; // +0x70
    long long _hlsSourceType; // +0x78
    long long _playerType; // +0x80
    long long _urlProtocol; // +0x88
    NSString * _containerFormat; // +0x90
    long long _videoEncodeFmt; // +0x98
    long long _audioEncodeFmt; // +0xa0
    long long _subtitleEncodeFmt; // +0xa8
    long long _streamBitrateKbps; // +0xb0
    NSString * _url; // +0xb8
    NSString * _resolution; // +0xc0
    NSString * _dataTransportVer; // +0xc8
    long long _speedKbps; // +0xd0
    long long _useDataTransport; // +0xd8
    NSString * _dataTransportProtocolVer; // +0xe0
    NSString * _cdnUip; // +0xe8
    NSString * _cdnIp; // +0xf0
    long long _platform; // +0xf8
    NSString * _playerConfig; // +0x100
    long long _drmAbility; // +0x108
}
- (id)init;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (long long)platformType;
- (void)setPlatformType:(long long)arg1;
- (long long)devType;
- (void)setDevType:(long long)arg1;
- (long long)networkType;
- (void)setNetworkType:(long long)arg1;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)osVer;
- (void)setOsVer:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appVer;
- (void)setAppVer:(id)arg1;
- (id)playerVer;
- (void)setPlayerVer:(id)arg1;
- (id)reportProtocolVer;
- (void)setReportProtocolVer:(id)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (long long)hlsSourceType;
- (void)setHlsSourceType:(long long)arg1;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
- (long long)urlProtocol;
- (void)setUrlProtocol:(long long)arg1;
- (id)containerFormat;
- (void)setContainerFormat:(id)arg1;
- (long long)videoEncodeFmt;
- (void)setVideoEncodeFmt:(long long)arg1;
- (long long)audioEncodeFmt;
- (void)setAudioEncodeFmt:(long long)arg1;
- (long long)subtitleEncodeFmt;
- (void)setSubtitleEncodeFmt:(long long)arg1;
- (long long)streamBitrateKbps;
- (void)setStreamBitrateKbps:(long long)arg1;
- (float)videoFrameRate;
- (void)setVideoFrameRate:(float)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (id)dataTransportVer;
- (void)setDataTransportVer:(id)arg1;
- (long long)speedKbps;
- (void)setSpeedKbps:(long long)arg1;
- (long long)useDataTransport;
- (void)setUseDataTransport:(long long)arg1;
- (id)dataTransportProtocolVer;
- (void)setDataTransportProtocolVer:(id)arg1;
- (id)cdnUip;
- (void)setCdnUip:(id)arg1;
- (id)cdnIp;
- (void)setCdnIp:(id)arg1;
- (long long)platform;
- (void)setPlatform:(long long)arg1;
- (id)playerConfig;
- (void)setPlayerConfig:(id)arg1;
- (long long)drmAbility;
- (void)setDrmAbility:(long long)arg1;
- (void).cxx_destruct;
@end

