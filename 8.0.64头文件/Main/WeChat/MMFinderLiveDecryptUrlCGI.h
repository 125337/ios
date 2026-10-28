@interface MMFinderLiveDecryptUrlCGI : WCFinderLiveBaseCgi
{
    unsigned int _decryptUrlScene; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _encryptedUrl; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderUsrname:(id)arg1 decryptUrlScene:(unsigned int)arg2 encryptedUrl:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)decryptUrlScene;
- (void)setDecryptUrlScene:(unsigned int)arg1;
- (id)encryptedUrl;
- (void)setEncryptedUrl:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
