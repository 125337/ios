@interface LiteAppEngineConfigModel : NSObject
{
    LiteAppEngineConfigStarTaskModel * _starTask; // +0x8
    LiteAppEngineConfigMinimizeTaskModel * _minimizeTask; // +0x10
    NSMutableDictionary * _jsapi; // +0x18
    NSDictionary * _module; // +0x20
}
- (id)init;
- (id)starTask;
- (void)setStarTask:(id)arg1;
- (id)minimizeTask;
- (void)setMinimizeTask:(id)arg1;
- (id)jsapi;
- (void)setJsapi:(id)arg1;
- (id)module;
- (void)setModule:(id)arg1;
- (void).cxx_destruct;
@end
