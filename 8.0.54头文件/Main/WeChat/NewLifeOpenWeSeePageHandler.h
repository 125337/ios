@interface NewLifeOpenWeSeePageHandler : NewLifeActionHandler
{
    MMUIViewController * _vc; // +0x8
    WSWeSeeRouter * _router; // +0x10
    NSString * _sessionId; // +0x18
}
- (void)handleRequest:(id)arg1;
- (void)openH5MessagePageWith:(id)arg1;
- (id)openGoodLookPagePramas;
- (id)openSeeItLatePramas;
- (id)openWatchedArticlesPramas;
- (id)openWatchedVideosPramas;
- (void)report14791WithType:(long long)arg1 content:(id)arg2 sessionId:(id)arg3;
- (id)settingUrl;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)router;
- (void)setRouter:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

