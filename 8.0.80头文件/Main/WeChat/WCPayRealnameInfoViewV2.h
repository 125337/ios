@interface WCPayRealnameInfoViewV2 : UIView <WCPayCountryCodeItemDelegate, ILinkEventExt, WCPayAddressItemDelegate, WCBaseInfoItemDelegate>
{
    BOOL _needChangeContentMaxSize; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    UIView * _baseGrowView; // +0x20
    UIView * _growView; // +0x28
    UIView * _headerView; // +0x30
    UILabel * _titleView; // +0x38
    UILabel * _descLabel; // +0x40
    WCBaseTextFieldItem * _nameView; // +0x48
    WCPayCredTypeItem * _holderIDTypeView; // +0x50
    WCBaseTextFieldItem * _holderIdView; // +0x58
    WCPayAddressItem * _areaView; // +0x60
    WCPayGetProfessionItemV2 * _professionView; // +0x68
    WCPaySelectDateItemV2 * _birthView; // +0x70
    WCPaySelectDateItemV2 * _effectView; // +0x78
    WCPaySelectDateItemV2 * _expireView; // +0x80
    WCPaySelectCountItemV2 * _renewView; // +0x88
    WCPaySelectGenderItem * _genderView; // +0x90
    WCPayCountryCodeItem * _nationView; // +0x98
    WCBaseTextFieldItem * _phoneView; // +0xa0
    UIView * _footerView; // +0xa8
    UIButton * _nextButton; // +0xb0
    double _minHeight; // +0xb8
    double _headerContentHeight; // +0xc0
    NSString * _name; // +0xc8
    id <WCPayRealnameInfoViewV2Delegate> _m_delegate; // +0xd0
    WCPayRealnameViewData * _viewData; // +0xd8
    RealNameNewWordingSection * _currentSession; // +0xe0
    NSMutableArray * _itemArray; // +0xe8
    TPIDKeyboardView * _keyboard; // +0xf0
    double _leftTitleMinWidth; // +0xf8
    double _leftTitleMaxWidth; // +0x100
    NSMutableArray * _lineArray; // +0x108
    CGPoint _currentOffset; // +0x110
}
- (void)dealloc;
- (void)updateWithName:(id)arg1 viewData:(id)arg2 minHeight:(double)arg3 delegate:(id)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)requestTableView;
- (void)updateView;
- (double)contentMaxWidth;
- (id)addTitle:(id)arg1 baseView:(id)arg2;
- (void)addRightImage:(id)arg1 baseView:(id)arg2;
- (void)addRightImage:(id)arg1 baseView:(id)arg2 clickTag:(id)arg3;
- (void)onClickRightImageView:(id)arg1;
- (void)addUpperLine:(id)arg1 option:(id /* block */)arg2;
- (void)addLine:(id)arg1 option:(id /* block */)arg2;
- (void)addLine:(id)arg1 option:(id /* block */)arg2 tag:(long long)arg3;
- (id)buttonWithTag:(long long)arg1 onView:(id)arg2 accessibilityLabel:(id)arg3 action:(SEL)arg4;
- (void)updateHeaderView;
- (void)updateTitleView;
- (void)updateDescView;
- (id)viewWithTag:(long long)arg1 onView:(id)arg2;
- (id)baseViewWithTag:(long long)arg1 onView:(id)arg2;
- (void)updateNameView;
- (void)updateHolderIdTypeView;
- (void)updateHolderIdView;
- (void)updateProfessionView;
- (long long)nowYear;
- (void)updateBirthView;
- (id)bannedArea;
- (void)updateAreaView;
- (void)updateExpireView;
- (void)updateEffectView;
- (void)updateRenewView;
- (void)updateGenderView;
- (void)updateNationView;
- (void)updatePhoneView;
- (void)updateFooterView;
- (void)configureBaseView:(id)arg1 option:(id /* block */)arg2;
- (void)updateNextButton;
- (void)onClickNextButton;
- (void)onClickNation;
- (void)onClickHolderIDType;
- (void)onClickProfessionView;
- (void)onClickAreaView;
- (void)onClickBirthView;
- (void)onClickEffectView;
- (void)onClickExpireView;
- (void)onClickRenewView;
- (void)onClickGenderView;
- (void)resignItem;
- (void)resignExcept:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)updateExpirePickerFromEffectDate;
- (void)updateEffectPickerFromExpireDate;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (id)getViewController;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)buttonEnabled;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(BOOL)arg2;
- (id)onWCPayAddressItemGetCurrentViewController;
- (double)onWCPayAddressItemMaxContentMax;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)didEnterBackground;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)baseGrowView;
- (void)setBaseGrowView:(id)arg1;
- (id)growView;
- (void)setGrowView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)nameView;
- (void)setNameView:(id)arg1;
- (id)holderIDTypeView;
- (void)setHolderIDTypeView:(id)arg1;
- (id)holderIdView;
- (void)setHolderIdView:(id)arg1;
- (id)areaView;
- (void)setAreaView:(id)arg1;
- (id)professionView;
- (void)setProfessionView:(id)arg1;
- (id)birthView;
- (void)setBirthView:(id)arg1;
- (id)effectView;
- (void)setEffectView:(id)arg1;
- (id)expireView;
- (void)setExpireView:(id)arg1;
- (id)renewView;
- (void)setRenewView:(id)arg1;
- (id)genderView;
- (void)setGenderView:(id)arg1;
- (id)nationView;
- (void)setNationView:(id)arg1;
- (id)phoneView;
- (void)setPhoneView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (double)headerContentHeight;
- (void)setHeaderContentHeight:(double)arg1;
- (BOOL)needChangeContentMaxSize;
- (void)setNeedChangeContentMaxSize:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)currentSession;
- (void)setCurrentSession:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)keyboard;
- (void)setKeyboard:(id)arg1;
- (CGPoint)currentOffset;
- (void)setCurrentOffset:(CGPoint)arg1;
- (double)leftTitleMinWidth;
- (void)setLeftTitleMinWidth:(double)arg1;
- (double)leftTitleMaxWidth;
- (void)setLeftTitleMaxWidth:(double)arg1;
- (id)lineArray;
- (void)setLineArray:(id)arg1;
- (void).cxx_destruct;
@end
