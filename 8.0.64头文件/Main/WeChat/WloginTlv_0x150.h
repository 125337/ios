@interface WloginTlv_0x150 : WloginTlv
{
    unsigned int dwBitmap; // +0xc
    char cNet; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned int)dwBitmap;
- (void)setDwBitmap:(unsigned int)arg1;
- (char)cNet;
- (void)setCNet:(char)arg1;
@end
