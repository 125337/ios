@interface AppTingMusicSpaceMessageViewModel : AppStandardTextContentMessageViewModel
+ (BOOL)isMusicSpaceMessage:(id)arg1;
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (unsigned long long)contentLayoutType;
- (id)title;
- (id)contentText;
- (unsigned long long)contentImgCnt;
- (id)coverImageUrls;
- (id)thumbImage;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
@end
