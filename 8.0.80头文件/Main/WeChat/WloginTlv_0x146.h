@interface WloginTlv_0x146 : WloginTlv
{
    unsigned short wErrorVer; // +0xa
    unsigned short wErrorCode; // +0xc
    NSString * sErrorTitle; // +0x10
    NSString * sErrorMsg; // +0x18
    unsigned short wErrorInfoType; // +0x20
    NSString * sErrorInfo; // +0x28
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned short)wErrorVer;
- (void)setWErrorVer:(unsigned short)arg1;
- (unsigned short)wErrorCode;
- (void)setWErrorCode:(unsigned short)arg1;
- (id)sErrorTitle;
- (void)setSErrorTitle:(id)arg1;
- (id)sErrorMsg;
- (void)setSErrorMsg:(id)arg1;
- (unsigned short)wErrorInfoType;
- (void)setWErrorInfoType:(unsigned short)arg1;
- (id)sErrorInfo;
- (void)setSErrorInfo:(id)arg1;
@end
