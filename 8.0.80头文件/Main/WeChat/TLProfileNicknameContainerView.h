@interface TLProfileNicknameContainerView : UIView
{
    id /* block */ _nicknameClickBlock; // +0x8
    id /* block */ _textStateClickBlock; // +0x10
    CContact * _contact; // +0x18
    InteractionLabel * _nicknameLabel; // +0x20
    MMWebImageView * _textStateImageView; // +0x28
    TextStateItemView * _textStateItemView; // +0x30
}
- (long long)profileScene;
- (void)setProfileScene:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 contact:(id)arg2;
- (void)initView;
- (BOOL)useTextStateItemView;
- (void)setUseTextStateItemView:(BOOL)arg1;
- (void)initTextStateItemViewIfNeeded;
- (void)configTextStateViewReportWithContact:(id)arg1 View:(id)arg2 useNewIconStyle:(BOOL)arg3;
- (void)initTextStateImageView;
- (void)initNicknameLabel;
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1;
- (id)contactTextStateIcon;
- (void)setLabelFontSize:(double)arg1;
- (void)checkBindReportStatusIconView;
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
- (id)textStateItemView;
- (void)setTextStateItemView:(id)arg1;
- (void).cxx_destruct;
@end
