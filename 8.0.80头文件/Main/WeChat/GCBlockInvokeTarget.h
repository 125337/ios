@interface GCBlockInvokeTarget : NSObject
{
    id /* block */ _block; // +0x8
}
- (id)initWithBlock:(id /* block */)arg1;
- (void)invoke:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
