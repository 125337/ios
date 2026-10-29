@interface TXCGSensor : NSObject
{
    BOOL _enabled; // +0x8
    id <TXCGSensorDelegate> _delegate; // +0x10
    unsigned long long _gSensorMode; // +0x18
    unsigned long long _rotation; // +0x20
    long long _homeOrientation; // +0x28
    TXCDispatchQueue * _queue; // +0x30
    long long _interfaceOrientation; // +0x38
}
+ (long long)currentInterfaceOrientation;
- (id)initWithQueue:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)onOrientationChange;
- (void)setGSensorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setHomeOrientation:(long long)arg1;
- (void)notifyEncodeChange;
- (void)notifyRenderChange;
- (BOOL)isViewInLandscape;
- (unsigned long long)encodeRotation;
- (unsigned long long)renderRotation;
- (unsigned long long)encodeRotationWithDeviceOrientation:(long long)arg1;
- (unsigned long long)renderRotationWithFixedLayout;
- (BOOL)enabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)gSensorMode;
- (unsigned long long)rotation;
- (long long)homeOrientation;
- (id)queue;
- (long long)interfaceOrientation;
- (void)setInterfaceOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

