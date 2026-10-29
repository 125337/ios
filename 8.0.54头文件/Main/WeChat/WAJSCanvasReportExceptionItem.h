@interface WAJSCanvasReportExceptionItem : NSObject
{
    BOOL _isMainContext; // +0x8
    unsigned int _jsVMType; // +0xc
    NSString * _appId; // +0x10
    NSString * _name; // +0x18
    NSString * _desc; // +0x20
    NSString * _stack; // +0x28
    NSString * _basePkgVer; // +0x30
    NSString * _jsContextName; // +0x38
}
- (id)reportString;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (id)basePkgVer;
- (void)setBasePkgVer:(id)arg1;
- (unsigned int)jsVMType;
- (void)setJsVMType:(unsigned int)arg1;
- (BOOL)isMainContext;
- (void)setIsMainContext:(BOOL)arg1;
- (id)jsContextName;
- (void)setJsContextName:(id)arg1;
- (void).cxx_destruct;
@end

