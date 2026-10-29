@interface FavWebCacheJavaScriptUtil : NSObject
+ (id)getHtmlContentAndFileUrlScript;
+ (id)getStorageScript;
+ (id)webViewDownloadScript:(id)arg1;
+ (id)hookAjaxScript:(BOOL)arg1;
+ (id)hookFetchAPIScript;
+ (id)hookDomScript;
+ (id)hookStorageScript:(id)arg1;
+ (id)hookLocationScript:(id)arg1;
+ (id)getTitleScript;
+ (id)getElementScriptAtPoint:(CGPoint)arg1 atView:(id)arg2;
+ (id)existFileSrcScript:(id)arg1;
+ (id)fixImgSrcScript;
+ (id)fixIframeScript;
+ (id)handleImgClickScript;
@end

