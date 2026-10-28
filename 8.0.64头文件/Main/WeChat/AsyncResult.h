@interface AsyncResult : NSObject
{
    long long _ret; // +0x8
    NSString * _errorMessage; // +0x10
    FlutterStandardTypedData * _data; // +0x18
}
+ (id)makeWithRet:(long long)arg1 errorMessage:(id)arg2 data:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)ret;
- (void)setRet:(long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
