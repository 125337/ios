@interface MMLiveRemoteTrtcCustomRenderComposeInitParam : NSObject
{
    BOOL _enableRCI; // +0x8
    long long _weffectScene; // +0x10
    WeeffectRenderContextWrapper * _sharedRenderContext; // +0x18
    unsigned long long _workingMode; // +0x20
}
- (long long)weffectScene;
- (void)setWeffectScene:(long long)arg1;
- (id)sharedRenderContext;
- (void)setSharedRenderContext:(id)arg1;
- (unsigned long long)workingMode;
- (void)setWorkingMode:(unsigned long long)arg1;
- (BOOL)enableRCI;
- (void)setEnableRCI:(BOOL)arg1;
- (void).cxx_destruct;
@end

