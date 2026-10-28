@interface WCAssetStateView : UIView
{
    UIImageView * _iconImageView; // +0x8
    UILabel * _tipsLabel; // +0x10
    UILabel * _actionLabel; // +0x18
    UIView * _contentView; // +0x20
    CGSize _iconImageSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)iconImageView;
- (CGSize)iconImageSize;
- (void)setIconImageSize:(CGSize)arg1;
- (id)tipsLabel;
- (id)actionLabel;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
