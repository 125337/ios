@interface AmoebaSentinelService : NSObject <AmoebaSentinelConnectDelegate>
{
    AmoebaSentinelConnectMgr * _connectMgr; // +0x8
    NSString * _sessionId; // +0x10
    unsigned long long _lastCaptureScreenshotTime; // +0x18
    unsigned long long _lastCaptureScreenNodeInfosTime; // +0x20
    NSMutableArray * _uploadPageInfoCaches; // +0x28
    NSMutableArray * _uploadViewInfoCaches; // +0x30
    NSMutableArray * _reportInfoCaches; // +0x38
    unsigned long long _lastRealReportInfoTime; // +0x40
    unsigned long long _lastDebugLogTime; // +0x48
}
+ (id)shareInstance;
- (id)init;
- (void)initScreenInfo;
- (void)bindSessionId:(id)arg1;
- (void)connectWebSocket:(unsigned int)arg1;
- (void)onConnect:(unsigned int)arg1;
- (void)onReceive:(id)arg1;
- (void)captureScreenshotDelay;
- (void)captureScreenshot;
- (BOOL)uploadScreenshot:(id)arg1 pageName:(id)arg2;
- (void)captureScreenNodeInfosDelay;
- (void)captureScreenNodeInfos;
- (BOOL)uploadScreenNodeInfos:(id)arg1 pageName:(id)arg2;
- (void)uploadReportInfo:(id)arg1 time:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 params:(id)arg5;
- (void)realUploadReportInfos;
- (void)uploadPageInfo:(id)arg1;
- (void)uploadViewInfo:(id)arg1;
- (void)onWebBindSessionId;
- (void)onWebUploadScreenshot;
- (void)onWebUploadScreenNodeInfo;
- (BOOL)shouldEmitDebugLog;
- (id)connectMgr;
- (void)setConnectMgr:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)lastCaptureScreenshotTime;
- (void)setLastCaptureScreenshotTime:(unsigned long long)arg1;
- (unsigned long long)lastCaptureScreenNodeInfosTime;
- (void)setLastCaptureScreenNodeInfosTime:(unsigned long long)arg1;
- (id)uploadPageInfoCaches;
- (void)setUploadPageInfoCaches:(id)arg1;
- (id)uploadViewInfoCaches;
- (void)setUploadViewInfoCaches:(id)arg1;
- (id)reportInfoCaches;
- (void)setReportInfoCaches:(id)arg1;
- (unsigned long long)lastRealReportInfoTime;
- (void)setLastRealReportInfoTime:(unsigned long long)arg1;
- (unsigned long long)lastDebugLogTime;
- (void)setLastDebugLogTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
