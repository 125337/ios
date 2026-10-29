@interface WCFinderJumpInfoTargetDeallocToken : NSObject
{
    BOOL _hasCalledBlock; // +0x8
    id /* block */ _block; // +0x10
}
- (void)invokeOnce;
- (void)dealloc;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (BOOL)hasCalledBlock;
- (void)setHasCalledBlock:(BOOL)arg1;
- (void).cxx_destruct;
@end
