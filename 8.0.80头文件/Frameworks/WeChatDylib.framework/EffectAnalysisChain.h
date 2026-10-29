@interface EffectAnalysisChain : NSObject
{
    EffectContext _context; // +0x8
    EffectAnalysisChain _chain; // +0xa0
}
- (BOOL)initWithffectSpec:(id)arg1;
- (BOOL)loadEffectConfigParser:(id)arg1 effectSpec:(id)arg2;
- (BOOL)processWithBuffer:(char *)arg1 bufferLen:(unsigned long long *)arg2;
- (BOOL)calculateLoudness:(double *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
