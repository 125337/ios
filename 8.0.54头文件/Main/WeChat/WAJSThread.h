@interface WAJSThread : NSObject <IWAJSThread>
{
    BOOL _isDebuging; // +0x8
    WAJSCoreService * _service; // +0x10
}
- (id)initWithService:(id)arg1;
- (void)suspend;
- (void)resume;
- (BOOL)isDebuging;
- (id)service;
- (void)setService:(id)arg1;
- (void).cxx_destruct;
@end

