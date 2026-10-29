@interface RsaCertMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * m_oLock; // +0x8
    RsaCertInfo * m_oRsaCertInfo; // +0x10
}
+ (id)GetPathOfRsaCertInfo;
+ (id)GetPathOfRsaCertInfoVerify;
+ (id)GetInfoStringMd5For:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)LoadRsaCertInfo;
- (void)SaveRsaCertInfoVerify;
- (void)SaveRsaCertInfo;
- (id)GetBaseRsaCertInfo;
- (id)GetAuthCertInfo;
- (id)GetKVCommCertInfo;
- (id)GetMutableRsaCertInfo;
- (void).cxx_destruct;
@end

