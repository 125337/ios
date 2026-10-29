@interface GCWebViewCacheConfig : NSObject
{
    BOOL _isHalfScreen; // +0x8
    BOOL _reCreateAfterUsed; // +0x9
    BOOL _checkLimitedMode; // +0xa
    NSString * _url; // +0x10
    NSString * _customDataStr; // +0x18
    UIViewController * _viewController; // +0x20
    id /* block */ _onCloseBlock; // +0x28
    double _webviewHeight; // +0x30
    NSString * _reuseIndentifier; // +0x38
    UIColor * _backGroundColor; // +0x40
    NSString * _preinjectData; // +0x48
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)customDataStr;
- (void)setCustomDataStr:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)onCloseBlock;
- (void)setOnCloseBlock:(id /* block */)arg1;
- (double)webviewHeight;
- (void)setWebviewHeight:(double)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (id)reuseIndentifier;
- (void)setReuseIndentifier:(id)arg1;
- (BOOL)reCreateAfterUsed;
- (void)setReCreateAfterUsed:(BOOL)arg1;
- (id)backGroundColor;
- (void)setBackGroundColor:(id)arg1;
- (id)preinjectData;
- (void)setPreinjectData:(id)arg1;
- (BOOL)checkLimitedMode;
- (void)setCheckLimitedMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
