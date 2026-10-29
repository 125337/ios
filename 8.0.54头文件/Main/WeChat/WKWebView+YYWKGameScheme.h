@interface WKWebView (YYWKGameScheme)
+ (BOOL)mmgame_enableCustomScheme;
+ (BOOL)isSchemeHttpOrHttps:(id)arg1;
+ (BOOL)mmgame_handlesURLScheme:(id)arg1;
+ (BOOL)isInShouldHookContext;
+ (void)markShouldHookContext:(BOOL)arg1;
@end

