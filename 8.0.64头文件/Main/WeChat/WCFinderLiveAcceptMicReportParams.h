@interface WCFinderLiveAcceptMicReportParams : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _connectTimestampInMS; // +0x10
    NSData * _liveCookies; // +0x18
}
- (id)paramDescription;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)connectTimestampInMS;
- (void)setConnectTimestampInMS:(unsigned long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end
