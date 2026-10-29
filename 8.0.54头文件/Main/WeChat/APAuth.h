@interface APAuth : APBase <GetA8KeyLogicDelegate, NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    int _retryCount; // +0x70
    id <APAuthDelegate> delegate; // +0x78
    NSURLConnection * _connection; // +0x80
}
+ (id)apAuthFromApBase:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)start;
- (void)startIniOS9;
- (void)startWithMac:(id)arg1;
- (void)cancel;
- (void)logout;
- (BOOL)checkExpired;
- (void)prepareForAuth;
- (BOOL)isFromCacheAndValid;
- (BOOL)isFromCacheAndExpired;
- (BOOL)isExpired;
- (id)currMac;
- (void)didStart;
- (void)didSuccess;
- (void)didExpired;
- (void)didFail:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (void).cxx_destruct;
@end

