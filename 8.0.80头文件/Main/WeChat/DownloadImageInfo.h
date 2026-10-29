@interface DownloadImageInfo : NSObject
{
    CMessageWrap * m_wrapMsg; // +0x8
    unsigned int m_uiTotalLen; // +0x10
    unsigned int m_uiStartPos; // +0x14
    BOOL m_bDownloadHD; // +0x18
    NSString * m_nsChatName; // +0x20
    CUploadImgWrap * m_wrapDownload; // +0x28
    unsigned int m_uiNotifyPartLen; // +0x30
    unsigned int m_uiNotifyTotalLen; // +0x34
    unsigned long long m_ui64StartTime; // +0x38
    int m_nRetCode; // +0x40
}
- (id)init;
- (BOOL)IsSameInfo:(id)arg1;
- (void)UpdateInfo;
- (void)SetTotalLen:(unsigned int)arg1;
- (id)GenDownloadInfo;
- (void)NotifyOffset;
- (id)GetStatInfo;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (unsigned int)m_uiTotalLen;
- (void)setM_uiTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiStartPos;
- (void)setM_uiStartPos:(unsigned int)arg1;
- (BOOL)m_bDownloadHD;
- (void)setM_bDownloadHD:(BOOL)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (unsigned int)m_uiNotifyPartLen;
- (void)setM_uiNotifyPartLen:(unsigned int)arg1;
- (unsigned int)m_uiNotifyTotalLen;
- (void)setM_uiNotifyTotalLen:(unsigned int)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (void).cxx_destruct;
@end
