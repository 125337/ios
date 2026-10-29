@interface CBTHeadlessReportSignalReceiver : NSObject <CBTHeadlessReportSignalObserverBase>
{
    CBTHeadlessReportSignalObserver * _observerWrapper; // +0x8
}
+ (id)sharedInstance;
- (void)start;
- (void)onReportSignal:(int)arg1 voipSessionId:(id)arg2 queryId:(long long)arg3 answerId:(long long)arg4 answerLength:(int)arg5 tsMs:(unsigned long long)arg6 traceId:(id)arg7;
- (id)observerWrapper;
- (void)setObserverWrapper:(id)arg1;
- (void).cxx_destruct;
@end
