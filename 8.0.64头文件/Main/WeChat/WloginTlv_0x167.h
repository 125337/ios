@interface WloginTlv_0x167 : WloginTlv
{
    unsigned char cImgType; // +0xa
    unsigned char cImgFormat; // +0xb
    NSString * sImgUrl; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned char)cImgType;
- (void)setCImgType:(unsigned char)arg1;
- (unsigned char)cImgFormat;
- (void)setCImgFormat:(unsigned char)arg1;
- (id)sImgUrl;
- (void)setSImgUrl:(id)arg1;
@end
