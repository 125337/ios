@interface WAEJBindingWebGLTexture : WAEJBindingWebGLObject
{
    WAEJTexture * texture; // +0x30
}
+ (id)textureFromJSValue:(OpaqueJSValue *)arg1;
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3;
+ (OpaqueJSValue *)createJSObjectWithTexture:(OpaqueJSContext *)arg1 scriptView:(id)arg2 texture:(id)arg3;
+ (void)modifyWebGLTexture:(OpaqueJSValue *)arg1 glTexture:(unsigned int)arg2 target:(unsigned int)arg3;
+ (id)getEGLContext:(OpaqueJSValue *)arg1;
- (id)initWithWebGLContext:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (void)invalidate;
- (id)getTexture;
- (OpaqueJSValue *)getJSObject;
@end
