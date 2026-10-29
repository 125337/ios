@interface WeDropDecodeQRCodeCgi : WCBaseCgi
{
    id /* block */ _onRequestFailed; // +0x8
    id /* block */ _onRequestInvalid; // +0x10
    id /* block */ _onRequestOK; // +0x18
}
- (void)startRequestWithQRContent:(id)arg1;
- (id)debugModuleName;
- (BOOL)isAutoLifeCycle;
- (unsigned int)cgiNumber;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)onRequestFailed;
- (void)setOnRequestFailed:(id /* block */)arg1;
- (id /* block */)onRequestInvalid;
- (void)setOnRequestInvalid:(id /* block */)arg1;
- (id /* block */)onRequestOK;
- (void)setOnRequestOK:(id /* block */)arg1;
- (void).cxx_destruct;
@end
