@interface MMClientCacheManager : MMUserService <IMsgExt, ICdnComMgrExt, KindaNotifyExt, MMServiceProtocol, MMKernelExt>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    NSString * _curDownloadUrl; // +0x10
}
+ (long long)getApplicationState;
- (id)init;
- (id)getInfoPath;
- (id)getBasicData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)OnCdnDownload:(id)arg1;
- (void)onKindaNotify:(id)arg1 value:(id)arg2;
- (void)reportExtInfo:(id)arg1;
- (void)doDReport;
- (void)doSSReport:(unsigned int)arg1 isBasic:(BOOL)arg2;
- (void)doSSReport:(unsigned int)arg1;
- (void)doSSReportForPayCheckoutCounter;
- (void)updateKey:(id)arg1;
- (void)checkConfig;
- (void).cxx_destruct;
@end

