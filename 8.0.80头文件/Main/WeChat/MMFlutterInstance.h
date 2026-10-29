@interface MMFlutterInstance : NSObject
{
    BOOL _deallocDestroyEngine; // +0x8
    BOOL _viewControllerKeepEngine; // +0x9
    NSString * _engineId; // +0x10
    NSString * _engineGroupId; // +0x18
    MMFlutterEngine * _engine; // +0x20
    MMFlutterHybridNavPageState * _pageState; // +0x28
    NSString * _plugin; // +0x30
    MMFlutterEngineGroup * _group; // +0x38
    MMFlutterAppForegroundState * _foregroundState; // +0x40
    NSString * _route; // +0x48
    long long _createCost; // +0x50
    NSMutableArray * _plugins; // +0x58
}
- (id)initWithPlugin:(id)arg1;
- (id)initWithEngineGroup:(id)arg1 plugin:(id)arg2;
- (void)dealloc;
- (void)reportEngineInfo;
- (void)setNavigatorDelegate:(id)arg1;
- (void)addPlugins:(id)arg1;
- (void)push:(id)arg1 arguments:(id)arg2;
- (void)showViewControllerImpl:(id)arg1 viewController:(id)arg2 pageStyle:(id)arg3 completion:(id /* block */)arg4;
- (void)showViewController:(id)arg1 pageStyle:(id)arg2 completion:(id /* block */)arg3 createCompletion:(id /* block */)arg4;
- (void)doShowViewController:(id)arg1 pageStyle:(id)arg2 completion:(id /* block */)arg3 createCompletion:(id /* block */)arg4 flutterVC:(id)arg5;
- (void)show:(id)arg1 pageStyle:(id)arg2;
- (void)show:(id)arg1 pageStyle:(id)arg2 completion:(id /* block */)arg3;
- (void)show:(id)arg1 pageStyle:(id)arg2 completion:(id /* block */)arg3 createCompletion:(id /* block */)arg4;
- (id)createViewController:(Class)arg1;
- (void)createEngine:(id)arg1 arguments:(id)arg2;
- (void)setAttachedPluginToNavigator;
- (void)requestPreRender:(id /* block */)arg1;
- (void)requestPreRender:(id /* block */)arg1 timeOutInMs:(long long)arg2;
- (void)prewarmPlatformViewOverlays:(unsigned long long)arg1;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (id)engineGroupId;
- (void)setEngineGroupId:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)pageState;
- (void)setPageState:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (BOOL)deallocDestroyEngine;
- (void)setDeallocDestroyEngine:(BOOL)arg1;
- (BOOL)viewControllerKeepEngine;
- (void)setViewControllerKeepEngine:(BOOL)arg1;
- (id)group;
- (void)setGroup:(id)arg1;
- (id)foregroundState;
- (void)setForegroundState:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (long long)createCost;
- (void)setCreateCost:(long long)arg1;
- (id)plugins;
- (void)setPlugins:(id)arg1;
- (void).cxx_destruct;
@end
