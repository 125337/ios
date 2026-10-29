@interface WAPNAuthGatewayFetcher : NSObject
{
    BOOL _finished; // +0x8
    NSMutableArray * _downloaders; // +0x10
    id /* block */ _timeoutBlock; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)cancelTimeoutBlock;
- (void)fetchTokensWithUrlInfos:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)fetchRawResponsesWithUrlInfos:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)downloaders;
- (void)setDownloaders:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id /* block */)timeoutBlock;
- (void)setTimeoutBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
