@interface EffectChain : NSObject
{
    EffectContext _context; // +0x8
    EffectChain _chain; // +0xa0
}
- (BOOL)loadEffectConfigString:(id)arg1 withEffectSpec:(id)arg2;
- (BOOL)processWithBuffer:(char *)arg1 bufferLen:(unsigned long long *)arg2;
- (void)reset;
- (float)latencyMs;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

