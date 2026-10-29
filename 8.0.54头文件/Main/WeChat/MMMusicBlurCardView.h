@interface MMMusicBlurCardView : UIControl <MMWebImageViewDelegate>
{
    unsigned long long _bizScene; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    UIImageView * _blurBgView; // +0x18
    UIImageView * _blurCoverView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    NSString * _titleStr; // +0x38
    NSString * _descStr; // +0x40
    NSString * _coverUrl; // +0x48
    UIImage * _coverImg; // +0x50
}
- (id)initWithBizScene:(unsigned long long)arg1;
- (void)reload;
- (void)initCoverImageView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)setCoverImg:(id)arg1;
- (void)updateCoverImage;
- (void)updateBlurBgView;
- (id)blurEffectAlbumImage;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)descStr;
- (void)setDescStr:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverImg;
- (void).cxx_destruct;
@end

