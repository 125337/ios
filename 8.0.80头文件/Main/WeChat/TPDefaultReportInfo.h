@interface TPDefaultReportInfo : NSObject
{
    BOOL _online; // +0x8
    BOOL _enableP2p; // +0x9
    long long _testId; // +0x10
    long long _cdnId; // +0x18
    long long _dlType; // +0x20
    long long _loginType; // +0x28
    long long _mediaFormat; // +0x30
    long long _mediaRate; // +0x38
    long long _cdnUrlIndex; // +0x40
    long long _platform; // +0x48
    double _mediaDuration; // +0x50
    NSString * _uin; // +0x58
    NSString * _qqOpenId; // +0x60
    NSString * _wxOpenId; // +0x68
    NSString * _guid; // +0x70
    NSString * _uip; // +0x78
    NSString * _cdnUip; // +0x80
    NSString * _cdnIp; // +0x88
    NSString * _appVersion; // +0x90
    NSString * _vid; // +0x98
    NSString * _mediaResolution; // +0xa0
    long long _subtitleCdnType; // +0xa8
    long long _subtitleUrlIndex; // +0xb0
    long long _freeType; // +0xb8
    long long _scenesId; // +0xc0
    NSMutableDictionary * _extraReportInfo; // +0xc8
}
- (long long)playType;
- (BOOL)online;
- (void)setOnline:(BOOL)arg1;
- (BOOL)enableP2p;
- (void)setEnableP2p:(BOOL)arg1;
- (long long)testId;
- (void)setTestId:(long long)arg1;
- (long long)cdnId;
- (void)setCdnId:(long long)arg1;
- (long long)dlType;
- (void)setDlType:(long long)arg1;
- (long long)loginType;
- (void)setLoginType:(long long)arg1;
- (long long)mediaFormat;
- (void)setMediaFormat:(long long)arg1;
- (long long)mediaRate;
- (void)setMediaRate:(long long)arg1;
- (long long)cdnUrlIndex;
- (void)setCdnUrlIndex:(long long)arg1;
- (long long)platform;
- (void)setPlatform:(long long)arg1;
- (double)mediaDuration;
- (void)setMediaDuration:(double)arg1;
- (id)uin;
- (void)setUin:(id)arg1;
- (id)qqOpenId;
- (void)setQqOpenId:(id)arg1;
- (id)wxOpenId;
- (void)setWxOpenId:(id)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (id)uip;
- (void)setUip:(id)arg1;
- (id)cdnUip;
- (void)setCdnUip:(id)arg1;
- (id)cdnIp;
- (void)setCdnIp:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)mediaResolution;
- (void)setMediaResolution:(id)arg1;
- (long long)subtitleCdnType;
- (void)setSubtitleCdnType:(long long)arg1;
- (long long)subtitleUrlIndex;
- (void)setSubtitleUrlIndex:(long long)arg1;
- (long long)freeType;
- (void)setFreeType:(long long)arg1;
- (long long)scenesId;
- (void)setScenesId:(long long)arg1;
- (id)extraReportInfo;
- (void)setExtraReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
