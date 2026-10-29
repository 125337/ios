@interface WebPageLangIdentifierUtil : NSObject
+ (float)identifyLanguageRatioBySampleArray:(id)arg1 ignoreTraditionCN:(BOOL)arg2 wholeLength:(BOOL *)arg3;
+ (BOOL)isStringLegal:(id)arg1;
+ (id)clearArray:(id)arg1;
+ (id)squeezeArray:(id)arg1 cellLength:(unsigned long long)arg2;
+ (id)sortAndCutArray:(id)arg1 cutLength:(unsigned long long)arg2;
@end
