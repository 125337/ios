@interface FavoritesBatchSafeCheckerExecuter : NSObject
{
    BOOL _safeAuthDoneReceived; // +0x8
    id <FavoritesBatchSafeCheckerDelegate> _delegate; // +0x10
    BaseResponseErrMsgHandler * _errMsgHandler; // +0x18
}
- (id)init;
- (void)executeWithXml:(id)arg1;
- (void)setupWebViewListener;
- (void)cleanup;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)errMsgHandler;
- (void)setErrMsgHandler:(id)arg1;
- (BOOL)safeAuthDoneReceived;
- (void)setSafeAuthDoneReceived:(BOOL)arg1;
- (void).cxx_destruct;
@end
