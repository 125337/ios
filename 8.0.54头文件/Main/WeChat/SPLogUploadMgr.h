@interface SPLogUploadMgr : MMRootService <MMServiceProtocol, VoIPPushKitExt>
{
    MMSilentPushReporter * _logReporter; // +0x8
    NSString * _m_realReportUrl; // +0x10
    NSString * _m_realHost; // +0x18
    unsigned long long _m_packageSize; // +0x20
}
+ (id)xmlStringFromCgContent:(id)arg1;
+ (id)silentPushBackgroundURLSessionIndentifierPrefix;
- (id)init;
- (void)onServiceInit;
- (void)lazyInitLogReporter;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (BOOL)onIPxx:(id)arg1;
- (id)getUserName;
- (void)upload:(id)arg1;
- (void)handleLogUpload:(id)arg1;
- (id)makeHttpRequest:(id)arg1;
- (unsigned long long)stackLength:(id)arg1;
- (unsigned long long)uploadId;
- (void)handleSilentPushLogUploadTaskWithURLSessionID:(id)arg1;
- (id)logReporter;
- (void)setLogReporter:(id)arg1;
- (id)m_realReportUrl;
- (void)setM_realReportUrl:(id)arg1;
- (id)m_realHost;
- (void)setM_realHost:(id)arg1;
- (unsigned long long)m_packageSize;
- (void)setM_packageSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

