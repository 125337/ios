@interface OrientationListener : NSObject <IOrientationListener>
{
    long long lastDeviceOrientation; // +0x8
    NSString * lastOrientation; // +0x10
    id _observer; // +0x18
}
- (void)startOrientationListener:(id /* block */)arg1;
- (void)getOrientation:(id /* block */)arg1;
- (id)getDeviceOrientation;
- (void)stopOrientationListener;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void).cxx_destruct;
@end

