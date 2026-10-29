@interface JSFunctionDef : NSObject
{
    SEL funcSelector; // +0x8
    long long funcType; // +0x10
    NSString * funcName; // +0x18
    JSAPIPermissionBitSet * permissionBitset; // +0x20
    long long permissionByteIndex; // +0x28
    unsigned long long _runInWebViewType; // +0x30
}
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet2:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet3:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionByteIndex:(long long)arg4 RunInWebViewType:(unsigned long long)arg5;
- (id)init;
- (SEL)funcSelector;
- (void)setFuncSelector:(SEL)arg1;
- (long long)funcType;
- (void)setFuncType:(long long)arg1;
- (id)funcName;
- (void)setFuncName:(id)arg1;
- (id)permissionBitset;
- (void)setPermissionBitset:(id)arg1;
- (long long)permissionByteIndex;
- (void)setPermissionByteIndex:(long long)arg1;
- (unsigned long long)runInWebViewType;
- (void)setRunInWebViewType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

