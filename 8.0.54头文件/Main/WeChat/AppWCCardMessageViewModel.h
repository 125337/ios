@interface AppWCCardMessageViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)thumbImage;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;
@end

