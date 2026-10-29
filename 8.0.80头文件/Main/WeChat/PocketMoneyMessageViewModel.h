@interface PocketMoneyMessageViewModel : CommonMessageViewModel
{
    NSMutableArray * _titleLabelStyles; // +0x70
    NSMutableArray * _descLabelStyles; // +0x78
    WCPayNetImageResource * _iconImageResource; // +0x80
    CGSize _titleSize; // +0x88
    CGSize _descSize; // +0x98
    CGSize _viewSize; // +0xa8
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)cellViewClassName;
- (id)titleText;
- (id)descText;
- (id)titleColor;
- (id)descColor;
- (id)titleLabelStyles;
- (id)descLabelStyles;
- (double)iconSize;
- (CGSize)titleSize;
- (CGSize)descSize;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (void)getIconImageResource:(id /* block */)arg1;
- (void)setTitleSize:(CGSize)arg1;
- (void)setDescSize:(CGSize)arg1;
- (CGSize)viewSize;
- (void)setViewSize:(CGSize)arg1;
- (void)setTitleLabelStyles:(id)arg1;
- (void)setDescLabelStyles:(id)arg1;
- (id)iconImageResource;
- (void)setIconImageResource:(id)arg1;
- (void).cxx_destruct;
@end
