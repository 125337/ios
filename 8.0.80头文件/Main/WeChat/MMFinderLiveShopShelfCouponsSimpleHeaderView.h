@interface MMFinderLiveShopShelfCouponsSimpleHeaderView : UIView
{
    id <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    long long _backMode; // +0x18
    UIImageView * _couponIconView; // +0x20
    UILabel * _titleLabel; // +0x28
    MMUIButton * _closeButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTitle:(id)arg1;
- (void)setBackMode:(long long)arg1;
- (void)layoutSubviews;
- (void)onClickLeftButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (long long)backMode;
- (id)couponIconView;
- (void)setCouponIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
