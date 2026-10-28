@interface JoinRoomInfo : NSObject
{
    BOOL _forceCellularNetwork; // +0x8
    int _audioType; // +0xc
    int _timeStamp; // +0x10
    int _roomType; // +0x14
    int _maxWidth; // +0x18
    int _maxHeight; // +0x1c
    int _videoRatio; // +0x20
    int _videoRotation; // +0x24
    int _maxDecodeFPS; // +0x28
    int _fixedVideoResolution; // +0x2c
    unsigned int _lifespan; // +0x30
    NSString * _appId; // +0x38
    NSString * _busiAppId; // +0x40
    NSString * _signature; // +0x48
    NSString * _nonceStr; // +0x50
    NSString * _groupId; // +0x58
    ConfigInfo * _configInfo; // +0x60
    NSString * _privateData; // +0x68
    NSString * _sessionKey; // +0x70
    long long _roomId; // +0x78
}
- (id)init;
- (int)audioType;
- (void)setAudioType:(int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)busiAppId;
- (void)setBusiAppId:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (int)timeStamp;
- (void)setTimeStamp:(int)arg1;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (int)maxWidth;
- (void)setMaxWidth:(int)arg1;
- (int)maxHeight;
- (void)setMaxHeight:(int)arg1;
- (int)videoRatio;
- (void)setVideoRatio:(int)arg1;
- (int)videoRotation;
- (void)setVideoRotation:(int)arg1;
- (int)maxDecodeFPS;
- (void)setMaxDecodeFPS:(int)arg1;
- (int)fixedVideoResolution;
- (void)setFixedVideoResolution:(int)arg1;
- (id)configInfo;
- (void)setConfigInfo:(id)arg1;
- (id)privateData;
- (void)setPrivateData:(id)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (unsigned int)lifespan;
- (void)setLifespan:(unsigned int)arg1;
- (long long)roomId;
- (void)setRoomId:(long long)arg1;
- (BOOL)forceCellularNetwork;
- (void)setForceCellularNetwork:(BOOL)arg1;
- (void).cxx_destruct;
@end
