@interface EmoticonRecoverLogicObject : MMObject <EmoticonDownloadMd5ListCgiDelegate, EmoticonDownloadProxyDelegate>
{
    BOOL _m_isActive; // +0x8
    BOOL _m_hasStartLogic; // +0x9
    BOOL _isEmoticonMd5CheckFinished; // +0xa
    BOOL _m_needUpdateTime; // +0xb
    int _downloadedEmoticonCount; // +0xc
    unsigned int _m_needNotifyCount; // +0x10
    unsigned long long _m_type; // +0x18
    EmoticonDownloadMd5ListCgi * _m_recoverCgi; // +0x20
    EmoticonDownloadProxy * _m_downloadCgi; // +0x28
    unsigned long long _maxOnceDownloadEmoticonCount; // +0x30
    NSString * _logPrefix; // +0x38
    id <EmoticonRecoverLogicObjectDelegate> _m_delegate; // +0x40
}
- (id)initWithType:(unsigned long long)arg1 andDelegate:(id)arg2;
- (void)initPartDownloadStatus;
- (BOOL)preCheckStartLogic;
- (void)startLogic;
- (void)startLogicWithIncrementMd5List:(id)arg1;
- (void)startLogicWithCheckMd5Exist;
- (void)internalStartRecoverCgiWithMd5ListObj:(id)arg1;
- (void)tryStartLogicForSyncAnotherPart;
- (void)syncAnotherPart;
- (void)stopLogic;
- (BOOL)isActive;
- (BOOL)isAllEmoticonRecoverd;
- (BOOL)canStartCgiNow;
- (void)downloadEmoticon;
- (void)callOkDelegate;
- (void)callFailedDelegate;
- (BOOL)clearLocalContentByMd5List:(id)arg1;
- (void)startDownloadWithMd5List:(id)arg1;
- (void)completeAndAddEmoticonWithMd5:(id)arg1 imageData:(id)arg2;
- (void)asyncAddEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)continueDownloadFromDownloadFinished:(BOOL)arg1;
- (void)onEmoticonDownloadMd5ListOk:(id)arg1 reqBuff:(id)arg2 versionKey:(id)arg3;
- (void)onEmoticonDownloadMd5ListFailed;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (unsigned long long)m_type;
- (void)setM_type:(unsigned long long)arg1;
- (id)m_recoverCgi;
- (void)setM_recoverCgi:(id)arg1;
- (id)m_downloadCgi;
- (void)setM_downloadCgi:(id)arg1;
- (int)downloadedEmoticonCount;
- (void)setDownloadedEmoticonCount:(int)arg1;
- (unsigned long long)maxOnceDownloadEmoticonCount;
- (void)setMaxOnceDownloadEmoticonCount:(unsigned long long)arg1;
- (id)logPrefix;
- (void)setLogPrefix:(id)arg1;
- (BOOL)m_isActive;
- (void)setM_isActive:(BOOL)arg1;
- (BOOL)m_hasStartLogic;
- (void)setM_hasStartLogic:(BOOL)arg1;
- (BOOL)isEmoticonMd5CheckFinished;
- (void)setIsEmoticonMd5CheckFinished:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_needNotifyCount;
- (void)setM_needNotifyCount:(unsigned int)arg1;
- (BOOL)m_needUpdateTime;
- (void)setM_needUpdateTime:(BOOL)arg1;
- (void).cxx_destruct;
@end
