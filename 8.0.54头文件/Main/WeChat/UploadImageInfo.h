@interface UploadImageInfo : NSObject
{
    CMessageWrap * m_wrapMsg; // +0x8
    unsigned long long m_ui64StartTime; // +0x10
    unsigned int m_uiTotalLen; // +0x18
    int m_nRetCode; // +0x1c
    BOOL _isParallelUpload; // +0x20
    BOOL _isUploadFail; // +0x21
    BOOL _isSendingMsg; // +0x22
    BOOL _hadTryCaculateOriginSourceMD5; // +0x23
}
- (id)init;
- (id)GetStatInfo;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (unsigned int)m_uiTotalLen;
- (void)setM_uiTotalLen:(unsigned int)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (BOOL)isParallelUpload;
- (void)setIsParallelUpload:(BOOL)arg1;
- (BOOL)isUploadFail;
- (void)setIsUploadFail:(BOOL)arg1;
- (BOOL)isSendingMsg;
- (void)setIsSendingMsg:(BOOL)arg1;
- (BOOL)hadTryCaculateOriginSourceMD5;
- (void)setHadTryCaculateOriginSourceMD5:(BOOL)arg1;
- (void).cxx_destruct;
@end

