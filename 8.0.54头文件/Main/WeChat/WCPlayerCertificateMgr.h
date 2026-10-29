@interface WCPlayerCertificateMgr : NSObject
{
    NSString * _certificateUrl; // +0x8
    NSString * _cachedDir; // +0x10
    NSString * _certificateCachedPath; // +0x18
    NSData * _certificateData; // +0x20
    NSLock * _lockOfCertificateFile; // +0x28
    NSString * _errorDes; // +0x30
    NSLock * _lockOfCompletion; // +0x38
    id /* block */ _completion; // +0x40
}
- (id)initWithCertificateUrl:(id)arg1;
- (void)getCertificateWithCompletion:(id /* block */)arg1;
- (void)getCertificateFromServerWith:(id)arg1;
- (id)getCertificateLocal;
- (void)writeCertificateToLocalWithUrl:(id)arg1 cerData:(id)arg2;
- (void)safeExcuteCompletionBlock;
- (id)certificateUrl;
- (void)setCertificateUrl:(id)arg1;
- (id)cachedDir;
- (void)setCachedDir:(id)arg1;
- (id)certificateCachedPath;
- (void)setCertificateCachedPath:(id)arg1;
- (id)certificateData;
- (void)setCertificateData:(id)arg1;
- (id)lockOfCertificateFile;
- (void)setLockOfCertificateFile:(id)arg1;
- (id)errorDes;
- (void)setErrorDes:(id)arg1;
- (id)lockOfCompletion;
- (void)setLockOfCompletion:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

