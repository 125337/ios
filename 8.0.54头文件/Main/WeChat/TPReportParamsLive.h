@interface TPReportParamsLive : NSObject <ITPReportParams>
{
    BOOL _use_p2p; // +0x8
    BOOL _p2p_play; // +0x9
    BOOL _isuserpay; // +0xa
    BOOL _lookback; // +0xb
    BOOL _live_tag; // +0xc
    long long _ftime; // +0x10
    NSString * _sip; // +0x18
    NSString * _uip; // +0x20
    NSString * _cdnuip; // +0x28
    NSString * _iqq; // +0x30
    NSString * _qqopen_id; // +0x38
    NSString * _wxopen_id; // +0x40
    NSString * _playno; // +0x48
    long long _seq; // +0x50
    NSString * _cdnid; // +0x58
    NSString * _protocol; // +0x60
    NSString * _protocolVer; // +0x68
    long long _prdlength; // +0x70
    long long _playad; // +0x78
    NSString * _guid; // +0x80
    NSString * _fplayerver; // +0x88
    NSString * _dsip; // +0x90
    long long _devtype; // +0x98
    long long _nettype; // +0xa0
    long long _freetype; // +0xa8
    long long _platform; // +0xb0
    NSString * _device; // +0xb8
    NSString * _resolution; // +0xc0
    NSString * _osver; // +0xc8
    long long _playertype; // +0xd0
    NSString * _appver; // +0xd8
    long long _playtype; // +0xe0
    long long _scenesid; // +0xe8
    NSString * _p2pver; // +0xf0
    long long _livepid; // +0xf8
    long long _sid; // +0x100
    long long _contentid; // +0x108
    long long _playtime; // +0x110
    NSString * _defSwitch; // +0x118
    long long _live_type; // +0x120
    NSString * _xserverip; // +0x128
    NSString * _durl; // +0x130
    long long _live_delay; // +0x138
    NSString * _extraInfo; // +0x140
    NSString * _spanId; // +0x148
    NSString * _tuid; // +0x150
    unsigned long long _step; // +0x158
    long long _cnntime; // +0x160
    long long _maxspeed; // +0x168
    long long _testspeed; // +0x170
    long long _downspeed; // +0x178
    long long _recnncount; // +0x180
    unsigned long long _loadingtime; // +0x188
    long long _blockcount; // +0x190
    unsigned long long _blocktime; // +0x198
    long long _errorcode; // +0x1a0
    long long _geturltime; // +0x1a8
    NSString * _code; // +0x1b0
    long long _get_stream_data_duration; // +0x1b8
    long long _get_sync_frame_duration; // +0x1c0
}
+ (id)modelCustomPropertyMapper;
- (id)init;
- (void)setErrorCode:(id)arg1;
- (long long)ftime;
- (void)setFtime:(long long)arg1;
- (id)sip;
- (void)setSip:(id)arg1;
- (id)uip;
- (void)setUip:(id)arg1;
- (id)cdnuip;
- (void)setCdnuip:(id)arg1;
- (id)iqq;
- (void)setIqq:(id)arg1;
- (id)qqopen_id;
- (void)setQqopen_id:(id)arg1;
- (id)wxopen_id;
- (void)setWxopen_id:(id)arg1;
- (id)playno;
- (void)setPlayno:(id)arg1;
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (id)cdnid;
- (void)setCdnid:(id)arg1;
- (id)protocol;
- (void)setProtocol:(id)arg1;
- (id)protocolVer;
- (void)setProtocolVer:(id)arg1;
- (long long)prdlength;
- (void)setPrdlength:(long long)arg1;
- (long long)playad;
- (void)setPlayad:(long long)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (id)fplayerver;
- (void)setFplayerver:(id)arg1;
- (id)dsip;
- (void)setDsip:(id)arg1;
- (long long)devtype;
- (void)setDevtype:(long long)arg1;
- (long long)nettype;
- (void)setNettype:(long long)arg1;
- (long long)freetype;
- (void)setFreetype:(long long)arg1;
- (long long)platform;
- (void)setPlatform:(long long)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (id)osver;
- (void)setOsver:(id)arg1;
- (long long)playertype;
- (void)setPlayertype:(long long)arg1;
- (id)appver;
- (void)setAppver:(id)arg1;
- (long long)playtype;
- (void)setPlaytype:(long long)arg1;
- (long long)scenesid;
- (void)setScenesid:(long long)arg1;
- (BOOL)use_p2p;
- (void)setUse_p2p:(BOOL)arg1;
- (BOOL)p2p_play;
- (void)setP2p_play:(BOOL)arg1;
- (id)p2pver;
- (void)setP2pver:(id)arg1;
- (long long)livepid;
- (void)setLivepid:(long long)arg1;
- (long long)sid;
- (void)setSid:(long long)arg1;
- (long long)contentid;
- (void)setContentid:(long long)arg1;
- (long long)playtime;
- (void)setPlaytime:(long long)arg1;
- (BOOL)isuserpay;
- (void)setIsuserpay:(BOOL)arg1;
- (id)defSwitch;
- (void)setDefSwitch:(id)arg1;
- (long long)live_type;
- (void)setLive_type:(long long)arg1;
- (id)xserverip;
- (void)setXserverip:(id)arg1;
- (id)durl;
- (void)setDurl:(id)arg1;
- (BOOL)lookback;
- (void)setLookback:(BOOL)arg1;
- (long long)live_delay;
- (void)setLive_delay:(long long)arg1;
- (BOOL)live_tag;
- (void)setLive_tag:(BOOL)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)spanId;
- (void)setSpanId:(id)arg1;
- (id)tuid;
- (void)setTuid:(id)arg1;
- (unsigned long long)step;
- (void)setStep:(unsigned long long)arg1;
- (long long)cnntime;
- (void)setCnntime:(long long)arg1;
- (long long)maxspeed;
- (void)setMaxspeed:(long long)arg1;
- (long long)testspeed;
- (void)setTestspeed:(long long)arg1;
- (long long)downspeed;
- (void)setDownspeed:(long long)arg1;
- (long long)recnncount;
- (void)setRecnncount:(long long)arg1;
- (unsigned long long)loadingtime;
- (void)setLoadingtime:(unsigned long long)arg1;
- (long long)blockcount;
- (void)setBlockcount:(long long)arg1;
- (unsigned long long)blocktime;
- (void)setBlocktime:(unsigned long long)arg1;
- (long long)errorcode;
- (void)setErrorcode:(long long)arg1;
- (long long)geturltime;
- (void)setGeturltime:(long long)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (long long)get_stream_data_duration;
- (void)setGet_stream_data_duration:(long long)arg1;
- (long long)get_sync_frame_duration;
- (void)setGet_sync_frame_duration:(long long)arg1;
- (void).cxx_destruct;
@end

