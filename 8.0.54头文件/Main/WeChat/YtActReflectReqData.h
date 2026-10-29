@interface YtActReflectReqData : NSObject
{
    float _lux; // +0x8
    int _cpNum; // +0xc
    NSString * _rgbConfig; // +0x10
    NSString * _appId; // +0x18
    NSString * _video; // +0x20
    NSString * _version; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _extraConfig; // +0x38
    YtExtraOptions * _extraOptions; // +0x40
    NSString * _controlConfig; // +0x48
    NSString * _actionStr; // +0x50
    NSString * _config; // +0x58
    vector<float, std::allocator<float>> _bestShape; // +0x60
    vector<float, std::allocator<float>> _eyeShape; // +0x78
    vector<float, std::allocator<float>> _mouthShape; // +0x90
    Mat _bestImg; // +0xa8
    Mat _eyeImg; // +0x108
    Mat _mouthImg; // +0x168
    YTFullPack _fullDataPack; // +0x1c8
}
- (YTFullPack)fullDataPack;
- (void)setFullDataPack:(YTFullPack)arg1;
- (id)rgbConfig;
- (void)setRgbConfig:(id)arg1;
- (Mat)bestImg;
- (void)setBestImg:(Mat)arg1;
- (vector<float, std::allocator<float>>)bestShape;
- (void)setBestShape:(vector<float, std::allocator<float>>)arg1;
- (Mat)eyeImg;
- (void)setEyeImg:(Mat)arg1;
- (vector<float, std::allocator<float>>)eyeShape;
- (void)setEyeShape:(vector<float, std::allocator<float>>)arg1;
- (Mat)mouthImg;
- (void)setMouthImg:(Mat)arg1;
- (vector<float, std::allocator<float>>)mouthShape;
- (void)setMouthShape:(vector<float, std::allocator<float>>)arg1;
- (float)lux;
- (void)setLux:(float)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (int)cpNum;
- (void)setCpNum:(int)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)extraOptions;
- (void)setExtraOptions:(id)arg1;
- (id)controlConfig;
- (void)setControlConfig:(id)arg1;
- (id)actionStr;
- (void)setActionStr:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

