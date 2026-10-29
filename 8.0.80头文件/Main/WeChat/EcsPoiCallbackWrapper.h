@interface EcsPoiCallbackWrapper : NSObject <LocationRetrieveDelegate>
{
    BOOL _isFinished; // +0x8
    unsigned int _timeoutSeconds; // +0xc
    unsigned int _source; // +0x10
    id /* block */ _callback; // +0x18
    LocationRetriever * _locationRetriever; // +0x20
}
- (id)initWithCallback:(id /* block */)arg1 source:(unsigned int)arg2 timeout:(unsigned int)arg3;
- (void)invokeCallbackWithData:(id)arg1;
- (void)startLocationRequest;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (unsigned int)timeoutSeconds;
- (void)setTimeoutSeconds:(unsigned int)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
