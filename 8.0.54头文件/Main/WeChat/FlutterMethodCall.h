@interface FlutterMethodCall : NSObject
{
    NSString * _method; // +0x8
    id _arguments; // +0x10
}
+ (id)methodCallWithMethodName:(id)arg1 arguments:(id)arg2;
- (id)initWithMethodName:(id)arg1 arguments:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)method;
- (id)arguments;
- (void).cxx_destruct;
@end

