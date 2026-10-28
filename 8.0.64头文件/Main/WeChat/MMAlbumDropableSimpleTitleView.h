@interface MMAlbumDropableSimpleTitleView : MMTitleView <MMDropableTitleViewAbility>
{
    BOOL _active; // +0x8
    id <MMAlbumDropableTitleViewDelegate> _titleViewDelegate; // +0x10
    MMUIButton * _button; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    NSString * _title; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithTitle:(id)arg1;
- (void)initViews;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setIsEnable:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (void)rotateArrowWithAnimated:(BOOL)arg1;
- (void)laytoutTitleViews;
- (void)onClick:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)titleViewDelegate;
- (void)setTitleViewDelegate:(id)arg1;
- (BOOL)active;
- (id)button;
- (void)setButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
