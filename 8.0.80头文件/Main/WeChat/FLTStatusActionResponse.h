@interface FLTStatusActionResponse : NSObject
{
    NSString * _cmdId; // +0x8
    long long _errCode; // +0x10
    NSString * _errMsg; // +0x18
    FLTStatusPlatformProto * _proto; // +0x20
}
+ (id)makeWithCmdId:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3 proto:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)cmdId;
- (void)setCmdId:(id)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)proto;
- (void)setProto:(id)arg1;
- (void).cxx_destruct;
@end
