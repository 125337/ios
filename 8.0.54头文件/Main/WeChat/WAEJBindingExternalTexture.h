@interface WAEJBindingExternalTexture : WAEJBindingBase <EJDrawable>
{
    int _viewId; // +0x20
    NSString * _type; // +0x28
    WAEJTexture * _texture; // +0x30
}
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)dealloc;
- (void)updateTextureIfNeeded;
- (id)texture;
- (int)viewId;
- (id)type;
- (void)setTexture:(id)arg1;
@end

