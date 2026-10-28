@interface WloginTlv_0x107 : WloginTlv
{
    unsigned short wPicType; // +0xa
    unsigned char cCapType; // +0xc
    unsigned short wPicSize; // +0xe
    unsigned char cPicRetType; // +0x10
}
- (int)encode:(id)arg1;
- (unsigned short)wPicSize;
- (void)setWPicSize:(unsigned short)arg1;
- (unsigned short)wPicType;
- (void)setWPicType:(unsigned short)arg1;
- (unsigned char)cCapType;
- (void)setCCapType:(unsigned char)arg1;
- (unsigned char)cPicRetType;
- (void)setCPicRetType:(unsigned char)arg1;
@end
