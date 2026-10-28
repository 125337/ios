@interface JSLauchMiniProgramParam : NSObject
{
    NSDictionary * _dictLastAppInfo; // +0x8
    NSString * _gameLiveInfoOfReferInfo; // +0x10
    id _referrerData; // +0x18
    id _privateReferrerData; // +0x20
    NSDictionary * _halfScreenParam; // +0x28
    long long _scene; // +0x30
}
- (id)dictLastAppInfo;
- (void)setDictLastAppInfo:(id)arg1;
- (id)gameLiveInfoOfReferInfo;
- (void)setGameLiveInfoOfReferInfo:(id)arg1;
- (id)referrerData;
- (void)setReferrerData:(id)arg1;
- (id)privateReferrerData;
- (void)setPrivateReferrerData:(id)arg1;
- (id)halfScreenParam;
- (void)setHalfScreenParam:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end
