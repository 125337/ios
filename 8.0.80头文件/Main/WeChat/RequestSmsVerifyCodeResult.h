@interface RequestSmsVerifyCodeResult : NSObject
{
    long long _errCode; // +0x8
    NSString * _errMsg; // +0x10
    NSString * _regSessionId; // +0x18
}
+ (id)makeWithErrCode:(long long)arg1 errMsg:(id)arg2 regSessionId:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)regSessionId;
- (void)setRegSessionId:(id)arg1;
- (void).cxx_destruct;
@end
