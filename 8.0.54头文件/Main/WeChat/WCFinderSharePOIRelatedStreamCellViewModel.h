@interface WCFinderSharePOIRelatedStreamCellViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)title;
- (id)desc;
- (id)imageUrl;
- (id)cellViewClassName;
- (CGSize)viewSize;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
@end

