@interface WCWebsearchUtil : NSObject
+ (BOOL)isSupportSuggestionFor:(unsigned long long)arg1 isSubSearch:(BOOL)arg2;
+ (BOOL)isSupportLocalSuggestionFor:(unsigned long long)arg1;
+ (void)stopPlayAISearchTts;
+ (id)getOrCreateWebSearchStandAlonePlayApp;
+ (id)getWebSearchStandAlonePlayApp;
+ (void)releaseWebSearchStandAlonePlayApp;
@end
