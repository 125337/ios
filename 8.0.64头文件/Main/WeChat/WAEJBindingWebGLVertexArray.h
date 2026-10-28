@interface WAEJBindingWebGLVertexArray : WAEJBindingWebGLObject
{
    BOOL _allEnableVertexAttribBufferBound; // +0x30
    int _elementArrayBuffer; // +0x34
    NSMutableSet * _enabledAttribs; // +0x38
    NSMutableDictionary * _attribToBuffer; // +0x40
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 index:(unsigned int)arg4;
- (id)initWithWebGLContext:(id)arg1 index:(unsigned int)arg2;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isAllEnabledVertexAttribBufferBound;
- (void)updateAttribBufferBoundStatus;
- (void)setArrayBuffer:(int)arg1 forAttrib:(unsigned int)arg2;
- (void)setAttribEnabled:(BOOL)arg1 at:(unsigned int)arg2;
- (void)removeBuffer:(int)arg1;
- (int)elementArrayBuffer;
- (void)setElementArrayBuffer:(int)arg1;
- (BOOL)allEnableVertexAttribBufferBound;
- (void)setAllEnableVertexAttribBufferBound:(BOOL)arg1;
- (id)enabledAttribs;
- (void)setEnabledAttribs:(id)arg1;
- (id)attribToBuffer;
- (void)setAttribToBuffer:(id)arg1;
@end
