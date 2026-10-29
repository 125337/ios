@interface WebSearchColorToken : NSObject
+ (id)tokenMap;
+ (id)tokenAliasMap;
+ (id)canonicalToken:(id)arg1;
+ (id)colorForToken:(id)arg1;
+ (id)colorForHexString:(id)arg1;
+ (id)colorForCSSVar:(id)arg1;
@end
