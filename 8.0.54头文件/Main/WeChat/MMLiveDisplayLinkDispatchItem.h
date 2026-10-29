@interface MMLiveDisplayLinkDispatchItem : NSObject
{
    CADisplayLink * _displayLink; // +0x8
    id /* block */ _block; // +0x10
    double _beginTime; // +0x18
}
- (id)initWithBlock:(id /* block */)arg1;
- (void)start;
- (void)displayLinkCallback:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (void).cxx_destruct;
@end

