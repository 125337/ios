@interface VerifyCodeResult : NSObject
{
    long long _errCode; // +0x8
    NSString * _errMsg; // +0x10
    NSString * _lastNickname; // +0x18
    NSString * _lastHeadImgUrl; // +0x20
}
+ (id)makeWithErrCode:(long long)arg1 errMsg:(id)arg2 lastNickname:(id)arg3 lastHeadImgUrl:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)lastNickname;
- (void)setLastNickname:(id)arg1;
- (id)lastHeadImgUrl;
- (void)setLastHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
