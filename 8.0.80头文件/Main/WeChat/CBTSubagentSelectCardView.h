@interface CBTSubagentSelectCardView : UIView
{
    BOOL _mine; // +0x8
    MMHeadImageView * _avatarView; // +0x10
    UILabel * _nameLabel; // +0x18
    UIButton * _removeBtn; // +0x20
    UIButton * _mineRemoveBtn; // +0x28
    id /* block */ _subagentClick; // +0x30
    UITapGestureRecognizer * _mineTapGesture; // +0x38
    UIColor * _normalBackgroundColor; // +0x40
    UIColor * _pressedBackgroundColor; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupStyle;
- (id)pressedColorFromColor:(id)arg1;
- (void)setupSubviews;
- (void)refreshTheme;
- (void)updateAvatarUrl:(id)arg1 name:(id)arg2;
- (void)updateAvatarImage:(id)arg1 name:(id)arg2;
- (void)onSubagentClick;
- (void)updateMine:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)removeBtn;
- (void)setRemoveBtn:(id)arg1;
- (id)mineRemoveBtn;
- (void)setMineRemoveBtn:(id)arg1;
- (BOOL)mine;
- (void)setMine:(BOOL)arg1;
- (id /* block */)subagentClick;
- (void)setSubagentClick:(id /* block */)arg1;
- (id)mineTapGesture;
- (void)setMineTapGesture:(id)arg1;
- (id)normalBackgroundColor;
- (void)setNormalBackgroundColor:(id)arg1;
- (id)pressedBackgroundColor;
- (void)setPressedBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
