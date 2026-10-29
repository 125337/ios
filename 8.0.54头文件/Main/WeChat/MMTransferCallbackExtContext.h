@interface MMTransferCallbackExtContext : NSObject
{
    BOOL _isReqWaitingH5auth; // +0x8
    BOOL _isReqRetry; // +0x9
}
- (BOOL)isReqWaitingH5auth;
- (void)setIsReqWaitingH5auth:(BOOL)arg1;
- (BOOL)isReqRetry;
- (void)setIsReqRetry:(BOOL)arg1;
@end

