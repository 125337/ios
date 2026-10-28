@interface WCFinderLiveEncashReporter : NSObject <IWCFinderLiveEncashReporterCallback>
{
    NSString * m_encashSessionId; // +0x8
    long long m_lastSceneType; // +0x10
}
- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)openEncashPage;
- (void)onEncashAction:(unsigned long long)arg1;
- (void)reportEncashAction:(unsigned long long)arg1 withSceneType:(long long)arg2;
- (void).cxx_destruct;
@end
