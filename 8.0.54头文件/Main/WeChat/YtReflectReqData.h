@interface YtReflectReqData : NSObject
{
    float _lux; // +0x8
    int _backendProtoType; // +0xc
    int _cpNum; // +0x10
    NSString * _rgbConfig; // +0x18
    NSString * _appId; // +0x20
    NSString * _sessionId; // +0x28
    YtFaceFrameInfo * _eyeImage; // +0x30
    YtFaceFrameInfo * _mouthImage; // +0x38
    NSString * _version; // +0x40
    NSString * _extraConfig; // +0x48
    YtExtraOptions * _extraOptions; // +0x50
    YtFaceFrameInfo * _bestImage; // +0x58
    YTFullPack _fullDataPack; // +0x60
}
- (YTFullPack)fullDataPack;
- (void)setFullDataPack:(YTFullPack)arg1;
- (id)rgbConfig;
- (void)setRgbConfig:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)eyeImage;
- (void)setEyeImage:(id)arg1;
- (id)mouthImage;
- (void)setMouthImage:(id)arg1;
- (float)lux;
- (void)setLux:(float)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (int)backendProtoType;
- (void)setBackendProtoType:(int)arg1;
- (int)cpNum;
- (void)setCpNum:(int)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)extraOptions;
- (void)setExtraOptions:(id)arg1;
- (id)bestImage;
- (void)setBestImage:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

