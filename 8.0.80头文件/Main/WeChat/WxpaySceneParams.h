@interface WxpaySceneParams : NSObject
{
    NSDictionary * _params; // +0x8
    NSError * _error; // +0x10
}
- (id)initWithDictionary:(id)arg1;
- (void)rejectWithCode:(long long)arg1 message:(id)arg2;
- (id)optionalLoadingText;
- (id)rawValue:(id)arg1;
- (void)overrideValue:(id)arg1 forKey:(id)arg2;
- (BOOL)isAbsent:(id)arg1;
- (id)requiredString:(id)arg1;
- (id)optionalString:(id)arg1;
- (id)optionalString:(id)arg1 fallback:(id)arg2;
- (BOOL)optionalBool:(id)arg1 fallback:(BOOL)arg2;
- (double)optionalDouble:(id)arg1 fallback:(double)arg2;
- (long long)optionalBoundedInt:(id)arg1 fallback:(long long)arg2 minimum:(long long)arg3 maximum:(long long)arg4;
- (id)queryValue:(id)arg1 snakeCase:(id)arg2 fallback:(id)arg3;
- (long long)queryLongLong:(id)arg1;
- (id)sessionId;
- (id)error;
- (void).cxx_destruct;
@end
