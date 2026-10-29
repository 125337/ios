@interface WTLoginApi : NSObject
{
    NSString * _UserAccount; // +0x8
    unsigned long long _uin; // +0x10
    unsigned int _dwBitmap; // +0x18
    unsigned int _loginFlag; // +0x1c
    unsigned int _dwAppid; // +0x20
    unsigned int _dwSubAppid; // +0x24
    BOOL _hasNewTGTGT; // +0x28
    MemSig * _TGTGT; // +0x30
    WloginProtocol * _wloginProtocol; // +0x38
}
- (id)init;
- (void)dealloc;
- (int)loginWithPasswd:(unsigned long long)arg1 andPasswd:(id)arg2 andSigBitmap:(unsigned int)arg3 andLoginFlag:(int)arg4 retData:(id)arg5;
- (int)checkPicture:(id)arg1 retData:(id)arg2;
- (int)refreshPicture:(id)arg1;
- (int)exchangeSig:(unsigned long long)arg1 andSig:(id)arg2 andSigBitmap:(unsigned int)arg3 retData:(id)arg4;
- (struct *)resolveSvrPkg:(id)arg1;
- (BOOL)hasPwdSig:(unsigned long long)arg1;
- (void)clearPwdSig:(unsigned long long)arg1;
- (id)initMemUserAppidSig;
- (void)setClientPicInfo:(unsigned short)arg1 CapType:(unsigned char)arg2 PicRetType:(unsigned char)arg3;
- (id)sigTypeToName:(unsigned int)arg1;
- (void)resetLoginProcess;
@end

