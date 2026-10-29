@interface LiteAppLauchMiniProgramParam : NSObject
{
    BOOL _openDataChannel; // +0x8
    id _referrerData; // +0x10
    id _privateReferrerData; // +0x18
    NSString * _mode; // +0x20
    NSDictionary * _halfScreenParam; // +0x28
    NSDictionary * _singlePageParam; // +0x30
    NSDictionary * _uiParam; // +0x38
    long long _scene; // +0x40
    NSString * _sceneNote; // +0x48
    NSString * _liteGameInfo; // +0x50
    NSString * _enterType; // +0x58
    NSString * _loadingDarkModeStyle; // +0x60
}
- (id)referrerData;
- (void)setReferrerData:(id)arg1;
- (id)privateReferrerData;
- (void)setPrivateReferrerData:(id)arg1;
- (BOOL)openDataChannel;
- (void)setOpenDataChannel:(BOOL)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (id)halfScreenParam;
- (void)setHalfScreenParam:(id)arg1;
- (id)singlePageParam;
- (void)setSinglePageParam:(id)arg1;
- (id)uiParam;
- (void)setUiParam:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)liteGameInfo;
- (void)setLiteGameInfo:(id)arg1;
- (id)enterType;
- (void)setEnterType:(id)arg1;
- (id)loadingDarkModeStyle;
- (void)setLoadingDarkModeStyle:(id)arg1;
- (void).cxx_destruct;
@end

