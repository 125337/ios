@interface MMAssetFetchError : NSObject
{
    long long _code; // +0x8
    NSDictionary * _errorInfo; // +0x10
}
+ (id)defaultError;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 info:(id)arg2;
- (long long)code;
- (void)setCode:(long long)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (void).cxx_destruct;
@end

