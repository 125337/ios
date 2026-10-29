@interface AppImageMessageViewModel : ImageMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)accessibilityMessageType;
- (id)thumbImage;
- (id)maskedThumbImagePath;
- (id)thumbImagePath;
- (id)hdImagePath;
- (BOOL)isImageExists;
- (id)imageData;
@end
