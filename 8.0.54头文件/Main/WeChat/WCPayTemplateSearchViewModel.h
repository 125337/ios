@interface WCPayTemplateSearchViewModel : ReaderMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)getMessageFTSText:(id)arg1;
+ (void)addValueForFTS:(id)arg1 value:(id)arg2;
+ (id)makeHighlightedLabel:(id)arg1 previewInfo:(id)arg2 color:(id)arg3;
- (id)cellViewClassName;
- (id)makeSearchPreview:(id)arg1;
- (id)timeToStr:(id)arg1;
@end

