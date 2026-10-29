@interface WxaFlutterViewController : FlutterViewController <WxaFlutterViewControllerDelegate>
{
    BOOL _disableScroll; // +0x8
    BOOL _needKeepAlive; // +0x9
    BOOL _hasDealloc; // +0xa
    int _engineId; // +0xc
    unsigned int _appUuid; // +0x10
    NSString * _activityId; // +0x18
    NSString * _pageName; // +0x20
    NSMutableDictionary * _params; // +0x28
    WxaFlutterViewLifeCycle * _lifeCycle; // +0x30
    FlutterMethodChannel * _channel; // +0x38
}
- (id)init;
- (id)lifeCycle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)preDealloc;
- (void)dealloc;
- (void)setupChannelMethod;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)pauseView;
- (void)resumeView;
- (id)getActivityId;
- (id)getFlutterViewName;
- (id)getFlutterViewParams;
- (id)generateParams;
- (id)getFlutterEngine;
- (int)engineId;
- (void)setEngineId:(int)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setLifeCycle:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (BOOL)needKeepAlive;
- (void)setNeedKeepAlive:(BOOL)arg1;
- (BOOL)hasDealloc;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end

