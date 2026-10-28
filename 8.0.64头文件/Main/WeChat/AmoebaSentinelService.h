@interface AmoebaSentinelService : NSObject <AmoebaSentinelWsProtocol, AmoebaWSMessageDelegate, AmoebaStnDelegate>
{
    BOOL _wsConnect; // +0x8
    unsigned int _connectEnvi; // +0xc
    NSString * _sessionId; // +0x10
}
+ (id)shareInstance;
- (void)initScreenInfo;
- (id)sharedSerialQueue;
- (void)bindSessionId:(id)arg1;
- (void)connectWebSocket;
- (void)captureScreenshotDelay;
- (void)captureScreenshot;
- (BOOL)uploadScreenshot:(id)arg1 pageName:(id)arg2;
- (void)captureScreenNodeInfosDelay;
- (void)captureScreenNodeInfos;
- (BOOL)uploadScreenNodeInfos:(id)arg1 pageName:(id)arg2;
- (void)uploadReportInfo:(id)arg1 time:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 params:(id)arg5;
- (void)didReceiveMessage:(id)arg1;
- (void)didCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(BOOL)arg3;
- (void)didFailWithError:(id)arg1;
- (void)didReceivePong:(id)arg1;
- (void)didReceiveMessage2:(id)arg1;
- (void)onWsConnected;
- (void)onWsBindSessionId;
- (void)onWsUploadScreenshot;
- (void)onWsUploadScreenNodeInfo;
- (void)onWsClosed;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)wsConnect;
- (void)setWsConnect:(BOOL)arg1;
- (unsigned int)connectEnvi;
- (void)setConnectEnvi:(unsigned int)arg1;
- (void).cxx_destruct;
@end
