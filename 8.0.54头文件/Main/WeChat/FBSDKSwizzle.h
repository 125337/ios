@interface FBSDKSwizzle : NSObject
{
    unsigned int _numArgs; // +0x8
    Class _class; // +0x10
    SEL _selector; // +0x18
    void * * _originalMethod; // +0x20
    NSMapTable * _blocks; // +0x28
}
- (id)init;
- (id)initWithBlock:(id /* block */)arg1 named:(id)arg2 forClass:(Class)arg3 selector:(SEL)arg4 originalMethod:(void * *)arg5 withNumArgs:(unsigned int)arg6;
- (id)description;
- (Class)class;
- (void)setClass:(Class)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void * *)originalMethod;
- (void)setOriginalMethod:(void * *)arg1;
- (unsigned int)numArgs;
- (void)setNumArgs:(unsigned int)arg1;
- (id)blocks;
- (void)setBlocks:(id)arg1;
- (void).cxx_destruct;
@end

