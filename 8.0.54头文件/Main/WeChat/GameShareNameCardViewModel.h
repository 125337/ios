@interface GameShareNameCardViewModel : CommonMessageViewModel
{
    NSString * m_sharedUsername; // +0x70
    NSString * m_sharedNickname; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)name;
- (id)desc;
- (id)headImageUrl;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;
@end

