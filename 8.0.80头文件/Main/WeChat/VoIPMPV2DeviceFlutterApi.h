@interface VoIPMPV2DeviceFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onDevicePhysicalOrientationChangedDegree:(long long)arg1 completion:(id /* block */)arg2;
- (void)onRemoteDevicePhysicalOrientationChangedDegree:(long long)arg1 completion:(id /* block */)arg2;
- (void)onSystemRotateLockedChangedLocked:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onLocalUiOrientationChangedDegree:(long long)arg1 completion:(id /* block */)arg2;
- (void)onLocalNaturalOrientationChangedDegree:(long long)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
