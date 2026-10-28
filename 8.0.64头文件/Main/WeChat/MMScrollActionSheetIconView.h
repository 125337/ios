@interface MMScrollActionSheetIconView : MMScrollActionSheetItemView
{
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    MMUIButton * _iconButton; // +0x28
    UIImageView * _highLightView; // +0x30
    UIImage * _iconImg; // +0x38
    UIImage * _cornerImg; // +0x40
    NSString * _title; // +0x48
    NSString * _subTitle; // +0x50
}
+ (double)displayHeightForItem:(id)arg1 width:(double)arg2;
+ (double)displayHeightForItem:(id)arg1 width:(double)arg2 iconMargin:(double)arg3;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 iconMargin:(double)arg2;
- (void)highLight;
- (void)updateRedDot;
- (void)setIconImg:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)reloadItem:(id)arg1;
- (void)reloadData;
- (void)onTaped;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)highLightView;
- (void)setHighLightView:(id)arg1;
- (id)iconImg;
- (id)cornerImg;
- (void)setCornerImg:(id)arg1;
- (id)title;
- (id)subTitle;
- (void).cxx_destruct;
@end
