@interface WCMpEditorAssetServiceProxy : NSObject <IMpEditorAssetService>
+ (id)getEditorHtmlPath;
+ (long long)getEditorHtmlVersion;
+ (void)ensureEditorHtmlReadyWithCallback:(id /* block */)arg1 timeout:(double)arg2;
+ (void)refreshEditorHtml;
+ (BOOL)shouldAllowPreload;
@end
