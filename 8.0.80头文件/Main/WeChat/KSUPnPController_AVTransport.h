@interface KSUPnPController_AVTransport : KSUPnPController
- (void)setAVTransportURI:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setAVTransportURI:(id)arg1 title:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)playWithCompletionHandler:(id /* block */)arg1;
- (void)pauseWithCompletionHandler:(id /* block */)arg1;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
@end
