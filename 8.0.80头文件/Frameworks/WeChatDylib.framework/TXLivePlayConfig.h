@interface TXLivePlayConfig : NSObject
{
    BOOL _bAutoAdjustCacheTime; // +0x8
    BOOL _enableMessage; // +0x9
    BOOL _enableMetaData; // +0xa
    BOOL _enableAEC; // +0xb
    BOOL _enableNearestIP; // +0xc
    float _cacheTime; // +0x10
    float _maxAutoAdjustCacheTime; // +0x14
    float _minAutoAdjustCacheTime; // +0x18
    int _videoBlockThreshold; // +0x1c
    int _connectRetryCount; // +0x20
    int _connectRetryInterval; // +0x24
    unsigned int _playerPixelFormatType; // +0x28
    int _rtmpChannelType; // +0x2c
    NSString * _flvSessionKey; // +0x30
    NSDictionary * _headers; // +0x38
}
- (id)init;
- (id)description;
- (float)cacheTime;
- (void)setCacheTime:(float)arg1;
- (BOOL)bAutoAdjustCacheTime;
- (void)setBAutoAdjustCacheTime:(BOOL)arg1;
- (float)maxAutoAdjustCacheTime;
- (void)setMaxAutoAdjustCacheTime:(float)arg1;
- (float)minAutoAdjustCacheTime;
- (void)setMinAutoAdjustCacheTime:(float)arg1;
- (int)videoBlockThreshold;
- (void)setVideoBlockThreshold:(int)arg1;
- (int)connectRetryCount;
- (void)setConnectRetryCount:(int)arg1;
- (int)connectRetryInterval;
- (void)setConnectRetryInterval:(int)arg1;
- (BOOL)enableMessage;
- (void)setEnableMessage:(BOOL)arg1;
- (BOOL)enableMetaData;
- (void)setEnableMetaData:(BOOL)arg1;
- (id)flvSessionKey;
- (void)setFlvSessionKey:(id)arg1;
- (unsigned int)playerPixelFormatType;
- (void)setPlayerPixelFormatType:(unsigned int)arg1;
- (id)headers;
- (void)setHeaders:(id)arg1;
- (BOOL)enableAEC;
- (void)setEnableAEC:(BOOL)arg1;
- (BOOL)enableNearestIP;
- (void)setEnableNearestIP:(BOOL)arg1;
- (int)rtmpChannelType;
- (void)setRtmpChannelType:(int)arg1;
- (void).cxx_destruct;
@end
