@interface WAEJBindingGfxNativeBuffer : WAEJBindingGfxObject
{
    IGfxHandler * gfx_handler_; // +0x38
    void * buffer_owned_; // +0x40
}
- (id)initWithHandler:(id)arg1 handler:(IGfxHandler *)arg2;
- (void)InitWithSize:(unsigned int)arg1;
- (void)InitWithBuffer:(OpaqueJSValue *)arg1;
- (void)dealloc;
- (void)destroy;
@end
