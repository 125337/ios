@interface MMLiveDisplayLink : NSObject
{
    CADisplayLink * _displayLink; // +0x8
    id /* block */ _callback; // +0x10
    long long _framesPerSecond; // +0x18
}
- (void)dealloc;
- (void)start;
- (void)setFramesPerSecond:(long long)arg1;
- (void)stop;
- (void)invalidate;
- (void)update:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (long long)framesPerSecond;
- (void).cxx_destruct;
@end

