@interface EcsNativeRouterResponse : NSObject
{
    NSNumber * _errCode; // +0x8
    NSString * _errMsg; // +0x10
    NSString * _data; // +0x18
}
+ (id)makeWithErrCode:(id)arg1 errMsg:(id)arg2 data:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)errCode;
- (void)setErrCode:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
