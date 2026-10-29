@interface WebSearchViewJSProvider : NSObject <YYWebViewDelegate>
- (id)getPreInjectScriptStr;
- (BOOL)allowsAutoMediaPlay;
- (BOOL)allowsInlineMediaPlay;
@end

