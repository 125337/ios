@interface EmoticonCdnDownloadConnection : EmoticonDownloadProxy
{
    BOOL _m_isActive; // +0x8
    BOOL _disableExternUrl; // +0x9
    int _concurrentCount; // +0xc
    int _downloadType; // +0x10
    int _m_decryptResult; // +0x14
    EmojiInfoObj * _emojiInfoObj; // +0x18
}
+ (id)downloadUrlForEmojiInfoObj:(id)arg1;
+ (id)downloadUrlForEmojiInfoObj:(id)arg1 downloadType:(int *)arg2 idkey:(int *)arg3 disableExternUrl:(BOOL)arg4;
+ (void)keyReportDownloadOK;
+ (void)keyReportDownloadFailed;
+ (void)keyReportVerifyOkWithType:(int)arg1;
+ (void)keyReportVerifyFailedWithType:(int)arg1;
+ (void)keyReportDecryptOkWithType:(int)arg1;
+ (void)keyReportDecryptFailedWithType:(int)arg1;
+ (void)keyReportDownloadWithCdnHttpStart;
+ (void)keyReportDownloadWithCdnHttpSuccess;
+ (void)keyReportDownloadWithCdnHttpFailed;
- (id)initWithEmojiInfoObj:(id)arg1;
- (BOOL)isActive;
- (void)startRequest;
- (void)internalDownloadWithRequestUrl:(id)arg1;
- (void)onDownloadFinishWithData:(id)arg1;
- (BOOL)checkImageSizeWithData:(id)arg1 reportReason:(int *)arg2;
- (void)callFailedDelegate;
- (void)callOkDelegateWithFilePath:(id)arg1;
- (void)kvReportDownloadAndVerifyOK;
- (void)kvReportDownloadOKAndVerifyFailed;
- (void)kvReportDownloadFailed;
- (int)concurrentCount;
- (void)setConcurrentCount:(int)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (int)downloadType;
- (void)setDownloadType:(int)arg1;
- (BOOL)m_isActive;
- (void)setM_isActive:(BOOL)arg1;
- (int)m_decryptResult;
- (void)setM_decryptResult:(int)arg1;
- (BOOL)disableExternUrl;
- (void)setDisableExternUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end
