@interface FTSMsgFallbackSearch : NSObject
{
    BOOL _isCancelled; // +0x8
    BOOL _isRunning; // +0x9
}
- (BOOL)isRunning;
- (void)cancel;
- (void)startWithSession:(id)arg1 query:(id)arg2 completion:(id /* block */)arg3;
@end
