@interface MJShootCreateAigcTaskRequest : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithTemplateID:(id)arg1 aigcServiceID:(id)arg2 userMediaFileAsset:(id)arg3 metaData:(id)arg4 postEnterScene:(unsigned int)arg5 userDynamicParam:(id)arg6 successfulBlock:(id /* block */)arg7 failedBlock:(id /* block */)arg8;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
