@interface FlutterCgiResponse : NSObject
{
    long long _errorType; // +0x8
    long long _errorCode; // +0x10
    FlutterStandardTypedData * _data; // +0x18
}
+ (id)makeWithErrorType:(long long)arg1 errorCode:(long long)arg2 data:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

