@interface WCFinderDisplayLinkTool : NSObject
{
    CADisplayLink * _displayLink; // +0x8
    double _begin; // +0x10
    double _duration; // +0x18
    id /* block */ _updater; // +0x20
    WCFinderDisplayLinkTool * _selfRetain; // +0x28
    id /* block */ _complete; // +0x30
    void * * _timeFunc; // +0x38
}
+ (void)runAnimation:(double)arg1 update:(id /* block */)arg2 timeFunc:(void * *)arg3 complete:(id /* block */)arg4;
- (id)initWithUpdater:(id /* block */)arg1 duration:(double)arg2;
- (void)start;
- (void)onDisplayLinkUpdate;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)begin;
- (void)setBegin:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id /* block */)updater;
- (void)setUpdater:(id /* block */)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (void * *)timeFunc;
- (void)setTimeFunc:(void * *)arg1;
- (void).cxx_destruct;
@end
