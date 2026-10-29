@interface WAWebviewHighlightedBottomBannerView : UIButton
{
    NSString * _title; // +0x8
    NSString * _iconUrl; // +0x10
    UIView * _highlightMaskView; // +0x18
    MMWebImageView * _iconImgView; // +0x20
    UILabel * _nicknameLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UIImageView * _descArrowImgView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)reloadData;
- (void)layoutSubviews;
- (id)iconImgView;
- (id)nicknameLabel;
- (id)descLabel;
- (id)descArrowImgView;
- (id)highlightMaskView;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (void)setHighlightMaskView:(id)arg1;
- (void)setIconImgView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setDescArrowImgView:(id)arg1;
- (void).cxx_destruct;
@end

