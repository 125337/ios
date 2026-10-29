@interface AppUrlMessageViewModel : AppStandardTextContentMessageViewModel <IAppDataExt>
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)title;
- (unsigned long long)contentLayoutType;
- (id)contentText;
- (id)hostText;
- (unsigned long long)contentImgCnt;
- (id)thumbImage;
- (id)sourceIcon;
- (double)sourceIconCornerRadius;
- (BOOL)isThumbCleared;
- (id)sourceTitle;
- (id)fallbackSourceHost;
- (id)displayableFallbackHost;
- (unsigned long long)sourceViewType;
- (BOOL)isShowThumb;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)OnAppWatermarkChanged:(id)arg1;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
@end
