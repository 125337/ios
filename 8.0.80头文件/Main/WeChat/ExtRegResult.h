@interface ExtRegResult : NSObject
{
    long long _errCode; // +0x8
    NSString * _errMsg; // +0x10
    NSString * _username; // +0x18
    NSString * _openId; // +0x20
}
+ (id)makeWithErrCode:(long long)arg1 errMsg:(id)arg2 username:(id)arg3 openId:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (void).cxx_destruct;
@end
