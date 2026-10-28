@interface WCClearScheduleCgi : WCBaseCgi
{
    BOOL _isRunning; // +0x8
    id <WCClearScheduleCgiDelegate> _delegate; // +0x10
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end
