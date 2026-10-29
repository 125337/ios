@interface glAdjustResidue : NSObject
{
    unsigned int mFrameBuffer; // +0x8
    unsigned int mTextureid; // +0xc
    unsigned int mProgramHandle; // +0x10
    int mWidth; // +0x14
    int mHeight; // +0x18
    unsigned int mpositionid; // +0x1c
    unsigned int mtexcoordid; // +0x20
    unsigned int minputImageTextureid; // +0x24
    unsigned int mblurredImageTexture1id; // +0x28
    unsigned int mblurredImageTexture3id; // +0x2c
}
- (id)init;
- (void)dealloc;
- (void)destroybuffers;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (BOOL)compileshaders;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (void)setupVBOs;
- (unsigned int)process:(unsigned int)arg1 input2:(unsigned int)arg2 input3:(unsigned int)arg3 width:(int)arg4 height:(int)arg5;
@end

