@interface CertInfoMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableDictionary * m_dicCertInfo; // +0x8
    BOOL m_bUpdating; // +0x10
    unsigned int m_uiUpdateCount; // +0x14
    NSDate * m_tLastUpdate; // +0x18
}
+ (id)GetPathOfIcon:(unsigned int)arg1;
- (id)init;
- (void)onServiceInit;
- (void)dealloc;
- (void)LoadCertInfo;
- (void)SaveCertInfo;
- (void)CheckUpdate;
- (void)UpdateInfoTime;
- (unsigned int)GetCertInfoVersion;
- (void)CreateUpdateEvent;
- (id)GetCertIconByKey:(unsigned int)arg1;
- (unsigned int)GetBitSet:(unsigned int)arg1;
- (id)GetCertInfoByKey:(unsigned int)arg1 Update:(BOOL)arg2;
- (void)SaveIcon:(id)arg1 Data:(id)arg2;
- (void)UpdateCertInfo:(unsigned int)arg1 Version:(unsigned int)arg2 Time:(unsigned int)arg3 Desc:(id)arg4 Icon:(id)arg5 HDIcon:(id)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_dicCertInfo;
- (void)setM_dicCertInfo:(id)arg1;
- (id)m_tLastUpdate;
- (void)setM_tLastUpdate:(id)arg1;
- (void).cxx_destruct;
@end

