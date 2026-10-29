@interface WAReportGameQualityDetectItem : WAReportBaseItem
{
    BOOL _isDownloadCode; // +0x8
    unsigned int _isPreload; // +0xc
    unsigned int _webViewType; // +0x10
    unsigned int _userType; // +0x14
    unsigned int _runningState; // +0x18
    unsigned int _issueType; // +0x1c
    unsigned int _issueSubType; // +0x20
    unsigned int _stage; // +0x24
    unsigned int _reasonType; // +0x28
    unsigned int _renderMode; // +0x2c
    unsigned long long _issueTimestampInMs; // +0x30
    unsigned long long _runtimeDuration; // +0x38
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (BOOL)isDownloadCode;
- (void)setIsDownloadCode:(BOOL)arg1;
- (unsigned int)isPreload;
- (void)setIsPreload:(unsigned int)arg1;
- (unsigned int)webViewType;
- (void)setWebViewType:(unsigned int)arg1;
- (unsigned int)userType;
- (void)setUserType:(unsigned int)arg1;
- (unsigned int)runningState;
- (void)setRunningState:(unsigned int)arg1;
- (unsigned int)issueType;
- (void)setIssueType:(unsigned int)arg1;
- (unsigned int)issueSubType;
- (void)setIssueSubType:(unsigned int)arg1;
- (unsigned int)stage;
- (void)setStage:(unsigned int)arg1;
- (unsigned int)reasonType;
- (void)setReasonType:(unsigned int)arg1;
- (unsigned long long)issueTimestampInMs;
- (void)setIssueTimestampInMs:(unsigned long long)arg1;
- (unsigned int)renderMode;
- (void)setRenderMode:(unsigned int)arg1;
- (unsigned long long)runtimeDuration;
- (void)setRuntimeDuration:(unsigned long long)arg1;
@end

