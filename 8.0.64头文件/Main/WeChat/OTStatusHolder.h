@interface OTStatusHolder : NSObject
{
    EAGLContext * currContext; // +0x8
    int currActiveTexture; // +0x10
    int currTextureId; // +0x14
    int currFrameBuffer; // +0x18
    int currRenderBuffer; // +0x1c
    int currProgram; // +0x20
    int curVAO; // +0x24
    int curVBO; // +0x28
    int curEBO; // +0x2c
    int currArrayBuffer; // +0x30
    int currElementArrayBuffer; // +0x34
    int currVertexArray; // +0x38
    int[4] currViewPort; // +0x3c
}
- (void)dealloc;
- (void)join:(id)arg1;
- (void)leave;
- (void).cxx_destruct;
@end
