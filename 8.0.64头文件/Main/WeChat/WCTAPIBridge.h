@interface WCTAPIBridge : NSObject
+ (BOOL)createTable:(id)arg1 withClass:(Class)arg2 withHandle:(CPPHandle)arg3;
+ (BOOL)createVirtualTable:(id)arg1 withClass:(Class)arg2 withHandle:(CPPHandle)arg3;
+ (BOOL)insertObjects:(id)arg1 intoTable:(id)arg2 withProperties:(id)arg3 orReplace:(BOOL)arg4 orIgnore:(BOOL)arg5 withHandle:(CPPHandle)arg6;
+ (void)bindProperties:(id)arg1 ofObject:(id)arg2 withHandleStatement:(CPPHandleStatement)arg3;
+ (void)bindProperty:(id)arg1 ofObject:(id)arg2 toIndex:(int)arg3 withHandleStatement:(CPPHandleStatement)arg4;
+ (id)extractObjectOnResultColumns:(id)arg1 fromHandleStatement:(CPPHandleStatement)arg2;
+ (id)extractMultiObjectOnResultColumns:(id)arg1 fromHandleStatement:(CPPHandleStatement)arg2;
+ (void)configDefaultSymbolDetectorAndUnicodeNormalizer;
+ (void)configPinyinDict:(id)arg1;
+ (void)configTraditionalChineseDict:(id)arg1;
@end
