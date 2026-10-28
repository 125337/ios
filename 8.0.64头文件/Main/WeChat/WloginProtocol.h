@interface WloginProtocol : NSObject
{
    WloginPkgHead * pkgHead; // +0x8
    NSMutableDictionary * basicInfoTlvList; // +0x10
    unsigned int dwSrcSigAppid; // +0x18
    unsigned int dwSrcSigSubAppid; // +0x1c
    unsigned int dwDstSigAppid; // +0x20
    unsigned int dwDstSigSubAppid; // +0x24
    NSMutableDictionary * reslutSigTlvList; // +0x28
    char[16] sKey; // +0x30
    char[16] A1_Key; // +0x40
    struct stRetValue; // +0x50
}
- (id)initWithClientVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;
- (BOOL)resetProtocol;
- (void)dealloc;
- (int)loginWithPasswd:(id)arg1 retData:(id)arg2;
- (int)checkPic:(id)arg1;
- (int)refreshPic:(id)arg1;
- (int)exchangeSig:(id)arg1 retData:(id)arg2;
- (void)recvPkgError;
- (struct *)resolveSvrPkg:(id)arg1;
- (BOOL)addBasicTlv:(id)arg1;
- (id)basicTlvByTag:(unsigned short)arg1;
- (id)sigTlvDictByTag:(unsigned short)arg1;
- (BOOL)decodeTlvList:(const char *)arg1 andLeftLen:(int *)arg2;
- (void)setSrcAppid:(unsigned int)arg1 andSrcSubAppid:(unsigned int)arg2 andDstAppid:(unsigned int)arg3 andDstSubAppid:(unsigned int)arg4;
- (BOOL)genTGTGTbyPasswd:(const char *)arg1 andUin:(unsigned int)arg2 andFlag:(int)arg3 outTGTGT:(id)arg4;
- (BOOL)genEncryptBody_0x144:(id)arg1 subCmd:(unsigned short)arg2;
- (void)setPkgHeadUin:(unsigned int)arg1;
- (unsigned int)pkgHeadUin;
- (id)reslutSigTlvList;
@end
