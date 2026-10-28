@interface GCChatRoonEnterTipView : UIView
{
    UIButton * _confirmBtn; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _contentLabel; // +0x18
    MMWebImageView * _imgView; // +0x20
    UILabel * _condtionTipLabel; // +0x28
    MMWebImageView * _backGroundImgView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithConfig:(id)arg1;
- (void)layoutLabel:(id)arg1 isAttributeText:(BOOL)arg2;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (id)condtionTipLabel;
- (void)setCondtionTipLabel:(id)arg1;
- (id)backGroundImgView;
- (void)setBackGroundImgView:(id)arg1;
- (void).cxx_destruct;
@end
