@interface WloginErrInfo : NSObject
{
    NSString * sErrorUserAccount; // +0x8
    unsigned short wErrorCode; // +0x10
    NSString * sErrorTitle; // +0x18
    NSString * sErrorMsg; // +0x20
    unsigned short wErrorAddType; // +0x28
    NSString * sErrorAdd; // +0x30
}
- (void)dealloc;
- (unsigned short)wErrorCode;
- (void)setWErrorCode:(unsigned short)arg1;
- (id)sErrorTitle;
- (void)setSErrorTitle:(id)arg1;
- (id)sErrorMsg;
- (void)setSErrorMsg:(id)arg1;
- (unsigned short)wErrorAddType;
- (void)setWErrorAddType:(unsigned short)arg1;
- (id)sErrorAdd;
- (void)setSErrorAdd:(id)arg1;
- (id)sErrorUserAccount;
- (void)setSErrorUserAccount:(id)arg1;
@end
