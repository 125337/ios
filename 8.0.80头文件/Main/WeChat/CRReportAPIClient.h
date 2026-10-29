@interface CRReportAPIClient : CRAPIClient
+ (id)client;
+ (id)clientWithSession:(id)arg1;
- (void)reportPayload:(id)arg1 onSuccess:(id /* block */)arg2 onFailure:(id /* block */)arg3;
- (id)innerData;
- (id)paramsGET:(id)arg1;
- (id)getAMSSign:(id)arg1;
- (id)handleBodyData:(id)arg1;
@end
