@interface GameMsgSecurityCheck : NSObject <PBMessageObserverDelegate>
{
    NSMutableArray * _msgTask; // +0x8
    NSMutableArray * _sigConf; // +0x10
    BOOL _isFetchingConfig; // +0x18
}
- (id)init;
- (unsigned int)getVerifyModel;
- (void)reportSecurityCheck:(id)arg1 withError:(long long)arg2;
- (void)reportSecurityCheck:(long long)arg1 withDesc:(id)arg2;
- (BOOL)checkIconSize:(CGSize)arg1;
- (BOOL)verifyMsgField:(id)arg1;
- (void)checkMsgSecurity:(id)arg1 completeBlock:(id /* block */)arg2;
- (BOOL)checkSigVer:(id)arg1;
- (void)requestSignatureConfig;
- (void)loadSignatureConfig;
- (void)saveSignatureConfig:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetReddotSignatureConf:(id)arg1;
- (BOOL)checkMsgTask;
- (id)getConfigByVer:(int)arg1;
- (BOOL)checkSignature:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)decodeData:(id)arg1;
- (id)getStringForPath:(XmlReaderNode_t *)arg1 path:(id)arg2;
- (id)HmacSha256:(id)arg1 key:(id)arg2;
- (void)refreshSignatureConfig;
- (void).cxx_destruct;
@end
