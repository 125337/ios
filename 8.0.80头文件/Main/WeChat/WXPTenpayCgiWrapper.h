@interface WXPTenpayCgiWrapper : WCPayBaseTenPayCgi
{
    id /* block */ _errorCallback; // +0x8
    id /* block */ _successCallback; // +0x10
    id /* block */ _endCallback; // +0x18
    NSUUID * _uuid; // +0x20
}
- (id)init;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id /* block */)errorCallback;
- (void)setErrorCallback:(id /* block */)arg1;
- (id /* block */)successCallback;
- (void)setSuccessCallback:(id /* block */)arg1;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (void).cxx_destruct;
@end
