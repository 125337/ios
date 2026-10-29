@interface WCAccountGatewayMobileHandler : NSObject
{
    BOOL _isRequesting; // +0x8
    NSString * _business; // +0x10
    NSString * _msgId; // +0x18
    NSMutableArray * _tokens; // +0x20
    NSMutableArray * _urlDownloaders; // +0x28
    MobileInfo * _pureMobileResult; // +0x30
}
+ (id)AllCelluarIpAddrList;
- (id)getChannelTokens;
- (BOOL)asyncGetMaskedMobileWithBusiness:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)realStartGetMaskedMobileWithBusiness:(id)arg1 cellularIps:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)batchRequestWithGatewayUrlResp:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)asyncGetPureMobileWithComplectionBlock:(id /* block */)arg1;
- (void)getMobileWithTokens:(id)arg1 msgId:(id)arg2 mobileType:(int)arg3 gatewayTicket:(id)arg4 timeout:(unsigned int)arg5 completionBlock:(id /* block */)arg6;
- (id)business;
- (void)setBusiness:(id)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)tokens;
- (void)setTokens:(id)arg1;
- (id)urlDownloaders;
- (void)setUrlDownloaders:(id)arg1;
- (id)pureMobileResult;
- (void)setPureMobileResult:(id)arg1;
- (void).cxx_destruct;
@end
