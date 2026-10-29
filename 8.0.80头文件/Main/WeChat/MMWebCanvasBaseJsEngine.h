@interface MMWebCanvasBaseJsEngine : MMObject
{
    JSVirtualMachine * _jsVM; // +0x8
    MMCanvasMainJSContext * _mainContext; // +0x10
    MMWebJsBasePkgInfo * _basePkgInfo; // +0x18
    MMWebJsBasePkgInfo * _bizPkgInfo; // +0x20
    NSMutableDictionary * _dicJSContexts; // +0x28
    NSString * _systemInfoJsonStr; // +0x30
}
- (id)initWithBasePkgInfo:(id)arg1 bizPkgInfo:(id)arg2;
- (void)setupContext:(id)arg1 metaInfo:(id)arg2;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (id)jsVM;
- (void)setJsVM:(id)arg1;
- (id)mainContext;
- (void)setMainContext:(id)arg1;
- (id)basePkgInfo;
- (void)setBasePkgInfo:(id)arg1;
- (id)bizPkgInfo;
- (void)setBizPkgInfo:(id)arg1;
- (id)dicJSContexts;
- (void)setDicJSContexts:(id)arg1;
- (id)systemInfoJsonStr;
- (void)setSystemInfoJsonStr:(id)arg1;
- (void).cxx_destruct;
@end
