@interface SensorListener : NSObject <IOrientationListener>
{
    CMMotionManager * motionManager; // +0x8
    NSString * lastOrientation; // +0x10
}
- (void)initMotionManager;
- (void)startOrientationListener:(id /* block */)arg1;
- (void)getOrientation:(id /* block */)arg1;
- (void)stopOrientationListener;
- (void).cxx_destruct;
@end

