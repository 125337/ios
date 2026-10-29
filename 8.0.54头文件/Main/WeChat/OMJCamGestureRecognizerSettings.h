@interface OMJCamGestureRecognizerSettings : NSObject
{
    BOOL _isGestureEnabled; // +0x8
    NSArray * _enabledGestures; // +0x10
}
- (id)initWithBackingSettings:(const void *)arg1;
- (BOOL)isGestureEnabled:(long long)arg1;
- (BOOL)isGestureEnabled;
- (id)enabledGestures;
- (void).cxx_destruct;
@end

