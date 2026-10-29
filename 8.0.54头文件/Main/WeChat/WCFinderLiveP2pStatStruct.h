@interface WCFinderLiveP2pStatStruct : NSObject
{
    unsigned int _p2p_upload_switch; // +0x8
    unsigned int _p2p_download_switch; // +0xc
    unsigned int _candidates; // +0x10
    unsigned int _standbys; // +0x14
    unsigned int _load; // +0x18
    unsigned int _xs_4xx_status; // +0x1c
    unsigned int _total_pieces; // +0x20
    unsigned int _verify_pieces; // +0x24
    unsigned int _invalid_pieces; // +0x28
    unsigned int _tag_missed_invalid_pieces; // +0x2c
    unsigned int _abnormal_ts_count; // +0x30
    unsigned int _play_ori_by_no_sei; // +0x34
    unsigned int _buffer_length; // +0x38
    unsigned int _max_cdn_firstframe; // +0x3c
    unsigned int _max_p2p_firstframe; // +0x40
    unsigned int _first_frame_t; // +0x44
    unsigned int _active_punch_total; // +0x48
    unsigned int _acitve_punch_succ; // +0x4c
    unsigned int _passive_punch_total; // +0x50
    unsigned int _passive_punch_succ; // +0x54
    unsigned int _punch_hole; // +0x58
    unsigned int _played_bytes; // +0x5c
    unsigned int _fullstream_bytes; // +0x60
    unsigned int _cdn_substream_bytes; // +0x64
    unsigned int _fillup_bytes; // +0x68
    unsigned int _xntp_bytes; // +0x6c
    unsigned int _turn_bytes; // +0x70
    unsigned int _punch_bytes; // +0x74
    unsigned int _tlive_errmsg_early; // +0x78
    unsigned int _tlive_errmsg_miss; // +0x7c
    unsigned int _tlive_errmsg_expire; // +0x80
    unsigned int _subscribe_failure_c; // +0x84
    unsigned int _subscribe_refused_c; // +0x88
    unsigned int _subscribe_request_c; // +0x8c
    unsigned int _subscribe_success_c; // +0x90
    unsigned int _subscribe_timeout_c; // +0x94
    unsigned int _toofar_subscribe_c; // +0x98
    unsigned int _too_depth_subscribe_c; // +0x9c
    unsigned int _checkout_subscribe_c; // +0xa0
    unsigned int _init_sdk_time; // +0xa4
    unsigned long long _liveId; // +0xa8
    NSString * _finderNickname; // +0xb0
    unsigned long long _p2pBytes; // +0xb8
    unsigned long long _cdnBytes; // +0xc0
    NSString * _natType; // +0xc8
    NSString * _isp; // +0xd0
    NSString * _url; // +0xd8
    NSString * _xs_full_url; // +0xe0
    NSString * _uuid; // +0xe8
    NSString * _pieceid; // +0xf0
    NSString * _send; // +0xf8
    NSString * _recv; // +0x100
    NSString * _p2pSdkVersion; // +0x108
}
- (id)toReport;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (unsigned long long)p2pBytes;
- (void)setP2pBytes:(unsigned long long)arg1;
- (unsigned long long)cdnBytes;
- (void)setCdnBytes:(unsigned long long)arg1;
- (id)natType;
- (void)setNatType:(id)arg1;
- (unsigned int)p2p_upload_switch;
- (void)setP2p_upload_switch:(unsigned int)arg1;
- (unsigned int)p2p_download_switch;
- (void)setP2p_download_switch:(unsigned int)arg1;
- (unsigned int)candidates;
- (void)setCandidates:(unsigned int)arg1;
- (unsigned int)standbys;
- (void)setStandbys:(unsigned int)arg1;
- (unsigned int)load;
- (void)setLoad:(unsigned int)arg1;
- (id)isp;
- (void)setIsp:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)xs_full_url;
- (void)setXs_full_url:(id)arg1;
- (unsigned int)xs_4xx_status;
- (void)setXs_4xx_status:(unsigned int)arg1;
- (unsigned int)total_pieces;
- (void)setTotal_pieces:(unsigned int)arg1;
- (unsigned int)verify_pieces;
- (void)setVerify_pieces:(unsigned int)arg1;
- (unsigned int)invalid_pieces;
- (void)setInvalid_pieces:(unsigned int)arg1;
- (unsigned int)tag_missed_invalid_pieces;
- (void)setTag_missed_invalid_pieces:(unsigned int)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)pieceid;
- (void)setPieceid:(id)arg1;
- (id)send;
- (void)setSend:(id)arg1;
- (id)recv;
- (void)setRecv:(id)arg1;
- (unsigned int)abnormal_ts_count;
- (void)setAbnormal_ts_count:(unsigned int)arg1;
- (unsigned int)play_ori_by_no_sei;
- (void)setPlay_ori_by_no_sei:(unsigned int)arg1;
- (unsigned int)buffer_length;
- (void)setBuffer_length:(unsigned int)arg1;
- (unsigned int)max_cdn_firstframe;
- (void)setMax_cdn_firstframe:(unsigned int)arg1;
- (unsigned int)max_p2p_firstframe;
- (void)setMax_p2p_firstframe:(unsigned int)arg1;
- (unsigned int)first_frame_t;
- (void)setFirst_frame_t:(unsigned int)arg1;
- (unsigned int)active_punch_total;
- (void)setActive_punch_total:(unsigned int)arg1;
- (unsigned int)acitve_punch_succ;
- (void)setAcitve_punch_succ:(unsigned int)arg1;
- (unsigned int)passive_punch_total;
- (void)setPassive_punch_total:(unsigned int)arg1;
- (unsigned int)passive_punch_succ;
- (void)setPassive_punch_succ:(unsigned int)arg1;
- (unsigned int)punch_hole;
- (void)setPunch_hole:(unsigned int)arg1;
- (unsigned int)played_bytes;
- (void)setPlayed_bytes:(unsigned int)arg1;
- (unsigned int)fullstream_bytes;
- (void)setFullstream_bytes:(unsigned int)arg1;
- (unsigned int)cdn_substream_bytes;
- (void)setCdn_substream_bytes:(unsigned int)arg1;
- (unsigned int)fillup_bytes;
- (void)setFillup_bytes:(unsigned int)arg1;
- (unsigned int)xntp_bytes;
- (void)setXntp_bytes:(unsigned int)arg1;
- (unsigned int)turn_bytes;
- (void)setTurn_bytes:(unsigned int)arg1;
- (unsigned int)punch_bytes;
- (void)setPunch_bytes:(unsigned int)arg1;
- (unsigned int)tlive_errmsg_early;
- (void)setTlive_errmsg_early:(unsigned int)arg1;
- (unsigned int)tlive_errmsg_miss;
- (void)setTlive_errmsg_miss:(unsigned int)arg1;
- (unsigned int)tlive_errmsg_expire;
- (void)setTlive_errmsg_expire:(unsigned int)arg1;
- (unsigned int)subscribe_failure_c;
- (void)setSubscribe_failure_c:(unsigned int)arg1;
- (unsigned int)subscribe_refused_c;
- (void)setSubscribe_refused_c:(unsigned int)arg1;
- (unsigned int)subscribe_request_c;
- (void)setSubscribe_request_c:(unsigned int)arg1;
- (unsigned int)subscribe_success_c;
- (void)setSubscribe_success_c:(unsigned int)arg1;
- (unsigned int)subscribe_timeout_c;
- (void)setSubscribe_timeout_c:(unsigned int)arg1;
- (unsigned int)toofar_subscribe_c;
- (void)setToofar_subscribe_c:(unsigned int)arg1;
- (unsigned int)too_depth_subscribe_c;
- (void)setToo_depth_subscribe_c:(unsigned int)arg1;
- (unsigned int)checkout_subscribe_c;
- (void)setCheckout_subscribe_c:(unsigned int)arg1;
- (unsigned int)init_sdk_time;
- (void)setInit_sdk_time:(unsigned int)arg1;
- (id)p2pSdkVersion;
- (void)setP2pSdkVersion:(id)arg1;
- (void).cxx_destruct;
@end

