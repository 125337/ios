@interface WCPayAddressViewController : WCPayBaseViewController <WCPayAreaItemDelegate, WCBaseInfoItemDelegate>
{
    id <WCPayAddressViewControllerDelegate> _m_delegate; // +0x90
    UIView * _containerView; // +0x98
    UIView * _headerView; // +0xa0
    UILabel * _titleLabel; // +0xa8
    UIView * _lineView; // +0xb0
    UIButton * _areaBaseView; // +0xb8
    WCPayAreaItem * _areaView; // +0xc0
    WCBaseTextFieldItem * _addressView; // +0xc8
    UIView * _footerView; // +0xd0
    UIButton * _nextButton; // +0xd8
    WCPayCss * _css; // +0xe0
    NSMutableArray * _itemArray; // +0xe8
    double _keyboardHeight; // +0xf0
}
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)onTapEmpty;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateTitleView;
- (void)updateLineView;
- (void)updateAreaView;
- (void)onClickAreaView;
- (void)resignItem;
- (void)updateAddressView;
- (void)updateFooterView;
- (void)updateNextButton;
- (void)onClickNextButton;
- (void)addTitle:(id)arg1 baseView:(id)arg2;
- (double)leftTitleMaxWidth;
- (void)addRightImage:(id)arg1 baseView:(id)arg2;
- (void)addLine:(id)arg1 option:(id /* block */)arg2;
- (BOOL)buttonEnabled;
- (void)resignExcept:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)areaBaseView;
- (void)setAreaBaseView:(id)arg1;
- (id)areaView;
- (void)setAreaView:(id)arg1;
- (id)addressView;
- (void)setAddressView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end

