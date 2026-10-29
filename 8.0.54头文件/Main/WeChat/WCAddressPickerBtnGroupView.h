@interface WCAddressPickerBtnGroupView : UIView
{
    id <WCAddressTableViewDelegate> m_delegate; // +0x8
    UIButton * _selectProvinceButton; // +0x10
    UIButton * _selectCityButton; // +0x18
    UIButton * _selectDistrictButton; // +0x20
    UIButton * _selectStreetButton; // +0x28
    UIScrollView * _containerView; // +0x30
    UIView * _separateLine; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onClickButton:(id)arg1;
- (id)defaultButtonTiltes;
- (void)setDelegate:(id)arg1;
- (id)buttonAtIndex:(long long)arg1;
- (void)layoutBtnAtIndex:(unsigned long long)arg1 withStatus:(int)arg2 andTitle:(id)arg3;
- (void)updateContainerLayout;
- (void)updateLayoutWhenComponentAppear:(long long)arg1;
- (id)selectProvinceButton;
- (void)setSelectProvinceButton:(id)arg1;
- (id)selectCityButton;
- (void)setSelectCityButton:(id)arg1;
- (id)selectDistrictButton;
- (void)setSelectDistrictButton:(id)arg1;
- (id)selectStreetButton;
- (void)setSelectStreetButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end

