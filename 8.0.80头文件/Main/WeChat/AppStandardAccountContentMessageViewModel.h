@interface AppStandardAccountContentMessageViewModel : AppStandardContentBaseMessageViewModel
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)titleRichConfig;
- (CGSize)calculateLayoutSize;
- (unsigned long long)avatarType;
- (id)accountName;
- (BOOL)allowsTitleShowEmoticon;
- (id)accountDesc;
- (id)descColor;
- (id)descIcon;
- (id)descIconUrl;
- (id)accountSuffix;
- (double)avatarWidth;
- (CGSize)accountSuffixSize;
- (CGSize)descSize;
- (CGSize)titleSize;
- (double)layoutWidth;
@end
