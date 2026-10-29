@interface CBTAsstWeAppLinkOpener : NSObject
+ (void)openWithJumpWrap:(id)arg1 navigationController:(id)arg2;
+ (BOOL)openWeAppLink:(id)arg1 navigationController:(id)arg2;
+ (id)preprocessWeAppAnchorsInMarkdown:(id)arg1;
+ (id)extractWeAppLinkTextFromAnchorTag:(id)arg1;
+ (id)extractWeAppLinkTextFromMarkdown:(id)arg1;
+ (BOOL)isWeAppLink:(id)arg1;
+ (id)stripWeAppLinkSyntax:(id)arg1;
+ (id)stripHTMLAnchorTags:(id)arg1;
+ (id)jumpWrapFromWeAppLink:(id)arg1;
+ (id)markdownLinkFromAnchor:(id)arg1;
+ (id)buildWeAppUrlWithAppid:(id)arg1 pathBase64:(id)arg2 appState:(unsigned int)arg3 shareKey:(id)arg4;
+ (id)escapeMarkdownLinkText:(id)arg1;
+ (id)protectedCodeRangesInString:(id)arg1;
+ (BOOL)range:(_NSRange)arg1 intersectsAny:(id)arg2;
@end
