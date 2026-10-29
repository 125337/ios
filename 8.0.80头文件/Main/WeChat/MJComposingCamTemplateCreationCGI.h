@interface MJComposingCamTemplateCreationCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithAigcTaskID:(id)arg1 templateCdnUrl:(id)arg2 tplDescMd5:(id)arg3 scene:(unsigned int)arg4 templateVersionInfo:(id)arg5 parentTemplateId:(id)arg6 rootTemplateId:(id)arg7 finderUsername:(id)arg8 templateName:(id)arg9 templateIconURL:(id)arg10 templateCoverURL:(id)arg11 successBlock:(id /* block */)arg12 failBlock:(id /* block */)arg13;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
