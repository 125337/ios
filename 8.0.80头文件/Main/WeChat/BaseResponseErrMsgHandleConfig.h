@interface BaseResponseErrMsgHandleConfig : NSObject
{
    BOOL _isStrictMode; // +0x8
    id /* block */ _handlerConfigBlock; // +0x10
    NSString * _defaultMsg; // +0x18
}
+ (id)defaultConfig;
+ (id)configWithDefaultMsg:(id)arg1;
- (BOOL)isStrictMode;
- (void)setIsStrictMode:(BOOL)arg1;
- (id /* block */)handlerConfigBlock;
- (void)setHandlerConfigBlock:(id /* block */)arg1;
- (id)defaultMsg;
- (void)setDefaultMsg:(id)arg1;
- (void).cxx_destruct;
@end
