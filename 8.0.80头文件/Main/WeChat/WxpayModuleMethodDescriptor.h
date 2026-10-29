@interface WxpayModuleMethodDescriptor : NSObject
{
    BOOL _returnsBuffer; // +0x8
    NSString * _name; // +0x10
    long long _mode; // +0x18
    NSArray * _parameterTypes; // +0x20
    NSDictionary * _returnTypes; // +0x28
    long long _contextScope; // +0x30
}
+ (id)descriptorWithName:(id)arg1 mode:(long long)arg2;
+ (id)descriptorWithName:(id)arg1 mode:(long long)arg2 parameterTypes:(id)arg3 returnsBuffer:(BOOL)arg4 returnTypes:(id)arg5;
+ (id)descriptorWithName:(id)arg1 mode:(long long)arg2 parameterTypes:(id)arg3 returnsBuffer:(BOOL)arg4 returnTypes:(id)arg5 contextScope:(long long)arg6;
- (id)initInternal;
- (id)name;
- (long long)mode;
- (id)parameterTypes;
- (BOOL)returnsBuffer;
- (id)returnTypes;
- (long long)contextScope;
- (void).cxx_destruct;
@end
