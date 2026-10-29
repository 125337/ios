@interface NSMethodSignature (SCExt)
- (id)methodSignatureByInsertingType:(const char *)arg1 atArgumentIndex:(unsigned long long)arg2;
- (const char *)typeEncoding;
- (long long)sc_methodReturnType;
@end

