@interface FavNoteSelectionToolbarButton : UIButton
{
    UIImageView * _iconImageView; // +0x8
    UILabel * _textLabel; // +0x10
    NSString * _menuType; // +0x18
}
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 menuType:(id)arg3;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)menuType;
- (void)setMenuType:(id)arg1;
- (void).cxx_destruct;
@end
