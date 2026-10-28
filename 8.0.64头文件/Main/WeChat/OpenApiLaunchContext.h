@interface OpenApiLaunchContext : NSObject
{
    BOOL _needWritePasteBoard; // +0x8
    NSString * _appId; // +0x10
    NSString * _sourceInfo; // +0x18
    NSString * _bizInfo; // +0x20
    AppCommunicateData * _appCommunicateData; // +0x28
    NSString * _safetyControlReportStr; // +0x30
    NSString * _currentPageUrl; // +0x38
    NSString * _currentWeAppId; // +0x40
}
- (BOOL)isAppCommunicateDataValid;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)appCommunicateData;
- (void)setAppCommunicateData:(id)arg1;
- (id)safetyControlReportStr;
- (void)setSafetyControlReportStr:(id)arg1;
- (id)currentPageUrl;
- (void)setCurrentPageUrl:(id)arg1;
- (id)currentWeAppId;
- (void)setCurrentWeAppId:(id)arg1;
- (BOOL)needWritePasteBoard;
- (void)setNeedWritePasteBoard:(BOOL)arg1;
- (void).cxx_destruct;
@end
