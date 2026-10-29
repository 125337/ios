@interface WCFinderEndorsementCellViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)title;
- (id)desc;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
@end

