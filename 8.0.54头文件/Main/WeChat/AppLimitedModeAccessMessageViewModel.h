@interface AppLimitedModeAccessMessageViewModel : CommonMessageViewModel
{
    double m_titleHeight; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)thumbImage;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
@end

