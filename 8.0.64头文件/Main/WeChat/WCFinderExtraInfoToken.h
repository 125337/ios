@interface WCFinderExtraInfoToken : NSObject
{
    BOOL _hasClean; // +0x8
    id /* block */ _cleanupBlock; // +0x10
    NSDictionary * _appendDict; // +0x18
}
- (void)dealloc;
- (void)clean;
- (id /* block */)cleanupBlock;
- (void)setCleanupBlock:(id /* block */)arg1;
- (id)appendDict;
- (void)setAppendDict:(id)arg1;
- (BOOL)hasClean;
- (void)setHasClean:(BOOL)arg1;
- (void).cxx_destruct;
@end
