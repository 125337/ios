@interface WAReportHTMLJSAPIItem : WAReportBaseItem
{
    NSString * _currentUrl; // +0x8
    NSString * _funcName; // +0x10
    NSString * _keyParam; // +0x18
    long long _jsapiResult; // +0x20
    long long _permissionValue; // +0x28
    long long _errorCode; // +0x30
    NSString * _errorMsgStr; // +0x38
}
- (int)reportID;
- (id)reportString;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)funcName;
- (void)setFuncName:(id)arg1;
- (id)keyParam;
- (void)setKeyParam:(id)arg1;
- (long long)jsapiResult;
- (void)setJsapiResult:(long long)arg1;
- (long long)permissionValue;
- (void)setPermissionValue:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMsgStr;
- (void)setErrorMsgStr:(id)arg1;
- (void).cxx_destruct;
@end

