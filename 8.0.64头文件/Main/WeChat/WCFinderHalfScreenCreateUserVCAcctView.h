@interface WCFinderHalfScreenCreateUserVCAcctView : UIView
{
    UIView * _topView; // +0x8
    UIView * _bottomView; // +0x10
    UIImageView * _headerImageView; // +0x18
    RichTextView * _nickNameLabel; // +0x20
    MMUIButton * _editBtn; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubViews;
- (void)setNickName:(id)arg1;
- (void)setupLayout;
- (id)createSeparateLine;
- (void)layoutSubviews;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)editBtn;
- (void)setEditBtn:(id)arg1;
- (void).cxx_destruct;
@end
