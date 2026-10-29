@interface YtGetLiveTypeReqData : NSObject
{
    float _luxScore; // +0x8
    int _cpNum; // +0xc
    NSString * _appId; // +0x10
    NSString * _extraConfig; // +0x18
    NSString * _clientVersion; // +0x20
    YtExtraOptions * _extraOptions; // +0x28
    NSString * _controlConfig; // +0x30
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (float)luxScore;
- (void)setLuxScore:(float)arg1;
- (int)cpNum;
- (void)setCpNum:(int)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)clientVersion;
- (void)setClientVersion:(id)arg1;
- (id)extraOptions;
- (void)setExtraOptions:(id)arg1;
- (id)controlConfig;
- (void)setControlConfig:(id)arg1;
- (void).cxx_destruct;
@end

