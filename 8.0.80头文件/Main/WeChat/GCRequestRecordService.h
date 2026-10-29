@interface GCRequestRecordService : MMUserService <MMServiceProtocol>
{
    _TtC6WeChat3HAR * _harObject; // +0x8
    NSMutableDictionary * _requestModelDict; // +0x10
    NSMutableArray * _requestArray; // +0x18
    _TtC6WeChat3HAR * _interceptHar; // +0x20
    NSString * _toPickFile; // +0x28
    NSMutableSet * _usedInterCeptSet; // +0x30
}
- (id)init;
- (BOOL)enableRecord;
- (BOOL)enableIntercept;
- (id)requestKeyFromRequest:(id)arg1;
- (id)requestModelFromRequest:(id)arg1;
- (void)markRequestBegin:(id)arg1 webView:(id)arg2;
- (void)recordRequest:(id)arg1 response:(id)arg2;
- (void)recordRequest:(id)arg1 data:(id)arg2;
- (void)onFirstSchemeWebViewAppear;
- (id)pickOneHarFile;
- (BOOL)shouldInterceptRequest:(id)arg1;
- (BOOL)shouldRecordRequest:(id)arg1;
- (BOOL)shouldHandleRequest:(id)arg1;
- (void)saveToHarFile;
- (void)showMsg:(id)arg1;
- (void)showSuccessMsg:(id)arg1 addtionalInfo:(id)arg2;
- (void)showMsg:(id)arg1 addtionalInfo:(id)arg2;
- (id)trySaveHarObject:(id)arg1 toPath:(id)arg2;
- (id)harEntryForRequest:(id)arg1;
- (id)harObject;
- (void)setHarObject:(id)arg1;
- (id)requestModelDict;
- (void)setRequestModelDict:(id)arg1;
- (id)requestArray;
- (void)setRequestArray:(id)arg1;
- (id)interceptHar;
- (void)setInterceptHar:(id)arg1;
- (id)toPickFile;
- (void)setToPickFile:(id)arg1;
- (id)usedInterCeptSet;
- (void)setUsedInterCeptSet:(id)arg1;
- (void).cxx_destruct;
@end
