@interface WePkgFacadeJsExpr : NSObject
{
    NSMutableString * _jsScript; // +0x8
}
- (id)init;
- (void)createIntermediateObjectIfNeed:(id)arg1;
- (id)safeAccessSubVarExpr:(id)arg1;
- (id)timeFromDomLoadingExpr;
- (void)jsVar:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)appendString:(id)arg1;
- (id)jsScript;
- (void)setJsScript:(id)arg1;
- (void).cxx_destruct;
@end
