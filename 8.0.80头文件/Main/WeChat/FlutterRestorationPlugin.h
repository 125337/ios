@interface FlutterRestorationPlugin : NSObject
{
    BOOL _waitForData; // +0x8
    BOOL _restorationEnabled; // +0x9
    NSData * _restorationData; // +0x10
    id /* block */ _pendingRequest; // +0x18
}
- (id)initWithChannel:(id)arg1 restorationEnabled:(BOOL)arg2;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)setRestorationData:(id)arg1;
- (void)markRestorationComplete;
- (void)reset;
- (id)dataForFramework;
- (id)restorationData;
- (id /* block */)pendingRequest;
- (void)setPendingRequest:(id /* block */)arg1;
- (void).cxx_destruct;
@end
