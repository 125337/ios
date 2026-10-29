@interface WloginTlv_0xa : WloginTlv
{
    unsigned short wErrorVer; // +0xa
    unsigned short wErrorCode; // +0xc
    NSString * sErrorInfo; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned short)wErrorCode;
- (void)setWErrorCode:(unsigned short)arg1;
- (unsigned short)wErrorVer;
- (void)setWErrorVer:(unsigned short)arg1;
- (id)sErrorInfo;
- (void)setSErrorInfo:(id)arg1;
@end

