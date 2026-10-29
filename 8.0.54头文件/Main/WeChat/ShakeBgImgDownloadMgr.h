@interface ShakeBgImgDownloadMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    ShakeInfo * m_oShakeInfo; // +0x8
    unsigned int m_uiCurDownloadID; // +0x10
    unsigned int m_uiCurTotalLen; // +0x14
    unsigned int m_uiCurEventID; // +0x18
    unsigned int m_uiCurDownloadCount; // +0x1c
}
- (void)ResetDownloadInfo;
- (id)init;
- (void)dealloc;
- (void)LoadShakeInfo;
- (void)SaveShakeInfo;
- (unsigned int)GetShakeTimes;
- (unsigned int)GetShakeBgImgID;
- (void)AddShakeTimes:(unsigned int)arg1;
- (void)CreateDownloadEvent;
- (void)DownloadBgImg:(unsigned int)arg1 TotalLen:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_oShakeInfo;
- (void)setM_oShakeInfo:(id)arg1;
- (void).cxx_destruct;
@end

