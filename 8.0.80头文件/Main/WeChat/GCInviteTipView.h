@interface GCInviteTipView : UIView
{
    UIButton * _confirmBtn; // +0x8
    UIImageView * _topIconView; // +0x10
    UILabel * _titleView; // +0x18
    UILabel * _descView; // +0x20
    UIImageView * _contentImgView; // +0x28
}
- (void)configureWithConfig:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)topIconView;
- (void)setTopIconView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)contentImgView;
- (void)setContentImgView:(id)arg1;
- (void).cxx_destruct;
@end
