@interface WAMiniToolShareForkViewModel : WANativeAppViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (BOOL)canShowFavoriteBtn;
- (id)sourceTitle;
- (void)handleCardClick;
@end
