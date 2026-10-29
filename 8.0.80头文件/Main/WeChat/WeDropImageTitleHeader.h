@interface WeDropImageTitleHeader : WeDropBaseHeaderView
{
    BOOL _loading; // +0x8
    UIView * _iconView; // +0x10
    NSString * _title; // +0x18
    NSString * _subtitle; // +0x20
    WeDropImageTitleComponent * _titleView; // +0x28
}
- (id)init;
- (void)initSubviews;
- (void)setIconView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)iconView;
- (id)title;
- (id)subtitle;
- (BOOL)loading;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (void).cxx_destruct;
@end
