@interface MMGCRootsTracingGraphConfiguration : NSObject
{
    BOOL _shouldIncludeBlockAddress; // +0x8
    BOOL _shouldCacheLayouts; // +0x9
    BOOL _onlySearchAppSymbol; // +0xa
    id /* block */ _transformerBlock; // +0x10
    NSMutableDictionary * _layoutCache; // +0x18
}
- (id)initWithTransformerBlock:(id /* block */)arg1 shouldIncludeBlockAddress:(BOOL)arg2;
- (id)initWithTransformerBlock:(id /* block */)arg1;
- (id)init;
- (id /* block */)transformerBlock;
- (BOOL)shouldIncludeBlockAddress;
- (id)layoutCache;
- (BOOL)shouldCacheLayouts;
- (BOOL)onlySearchAppSymbol;
- (void)setOnlySearchAppSymbol:(BOOL)arg1;
- (void).cxx_destruct;
@end
