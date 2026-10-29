@interface FLTWKProgressionDelegate : NSObject
{
    FlutterMethodChannel * _methodChannel; // +0x8
}
- (id)initWithWebView:(id)arg1 channel:(id)arg2;
- (void)stopObservingProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void).cxx_destruct;
@end

