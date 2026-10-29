@interface WCFinderShareNameCardCellViewModel : AppStandardAccountContentMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (unsigned long long)authType;
- (id)username;
- (id)name;
- (id)desc;
- (id)headImageUrl;
- (id)authIconUrl;
- (id)cellViewClassName;
- (unsigned long long)avatarType;
- (id)accountName;
- (id)accountDesc;
- (id)descIcon;
- (id)descIconUrl;
- (BOOL)hasSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
@end
