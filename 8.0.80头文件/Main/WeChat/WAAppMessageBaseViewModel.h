@interface WAAppMessageBaseViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)getWAAppContact;
- (id)getWAAppUsername;
- (id)getWAAppName;
- (id)getWAAppID;
- (id)getWAAppPath;
- (unsigned int)getWAAppType;
- (unsigned int)getWAAppServiceType;
- (unsigned int)getWAAppVersion;
- (unsigned long long)getWAAppState;
- (long long)getWAAppActionType;
- (id)title;
- (id)desc;
- (id)appIconUrl;
- (id)shareImageUrl;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)sourceTag;
- (BOOL)shouldHideSourceViewSepLine;
- (double)sourceViewInsideHeight;
- (double)sourceViewIconWidth;
- (double)sourceViewPaddingTop;
- (id)additionalAccessibilityDescription;
@end
