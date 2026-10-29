@interface glVideoSharpen : NSObject
{
    glVideoBlur * mBlurFilter; // +0x8
    glUSM3Fusion * mUSM3FusionFilter; // +0x10
    int mInputFormat; // +0x18
    int mSharpenMode; // +0x1c
    long long mSharpenScene; // +0x20
    int mrate; // +0x28
}
- (id)init:(int)arg1 scene:(long long)arg2;
- (void)dealloc;
- (void)destroybuffers;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (void)setrate:(int)arg1;
- (unsigned int)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 mode:(long long)arg4;
- (unsigned int)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 mode:(long long)arg4 sharpenratio:(float)arg5;
- (void).cxx_destruct;
@end

