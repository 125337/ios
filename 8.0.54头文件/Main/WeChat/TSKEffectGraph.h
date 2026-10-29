@interface TSKEffectGraph : NSObject
{
    EffectSpec * _spec; // +0x8
    EffectGraph * _graph; // +0x10
}
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2;
- (BOOL)setEffectType:(unsigned long long)arg1;
- (BOOL)processData:(char *)arg1 dataSize:(int)arg2 stage:(unsigned long long)arg3;
- (void)reset;
- (id)spec;
- (void)setSpec:(id)arg1;
- (id)graph;
- (void)setGraph:(id)arg1;
- (void).cxx_destruct;
@end

