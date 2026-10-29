@interface CheckMobileStateResult : NSObject
{
    BOOL _mobileValid; // +0x8
    BOOL _needSpamVerify; // +0x9
    long long _errCode; // +0x10
    NSString * _errMsg; // +0x18
    NSString * _regSessionId; // +0x20
}
+ (id)makeWithErrCode:(long long)arg1 errMsg:(id)arg2 regSessionId:(id)arg3 mobileValid:(BOOL)arg4 needSpamVerify:(BOOL)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)regSessionId;
- (void)setRegSessionId:(id)arg1;
- (BOOL)mobileValid;
- (void)setMobileValid:(BOOL)arg1;
- (BOOL)needSpamVerify;
- (void)setNeedSpamVerify:(BOOL)arg1;
- (void).cxx_destruct;
@end
