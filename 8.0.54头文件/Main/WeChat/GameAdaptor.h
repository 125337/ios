@interface GameAdaptor : NSObject
{
    IBindingApp * _app; // +0x8
    OpaqueContex * _context; // +0x10
}
- (void)Create:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2 compatible:(BOOL)arg3;
- (void)setObjClass:(id)arg1;
- (void)Destroy;
@end

