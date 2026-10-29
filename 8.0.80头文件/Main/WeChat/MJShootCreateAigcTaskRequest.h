@interface MJShootCreateAigcTaskRequest : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithTemplateID:(id)arg1 aigcServiceID:(id)arg2 feedID:(unsigned long long)arg3 userMediaFileAsset:(id)arg4 metaData:(id)arg5 postEnterScene:(unsigned int)arg6 userDynamicParam:(id)arg7 successfulBlock:(id /* block */)arg8 failedBlock:(id /* block */)arg9;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
