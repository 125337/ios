@interface TAVDisplayTriggerMachine : NSObject
{
    id /* block */ _triggerOperation; // +0x8
    long long _preferredFramesPerSecond; // +0x10
    CADisplayLink * _displayLink; // +0x18
    VIDisplayTriggerObject * _triggerObject; // +0x20
}
- (void)dealloc;
- (id)initWithTriggerOperation:(id /* block */)arg1;
- (id)init;
- (void)setTriggerOperation:(id /* block */)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)start;
- (void)pause;
- (id /* block */)triggerOperation;
- (long long)preferredFramesPerSecond;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)triggerObject;
- (void)setTriggerObject:(id)arg1;
- (void).cxx_destruct;
@end
