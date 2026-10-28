@interface WAJITRuntime : JITRuntime
{
    WAJITBindingEnv * _bindingEnv; // +0x8
    MMTimer * _perfTimer; // +0x10
    long long _jankTime; // +0x18
    long long _renderTime; // +0x20
    struct _performance; // +0x28
}
- (struct)getPerformance;
- (void)onTimer;
- (void)startPerformanceLogic;
- (void)stopPerformanceLogic;
- (void)resetJankInfo;
- (id)init;
- (id)initWithBaseUrl:(id)arg1;
- (void)dealloc;
- (id)bindingEnv;
- (void)setBindingEnv:(id)arg1;
- (id)perfTimer;
- (void)setPerfTimer:(id)arg1;
- (struct)performance;
- (void)setPerformance:(struct)arg1;
- (long long)jankTime;
- (void)setJankTime:(long long)arg1;
- (long long)renderTime;
- (void)setRenderTime:(long long)arg1;
- (void).cxx_destruct;
@end
