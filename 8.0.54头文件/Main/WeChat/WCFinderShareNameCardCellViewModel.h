@interface WCFinderShareNameCardCellViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (unsigned long long)authType;
- (id)username;
- (id)name;
- (id)desc;
- (id)headImageUrl;
- (id)authIconUrl;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
@end

