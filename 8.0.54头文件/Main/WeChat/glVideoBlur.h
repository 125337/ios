@interface glVideoBlur : NSObject
{
    unsigned int[3] mFrameBuffer; // +0x8
    unsigned int[3] mTextureid; // +0x14
    unsigned int mProgramHandle; // +0x20
    int mWidth; // +0x24
    int mHeight; // +0x28
    unsigned int mpositionid; // +0x2c
    unsigned int mtexcoordid; // +0x30
    unsigned int vertexBuffer; // +0x34
    unsigned int vertexArray; // +0x38
    unsigned int minputImageTextureid; // +0x3c
    unsigned int mtexSizeid; // +0x40
    unsigned int mOffsetid; // +0x44
    long long scene; // +0x48
}
- (id)init;
- (id)init:(long long)arg1;
- (void)dealloc;
- (void)destroybuffers;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (BOOL)compileshaders;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (void)setupVBOs;
- (void)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (unsigned int)getTex:(int)arg1;
@end

