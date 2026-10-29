@interface WCFinderLiveOverReporter : NSObject <IWCFinderLiveOverReporterCallback>
{
    NSString * m_sessionId; // +0x8
}
- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onOverAction:(unsigned long long)arg1 withResult:(unsigned long long)arg2;
- (void)reportOverAction:(unsigned long long)arg1 withResult:(unsigned long long)arg2 actionResultDic:(id)arg3;
- (void).cxx_destruct;
@end

