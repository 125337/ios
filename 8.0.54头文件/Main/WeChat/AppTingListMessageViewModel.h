@interface AppTingListMessageViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (double)cellHeight;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (id)shareCategoryItem;
- (id)tingShareListBackgroundColor;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)hasReferImage;
- (id)getReferImage;
@end

