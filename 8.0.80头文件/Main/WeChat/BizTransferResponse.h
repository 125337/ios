@interface BizTransferResponse : NSObject
{
    BOOL _success; // +0x8
    long long _code; // +0x10
    NSString * _msg; // +0x18
    NSString * _data; // +0x20
    NSDictionary * _respHeaders; // +0x28
}
+ (id)makeWithSuccess:(BOOL)arg1 code:(long long)arg2 msg:(id)arg3 data:(id)arg4 respHeaders:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (long long)code;
- (void)setCode:(long long)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)respHeaders;
- (void)setRespHeaders:(id)arg1;
- (void).cxx_destruct;
@end
