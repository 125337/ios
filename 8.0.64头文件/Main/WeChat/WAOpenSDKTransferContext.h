@interface WAOpenSDKTransferContext : NSObject
{
    BOOL _sendReqBeforeEnd; // +0x8
    int _errorCode; // +0xc
    NSString * _errorMessage; // +0x10
    NSObject<OS_dispatch_group> * _group; // +0x18
}
- (void)addUpdateDeepLinkRequestWithTicket:(id)arg1 result:(id)arg2 context:(id)arg3;
- (void)addSendLaunchWxaRedirectingPageRespWithTicket:(id)arg1 appID:(id)arg2 universalLink:(id)arg3 context:(id)arg4 beforeCallback:(id /* block */)arg5 afterCallback:(id /* block */)arg6;
- (BOOL)sendReqBeforeEnd;
- (void)setSendReqBeforeEnd:(BOOL)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)group;
- (void)setGroup:(id)arg1;
- (void).cxx_destruct;
@end
