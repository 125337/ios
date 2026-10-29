@interface WloginTlv_0x11a : WloginTlv
{
    unsigned short wFaceId; // +0xa
    unsigned char cAge; // +0xc
    unsigned char cGender; // +0xd
    NSString * sNickName; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (id)sNickName;
- (void)setSNickName:(id)arg1;
- (unsigned char)cAge;
- (void)setCAge:(unsigned char)arg1;
- (unsigned char)cGender;
- (void)setCGender:(unsigned char)arg1;
- (unsigned short)wFaceId;
- (void)setWFaceId:(unsigned short)arg1;
@end

