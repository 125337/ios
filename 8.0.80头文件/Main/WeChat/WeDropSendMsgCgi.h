@interface WeDropSendMsgCgi : WCBaseCgi
{
    id /* block */ _onRequestFailed; // +0x8
    id /* block */ _onRequestOK; // +0x10
}
- (void)startRequestWithQRContent:(id)arg1 deviceInfo:(id)arg2;
- (id)debugModuleName;
- (BOOL)isAutoLifeCycle;
- (unsigned int)cgiNumber;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)onRequestFailed;
- (void)setOnRequestFailed:(id /* block */)arg1;
- (id /* block */)onRequestOK;
- (void)setOnRequestOK:(id /* block */)arg1;
- (void).cxx_destruct;
@end
