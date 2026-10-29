@interface TPVideoFrameBuffer : NSObject
{
    BOOL _dataRef; // +0x8
    int _rotation; // +0xc
    int _dstWidth; // +0x10
    int _dstHeight; // +0x14
    int _trackID; // +0x18
    int _flags; // +0x1c
    int _srcWidth; // +0x20
    int _srcHeight; // +0x24
    __CVBuffer * _pixelBuffer; // +0x28
    long long _ptsMS; // +0x30
    char * * _data; // +0x38
    int * _linesize; // +0x40
    long long _format; // +0x48
    TPFrame * _frame; // +0x50
}
- (id)init;
- (id)initWithTPFrame:(void *)arg1 trackID:(int)arg2 andFlags:(int)arg3;
- (id)initWithCVPixelBuffer:(__CVBuffer *)arg1 trackID:(int)arg2 andFlags:(int)arg3;
- (void)dealloc;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (int)dstWidth;
- (void)setDstWidth:(int)arg1;
- (int)dstHeight;
- (void)setDstHeight:(int)arg1;
- (long long)ptsMS;
- (void)setPtsMS:(long long)arg1;
- (int)trackID;
- (void)setTrackID:(int)arg1;
- (int)flags;
- (void)setFlags:(int)arg1;
- (char * *)data;
- (void)setData:(char * *)arg1;
- (int *)linesize;
- (void)setLinesize:(int *)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (int)srcWidth;
- (void)setSrcWidth:(int)arg1;
- (int)srcHeight;
- (void)setSrcHeight:(int)arg1;
- (TPFrame *)frame;
- (void)setFrame:(TPFrame *)arg1;
- (BOOL)dataRef;
- (void)setDataRef:(BOOL)arg1;
@end

