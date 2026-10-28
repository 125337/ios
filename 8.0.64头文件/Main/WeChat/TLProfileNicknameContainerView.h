@interface TLProfileNicknameContainerView : UIView
{
    id /* block */ _nicknameClickBlock; // +0x8
    id /* block */ _textStateClickBlock; // +0x10
    CContact * _contact; // +0x18
    InteractionLabel * _nicknameLabel; // +0x20
    MMWebImageView * _textStateImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 contact:(id)arg2;
- (void)initView;
- (void)initTextStateImageView;
- (void)initNicknameLabel;
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1;
- (id)contactTextStateIcon;
- (void)onClickNickname;
- (void)onClickTextState;
- (id /* block */)nicknameClickBlock;
- (void)setNicknameClickBlock:(id /* block */)arg1;
- (id /* block */)textStateClickBlock;
- (void)setTextStateClickBlock:(id /* block */)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)textStateImageView;
- (void)setTextStateImageView:(id)arg1;
- (void).cxx_destruct;
@end
