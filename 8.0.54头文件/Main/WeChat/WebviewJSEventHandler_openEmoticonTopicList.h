@interface WebviewJSEventHandler_openEmoticonTopicList : WebviewJSEventHandlerBase
{
    JSEvent * m_event; // +0x8
    StoreEmoticonTopicProxyLogic * _proxyLogic; // +0x10
}
+ (id)dictionForBannerSet:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)handleWithParams:(id)arg1 AndFromViewController:(id)arg2 extrance:(long long)arg3;
- (BOOL)handleWithParams:(id)arg1 AndNavigationController:(id)arg2 extrance:(long long)arg3;
- (BOOL)handleWithParams:(id)arg1 AndFromViewController:(id)arg2 AndFallBackNavigationController:(id)arg3 extrance:(long long)arg4;
- (id)viewControllerWithParams:(id)arg1 extrance:(long long)arg2;
- (id)genBannerSetFromParam:(id)arg1;
- (id)proxyLogic;
- (void)endWithOk;
- (void)endWithFail;
- (void)setProxyLogic:(id)arg1;
- (void).cxx_destruct;
@end

