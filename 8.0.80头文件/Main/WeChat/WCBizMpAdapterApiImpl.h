@interface WCBizMpAdapterApiImpl : NSObject <MMFlutterPlugin, BizMpAdapterApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)gotoArticleEditorPageEntry:(id)arg1 error:(id *)arg2;
- (void)preloadArticleEditorWebViewWithError:(id *)arg1;
- (void)enableAutoPreloadArticleEditorWithError:(id *)arg1;
- (void)disableAutoPreloadArticleEditorWithError:(id *)arg1;
@end
