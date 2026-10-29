@interface WCFinderStreamProfilePluginBase : NSObject <WCFinderStreamProfilePlugin>
{
    WCFinderStreamProfileHeadData * _headData; // +0x8
    id <WCFinderStreamProfilePluginDelegate> _pluginDelegate; // +0x10
}
+ (BOOL)pluginEnable:(id)arg1;
- (void)doLoadCache;
- (void)requestPageData;
- (void)updateOverviewSection:(long long)arg1 necessary:(BOOL)arg2 block:(id /* block */)arg3;
- (void)onFetchDataFinish:(BOOL)arg1 cgiProfile:(id)arg2;
- (id)headData;
- (void)setHeadData:(id)arg1;
- (id)pluginDelegate;
- (void)setPluginDelegate:(id)arg1;
- (void).cxx_destruct;
@end
