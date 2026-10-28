@interface WAEJObjClass : NSObject <ObjClassProtocol>
{
    WAEJBindingGfx * gfx_; // +0x8
}
- (void)dealloc;
- (_sg_state_t *)get_sg_state:(void *)arg1;
- (unsigned int)get_gfx_object_id:(void *)arg1;
- (void)setCurrentContext:(void *)arg1;
- (void)setRenderingContextDirty;
- (void)makeRenderingContext;
@end
