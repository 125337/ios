@interface CommonHybridRouterEngineHandler : CommonHybridRouterHandlerBase
{
    MMFlutterInstance * _engine; // +0x8
    HybridRouterPageInfo * _pageInfo; // +0x10
}
- (void)handleOpen:(id)arg1 customArgs:(id)arg2 callback:(id /* block */)arg3;
- (id)getPlatformKey;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (void).cxx_destruct;
@end
