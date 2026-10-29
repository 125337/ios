@interface SRECGIMgr : NSObject
{
    SRECGIClient * _cgiClient; // +0x8
}
+ (id)sharedInstance;
+ (id)getCgiPathPrefix;
- (void)sendTextMessage:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendMessageContent:(id)arg1 type:(int)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 needNotifyInserted:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)genSendMsgRequest:(id)arg1;
- (id)messageContent:(id)arg1 type:(int)arg2 to:(id)arg3;
- (void)commonInit;
- (BOOL)updateCGIClient;
- (void)cgiPost:(id)arg1 cgiWrap:(id)arg2 completion:(id /* block */)arg3;
- (void)cgiPost:(id)arg1 cgiWrap:(id)arg2 holdProcess:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)cgiPost:(id)arg1 cgiWrap:(id)arg2 holdProcess:(BOOL)arg3 semaphore:(id)arg4 completion:(id /* block */)arg5;
- (id)cgiClient;
- (void)setCgiClient:(id)arg1;
- (void).cxx_destruct;
@end

