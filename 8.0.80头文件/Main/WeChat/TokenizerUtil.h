@interface TokenizerUtil : NSObject
+ (id)getUnicodeNormalizationForms:(id)arg1;
+ (id)getKeywordsForString:(id)arg1;
+ (id)getKeywordsForString:(id)arg1 skipStemming:(BOOL)arg2;
+ (id)generateFTS5BinaryTokenizeString:(id)arg1;
+ (id)genPinyinQuaryFrom:(id)arg1;
+ (id)escapeSymbolsFrom:(id)arg1;
@end
