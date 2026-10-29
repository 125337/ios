@interface WCFinderTransferXMLCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithXMLArray:(id)arg1 successful:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
