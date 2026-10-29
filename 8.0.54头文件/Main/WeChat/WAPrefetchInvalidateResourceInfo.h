@interface WAPrefetchInvalidateResourceInfo : MMObject <PBCoding>
{
    NSMutableDictionary * _invalidateCodeTokens; // +0x8
    NSMutableDictionary * _invalidateContactTokens; // +0x10
}
+ (void)PBArrayAdd_invalidateCodeTokens;
+ (void)PBArrayAdd_invalidateContactTokens;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)invalidateCodeTokens;
- (void)setInvalidateCodeTokens:(id)arg1;
- (id)invalidateContactTokens;
- (void)setInvalidateContactTokens:(id)arg1;
- (void).cxx_destruct;
@end

