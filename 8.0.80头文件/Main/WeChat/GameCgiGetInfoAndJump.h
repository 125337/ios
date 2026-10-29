@interface GameCgiGetInfoAndJump : NSObject
{
    int _fromType; // +0x8
    NSString * _fromAppId; // +0x10
    NSString * _fromUrl; // +0x18
    NSString * _promotionId; // +0x20
    UIViewController * _fromViewController; // +0x28
    GameItem * _gameInfo; // +0x30
}
- (id)initWithType:(id)arg1 url:(id)arg2 type:(int)arg3 viewController:(id)arg4;
- (void)GetLaunchGameInfo:(id)arg1 promotionId:(id)arg2 success:(id /* block */)arg3 fail:(id /* block */)arg4;
- (void)openAppStore:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)openLiteApp:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)openInWebview:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)handleJumpInfo:(id)arg1 webviewInfo:(id)arg2 success:(id /* block */)arg3 fail:(id /* block */)arg4;
- (void)openWebview:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)reportStartAction:(id)arg1;
- (void)reportPromotionId:(int)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)showAlert:(id)arg1;
- (id)getWebViewController:(id)arg1 statusBarBgColor:(id)arg2 statusBarStyle:(id)arg3 toUrl:(id)arg4;
- (BOOL)analyzeBackColor:(id *)arg1 frontColor:(id *)arg2 fromUrl:(id)arg3 andParamColor:(id)arg4 andParamStyle:(id)arg5 isUseImmersiveUI:(BOOL *)arg6;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (id)fromUrl;
- (void)setFromUrl:(id)arg1;
- (id)promotionId;
- (void)setPromotionId:(id)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)gameInfo;
- (void)setGameInfo:(id)arg1;
- (void).cxx_destruct;
@end
