@interface MMLiveScrollActionSheetIconView : MMLiveScrollActionSheetItemView
{
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    MMUIButton * _iconButton; // +0x28
    UIImage * _iconImg; // +0x30
    UIImage * _cornerImg; // +0x38
    NSString * _title; // +0x40
    NSString * _subTitle; // +0x48
}
- (id)initWithItem:(id)arg1;
- (void)setIconImg:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)reloadItem:(id)arg1;
- (void)reloadData;
- (void)onTaped;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)iconImg;
- (id)cornerImg;
- (void)setCornerImg:(id)arg1;
- (id)title;
- (id)subTitle;
- (void).cxx_destruct;
@end
