@interface OpenCustomerServiceHandler : BaseOpenSDKHandler
{
    NSString * _wwkfUrl; // +0x8
    NSString * _corpid; // +0x10
}
- (void)startHandler:(id)arg1;
- (void)cancelHandler;
- (void)realHandleReqAfterermissionValidation;
- (id)getExtTaransLinkParams;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (void)backTo3rdApp:(int)arg1 extMsg:(id)arg2;
- (id)wwkfUrl;
- (void)setWwkfUrl:(id)arg1;
- (id)corpid;
- (void)setCorpid:(id)arg1;
- (void).cxx_destruct;
@end

