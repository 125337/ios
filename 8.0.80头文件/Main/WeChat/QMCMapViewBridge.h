@interface QMCMapViewBridge : NSObject
{
    QMCAIMapView * _mapView; // +0x8
    NSMutableDictionary * _messageHandlers; // +0x10
    NSMutableDictionary * _responseCallbacks; // +0x18
    id /* block */ _messageObserver; // +0x20
    unsigned long long _nextCallbackSeq; // +0x28
}
- (id)initWithMapView:(id)arg1;
- (void)registerHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)removeHandler:(id)arg1;
- (void)removeAllHandlers;
- (void)callHandler:(id)arg1 data:(id)arg2 response:(id /* block */)arg3;
- (void)_deliverResponse:(id)arg1 forCallbackId:(id)arg2;
- (void)setMessageObserver:(id /* block */)arg1;
- (void)sendToUI:(id)arg1 params:(id)arg2;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (id)messageHandlers;
- (void)setMessageHandlers:(id)arg1;
- (id)responseCallbacks;
- (void)setResponseCallbacks:(id)arg1;
- (id /* block */)messageObserver;
- (unsigned long long)nextCallbackSeq;
- (void)setNextCallbackSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
