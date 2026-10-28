@interface MMFlutterViewStackData : NSObject
{
    NSString * _engineId; // +0x8
    unsigned long long _viewState; // +0x10
}
- (id)initWithEngineId:(id)arg1 viewState:(unsigned long long)arg2;
- (BOOL)isVisible;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (unsigned long long)viewState;
- (void)setViewState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
