@interface AppProductMessageViewModel : AppUrlMessageViewModel
{
    ScanProductItem * m_productItem; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)titleText;
- (id)descText;
- (id)thumbImage;
- (id)productItem;
- (void).cxx_destruct;
@end

