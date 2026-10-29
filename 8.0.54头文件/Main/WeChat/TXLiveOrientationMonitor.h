@interface TXLiveOrientationMonitor : NSObject
{
    Lock _lock; // +0x8
    int _display_orientation; // +0x48
    Client * _client; // +0x50
}
+ (long long)currentInterfaceOrientation;
- (id)initWithClient:(Client *)arg1;
- (void)dealloc;
- (void)terminal;
- (int)getOrientation;
- (void)onOrientationChange;
- (int)convertToInnerDisplayOrientation:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

