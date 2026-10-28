@interface WAJSContextPlugin_Performance : WAJSContextPluginBase
{
    BOOL _enabled; // +0x8
    double _containerWidth; // +0x10
    UIView * _containerView; // +0x18
    double _contentOffset; // +0x20
    UILabel *[3] _subTitle; // +0x28
    NSMutableArray *[3] _arrSubItems; // +0x40
    NSMutableDictionary * _dicCustomKeys; // +0x58
    NSMutableDictionary * _titleKeys; // +0x60
    NSMutableArray * _fpsValues; // +0x68
    BOOL _didAppear; // +0x70
    NSMutableSet * _cachedInnerKeyValues; // +0x78
    NSMutableSet * _cachedCustomKeyValues; // +0x80
    CADisplayLink * _displayLink; // +0x88
    double _lastTime; // +0x90
    unsigned long long _count; // +0x98
    WAPerformanceLabel * _labelFPS; // +0xa0
}
- (id)init;
- (void)pluginDidCreated;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)didRotate:(id)arg1;
- (void)updateStorage;
- (void)insertCachedData;
- (void)disablePerformance;
- (void)clearView;
- (void)initPerformanceView;
- (void)displayLinkTick:(id)arg1;
- (int)recordFpsAndGetAvg:(int)arg1;
- (void)updateGroup;
- (void)insertPerformanceData:(long long)arg1 value:(id)arg2;
- (void)addCommonPerformance:(long long)arg1 value:(id)arg2;
- (void)addCommonPerformanceEx:(long long)arg1 value:(id)arg2;
- (void)insertCustomData:(id)arg1 value:(id)arg2;
- (void)innerInsertCustomData:(id)arg1 value:(id)arg2;
- (BOOL)updateItem:(long long)arg1 type:(long long)arg2 value:(id)arg3;
- (void).cxx_destruct;
@end
