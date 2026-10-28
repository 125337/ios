@interface JSC2AutoreleaseObject : NSObject
{
    id /* block */ _block; // +0x8
}
+ (id)valueWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
@end
