@interface ILinkEngineParams : NSObject
{
    BOOL _isDebug; // +0x8
    unsigned int _audioType; // +0xc
    unsigned int _videoRatio; // +0x10
    unsigned int _videoLength; // +0x14
    NSString * _appId; // +0x18
    NSString * _subAppId; // +0x20
    NSString * _sessionKey; // +0x28
    NSString * _idcInfo; // +0x30
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)subAppId;
- (void)setSubAppId:(id)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id)idcInfo;
- (void)setIdcInfo:(id)arg1;
- (unsigned int)audioType;
- (void)setAudioType:(unsigned int)arg1;
- (unsigned int)videoRatio;
- (void)setVideoRatio:(unsigned int)arg1;
- (unsigned int)videoLength;
- (void)setVideoLength:(unsigned int)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (void).cxx_destruct;
@end

