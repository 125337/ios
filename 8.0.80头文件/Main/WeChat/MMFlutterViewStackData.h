@interface MMFlutterViewStackData : NSObject
{
    BOOL _pageExited; // +0x8
    NSString * _engineId; // +0x10
    unsigned long long _viewState; // +0x18
    NSString * _plugin; // +0x20
    NSString * _route; // +0x28
}
- (id)initWithEngineId:(id)arg1 viewState:(unsigned long long)arg2;
- (BOOL)isVisible;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (unsigned long long)viewState;
- (void)setViewState:(unsigned long long)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (BOOL)pageExited;
- (void)setPageExited:(BOOL)arg1;
- (void).cxx_destruct;
@end
