@interface WCFinderGlobalStoreResult : NSObject
{
    NSObject * _result; // +0x8
    long long _errCode; // +0x10
    NSString * _errMsg; // +0x18
}
- (id)result;
- (void)setResult:(id)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
