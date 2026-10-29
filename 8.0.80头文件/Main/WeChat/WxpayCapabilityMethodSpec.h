@interface WxpayCapabilityMethodSpec : NSObject
{
    BOOL _envelopesResult; // +0x8
    BOOL _returnsBuffer; // +0x9
    BOOL _acknowledges; // +0xa
    NSString * _name; // +0x10
    long long _arity; // +0x18
    NSArray * _parameterTypes; // +0x20
    long long _contextScope; // +0x28
    WxpayFileHandleFields * _fileHandles; // +0x30
}
+ (id)specWithName:(id)arg1 arity:(long long)arg2;
+ (id)specWithName:(id)arg1 arity:(long long)arg2 fileHandles:(id)arg3;
+ (id)specWithName:(id)arg1 arity:(long long)arg2 acknowledges:(BOOL)arg3;
+ (id)specWithName:(id)arg1 arity:(long long)arg2 envelopesResult:(BOOL)arg3 parameterTypes:(id)arg4 returnsBuffer:(BOOL)arg5 acknowledges:(BOOL)arg6;
+ (id)specWithName:(id)arg1 arity:(long long)arg2 envelopesResult:(BOOL)arg3 parameterTypes:(id)arg4 returnsBuffer:(BOOL)arg5 acknowledges:(BOOL)arg6 contextScope:(long long)arg7;
- (id)initInternal;
- (id)description;
- (id)name;
- (long long)arity;
- (BOOL)envelopesResult;
- (id)parameterTypes;
- (BOOL)returnsBuffer;
- (BOOL)acknowledges;
- (long long)contextScope;
- (id)fileHandles;
- (void).cxx_destruct;
@end
