@interface LinkWeAppJumpWrap : MMObject
{
    BOOL _isForbidSSignal; // +0x8
    unsigned int _appState; // +0xc
    NSString * _appid; // +0x10
    NSString * _pagePath; // +0x18
    NSString * _shareKey; // +0x20
    NSString * _chattoolUsername; // +0x28
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)appState;
- (void)setAppState:(unsigned int)arg1;
- (BOOL)isForbidSSignal;
- (void)setIsForbidSSignal:(BOOL)arg1;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (id)chattoolUsername;
- (void)setChattoolUsername:(id)arg1;
- (void).cxx_destruct;
@end

