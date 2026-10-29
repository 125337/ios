@interface BaseResponseErrMsgHandleConfig : NSObject
{
    id /* block */ _handlerConfigBlock; // +0x8
    NSString * _defaultMsg; // +0x10
}
+ (id)defaultConfig;
+ (id)configWithDefaultMsg:(id)arg1;
- (id /* block */)handlerConfigBlock;
- (void)setHandlerConfigBlock:(id /* block */)arg1;
- (id)defaultMsg;
- (void)setDefaultMsg:(id)arg1;
- (void).cxx_destruct;
@end

