@interface WAReportJSApiActionItem : WAReportBaseItem
{
    BOOL _shouldRoute13542To27220; // +0x8
    int _result; // +0xc
    int _permissionValue; // +0x10
    int _errorcode; // +0x14
    NSString * _funcName; // +0x18
    NSString * _keyParam; // +0x20
    unsigned long long _costtime; // +0x28
    NSString * _errMsg; // +0x30
    NSString * _keyResult; // +0x38
    NSString * _keyRequest; // +0x40
}
- (id)reportString;
- (BOOL)isKeyJSApi;
- (id)funcName;
- (void)setFuncName:(id)arg1;
- (id)keyParam;
- (void)setKeyParam:(id)arg1;
- (int)result;
- (void)setResult:(int)arg1;
- (int)permissionValue;
- (void)setPermissionValue:(int)arg1;
- (int)errorcode;
- (void)setErrorcode:(int)arg1;
- (unsigned long long)costtime;
- (void)setCosttime:(unsigned long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)keyResult;
- (void)setKeyResult:(id)arg1;
- (id)keyRequest;
- (void)setKeyRequest:(id)arg1;
- (BOOL)shouldRoute13542To27220;
- (void)setShouldRoute13542To27220:(BOOL)arg1;
- (void).cxx_destruct;
@end
