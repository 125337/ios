@interface VoIPSWClipContext : NSObject
{
    int _swClipBufferSize; // +0x8
    int _swEncTargetWidth; // +0xc
    int _swEncTargetHeight; // +0x10
    char * _swClipBuffer; // +0x18
}
- (void)dealloc;
- (char *)swClipBuffer;
- (void)setSwClipBuffer:(char *)arg1;
- (int)swClipBufferSize;
- (void)setSwClipBufferSize:(int)arg1;
- (int)swEncTargetWidth;
- (void)setSwEncTargetWidth:(int)arg1;
- (int)swEncTargetHeight;
- (void)setSwEncTargetHeight:(int)arg1;
@end
