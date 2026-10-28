@interface MMFinderLivePrizeActivitiesRouterActionSheetItemView : MMFinderLiveBottomTextButton
{
    id /* block */ _actionBlock; // +0x8
    MMUIImageView * _imageView; // +0x10
    MMUIButton * _actionButton; // +0x18
    MMUIView * _imageBackgroundView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    NSString * _imageName; // +0x30
    NSString * _title; // +0x38
}
- (id)initWithImageName:(id)arg1 title:(id)arg2;
- (void)createUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)actionButton;
- (void)actionClick;
- (id)titleLabel;
- (id)imageView;
- (id)imageBackgroundView;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setImageView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setImageBackgroundView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
