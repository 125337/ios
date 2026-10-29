@interface WCFinderCityAuthorizeView : MMUIView
{
    id <WCFinderCityAuthorizeViewDelegate> _delegate; // +0x8
    UIImageView * _poiIconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    MMUIButton * _authorizeBtn; // +0x28
    unsigned long long _style; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)refreshSubviews;
- (id)poiIconView;
- (id)titleLabel;
- (id)descLabel;
- (id)authorizeBtn;
- (void)setUpViews;
- (void)setStyle:(unsigned long long)arg1;
- (void)onClickAuthorityBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPoiIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setAuthorizeBtn:(id)arg1;
- (unsigned long long)style;
- (void).cxx_destruct;
@end
