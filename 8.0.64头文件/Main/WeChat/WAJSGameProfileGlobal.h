@interface WAJSGameProfileGlobal : NSObject <IWAJSGameProfileGlobal>
{
    WAJSGameService * _service; // +0x8
}
- (id)initWithService:(id)arg1;
- (void)profileStart;
- (id)profileStop;
- (BOOL)isProfileFromStart;
- (void)sendInspectMessage:(id)arg1;
- (void)onInspectMessage:(id)arg1;
- (void)sendExternalInspectMessage:(id)arg1;
- (void)onExternalInspectMessage:(id)arg1;
- (id)getSystemNanoTime;
- (id)performanceNow;
- (id)service;
- (void)setService:(id)arg1;
- (void).cxx_destruct;
@end
