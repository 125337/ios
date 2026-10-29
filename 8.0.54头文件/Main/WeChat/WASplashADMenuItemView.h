@interface WASplashADMenuItemView : MMUIView
{
    id <WASplashADMenuItemViewDelegate> _delegate; // +0x8
    NSDictionary * _itemDict; // +0x10
    MMUILabel * _mainTitleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    MMWebImageView * _logoImageView; // +0x28
    UIImageView * _arrowView; // +0x30
    MMUIButton * _button; // +0x38
}
- (id)initWithMenuItemDict:(id)arg1;
- (void)layoutSubviews;
- (id)subTitleLabel;
- (id)mainTitleLabel;
- (id)logoImageView;
- (id)arrowView;
- (id)button;
- (void)onClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemDict;
- (void)setItemDict:(id)arg1;
- (void)setMainTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

