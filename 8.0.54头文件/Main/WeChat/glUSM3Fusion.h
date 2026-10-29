@interface glUSM3Fusion : NSObject
{
    unsigned int mFrameBuffer; // +0x8
    unsigned int mTextureid; // +0xc
    unsigned int mProgramHandle; // +0x10
    int mWidth; // +0x14
    int mHeight; // +0x18
    int mInputFormat; // +0x1c
    int mSharpenMode; // +0x20
    int mrate; // +0x24
    unsigned int mpositionid; // +0x28
    unsigned int mtexcoordid; // +0x2c
    unsigned int vertexBuffer; // +0x30
    unsigned int vertexArray; // +0x34
    unsigned int minputImageTextureid; // +0x38
    unsigned int mresiduemapImageTextureid; // +0x3c
    unsigned int mblurredImageTexture1id; // +0x40
    unsigned int mblurredImageTexture2id; // +0x44
    unsigned int mblurredImageTexture3id; // +0x48
    unsigned int mweightsid; // +0x4c
    long long scene; // +0x50
}
- (id)init:(int)arg1 scene:(long long)arg2;
- (void)dealloc;
- (void)destroybuffers;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (BOOL)compileshaders;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (void)setupVBOs;
- (void)setrate:(int)arg1;
- (void)setmode:(int)arg1;
- (unsigned int)process:(unsigned int)arg1 input2:(unsigned int)arg2 input3:(unsigned int)arg3 input4:(unsigned int)arg4 width:(int)arg5 height:(int)arg6;
- (unsigned int)process:(unsigned int)arg1 input2:(unsigned int)arg2 input3:(unsigned int)arg3 input4:(unsigned int)arg4 width:(int)arg5 height:(int)arg6 sharpenratio:(float)arg7;
@end

