@interface WCFinderLiveCompleteNpsRenderer : NSObject
{
    id <WCFinderLiveCompleteNpsHosting> _host; // +0x8
}
- (void)mountNpsLiteAppIfNeeded;
- (void)scheduleNpsMountRetryWithAttempt:(long long)arg1;
- (void)unmountNpsLiteApp;
- (id)host;
- (void)setHost:(id)arg1;
- (void).cxx_destruct;
@end
