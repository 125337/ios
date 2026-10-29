@interface WCFinderJumpNativeMusicTopicParams : NSObject
{
    unsigned int _opSwitch; // +0x8
    unsigned int _hideFlag; // +0xc
    int _musicPageType; // +0x10
    int _likeFlag; // +0x14
    NSString * _musicIdStr; // +0x18
    NSString * _byPassInfoString; // +0x20
    NSArray * _singers; // +0x28
    NSString * _topicWording; // +0x30
    NSString * _songId; // +0x38
    NSString * _audioId; // +0x40
    NSString * _miaojianSdkPrefix; // +0x48
    NSString * _listenIdStr; // +0x50
    NSString * _listenSimplePlayInfoBase64; // +0x58
    long long _likeAction; // +0x60
    NSString * _listenCtxRecommendInfoBufferBase64; // +0x68
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (unsigned long long)musicId;
- (id)byPassInfo;
- (id)playerInfo;
- (id)musicIdStr;
- (void)setMusicIdStr:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (id)singers;
- (void)setSingers:(id)arg1;
- (unsigned int)opSwitch;
- (void)setOpSwitch:(unsigned int)arg1;
- (unsigned int)hideFlag;
- (void)setHideFlag:(unsigned int)arg1;
- (int)musicPageType;
- (void)setMusicPageType:(int)arg1;
- (id)topicWording;
- (void)setTopicWording:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (id)miaojianSdkPrefix;
- (void)setMiaojianSdkPrefix:(id)arg1;
- (id)listenIdStr;
- (void)setListenIdStr:(id)arg1;
- (int)likeFlag;
- (void)setLikeFlag:(int)arg1;
- (id)listenSimplePlayInfoBase64;
- (void)setListenSimplePlayInfoBase64:(id)arg1;
- (long long)likeAction;
- (void)setLikeAction:(long long)arg1;
- (id)listenCtxRecommendInfoBufferBase64;
- (void)setListenCtxRecommendInfoBufferBase64:(id)arg1;
- (void).cxx_destruct;
@end

