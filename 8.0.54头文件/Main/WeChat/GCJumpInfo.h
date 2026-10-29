@interface GCJumpInfo : NSObject
{
    BOOL _popCurrentVc; // +0x8
    BOOL _disableLiteAppMatch; // +0x9
    JumpInfo * _jumpInfo; // +0x10
    UIViewController * _fromViewController; // +0x18
    GCWebViewCacheConfig * _cacheConfig; // +0x20
    NSString * _fromName; // +0x28
    MMWebViewController * _jumpCreatedWebVc; // +0x30
    MMUIViewController * _jumpCreatedVc; // +0x38
    GameLiteAppParam * _liteAppparam; // +0x40
    NSString * _preinjectData; // +0x48
}
- (id)description;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)cacheConfig;
- (void)setCacheConfig:(id)arg1;
- (BOOL)popCurrentVc;
- (void)setPopCurrentVc:(BOOL)arg1;
- (id)fromName;
- (void)setFromName:(id)arg1;
- (id)jumpCreatedWebVc;
- (void)setJumpCreatedWebVc:(id)arg1;
- (id)jumpCreatedVc;
- (void)setJumpCreatedVc:(id)arg1;
- (BOOL)disableLiteAppMatch;
- (void)setDisableLiteAppMatch:(BOOL)arg1;
- (id)liteAppparam;
- (void)setLiteAppparam:(id)arg1;
- (id)preinjectData;
- (void)setPreinjectData:(id)arg1;
- (void).cxx_destruct;
@end

