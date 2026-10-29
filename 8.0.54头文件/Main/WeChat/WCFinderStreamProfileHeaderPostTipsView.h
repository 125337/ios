@interface WCFinderStreamProfileHeaderPostTipsView : MMUIView
{
    WCFinderProfilePostTipsInfo * _info; // +0x8
    MMWebImageView * _imageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _reasonLabel; // +0x20
    UIButton * _postButton; // +0x28
    id /* block */ _clickPostBtnBlock; // +0x30
    id /* block */ _clickSelfViewBlock; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubViews;
- (void)setupUserAction;
- (void)updateWithInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onClickPostButton;
- (void)onClickTipsView;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg1;
- (id)postButton;
- (void)setPostButton:(id)arg1;
- (id /* block */)clickPostBtnBlock;
- (void)setClickPostBtnBlock:(id /* block */)arg1;
- (id /* block */)clickSelfViewBlock;
- (void)setClickSelfViewBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

