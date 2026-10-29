@interface ODSThreadedDisplayLinkIOS : NSObject
{
    BOOL _isStarted; // +0x8
    CADisplayLink * _displayLink; // +0x10
    void * _owner; // +0x18
    long long _preferredFramesPerSecond; // +0x20
}
- (id)initWithOwner:(void *)arg1;
- (void)start;
- (void)stop;
- (void)refresh;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (long long)preferredFramesPerSecond;
- (void).cxx_destruct;
@end

