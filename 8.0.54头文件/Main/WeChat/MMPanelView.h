@interface MMPanelView : WCPayNavigationView
{
    MMUIButton * _leftBarButton; // +0x8
    UIButton * _rightBarButton; // +0x10
    UIView * _containerView; // +0x18
    UIView * _headerView; // +0x20
    UIView * _customContainerView; // +0x28
    UIView * _footerView; // +0x30
    UIButton * _leftButton; // +0x38
    UIView * _bottomButtonInternalView; // +0x40
    UIButton * _rightButton; // +0x48
    UIView * _customView; // +0x50
    double _customViewHeight; // +0x58
    NSString * _leftTitle; // +0x60
    NSString * _rightTitle; // +0x68
    id /* block */ _leftHandler; // +0x70
    id /* block */ _rightHandler; // +0x78
    id /* block */ _leftBarHandler; // +0x80
    id /* block */ _rightBarHandler; // +0x88
    unsigned long long _leftBarStyle; // +0x90
    unsigned long long _rightBarStyle; // +0x98
    NSString * _title; // +0xa0
    NSString * _subTitle; // +0xa8
    long long _titleAlignment; // +0xb0
    UILabel * _titleMainLabel; // +0xb8
    UILabel * _titleDescLabel; // +0xc0
    double _navigationY; // +0xc8
    WCPayCss * _css; // +0xd0
}
+ (id)ShowPanelWithCustomView:(id)arg1 customViewHeight:(double)arg2 leftTitle:(id)arg3 leftHandler:(id /* block */)arg4 rightTitle:(id)arg5 rightHandler:(id /* block */)arg6 leftBarStyle:(unsigned long long)arg7 leftBarHandler:(id /* block */)arg8 rightBarStyle:(unsigned long long)arg9 rightBarHandler:(id /* block */)arg10 title:(id)arg11 subTitle:(id)arg12 titleAlignment:(long long)arg13 complete:(id /* block */)arg14;
+ (id)ShowPanelWithCustomView:(id)arg1 customViewHeight:(double)arg2 leftTitle:(id)arg3 leftHandler:(id /* block */)arg4 rightTitle:(id)arg5 rightHandler:(id /* block */)arg6 leftBarStyle:(unsigned long long)arg7 leftBarHandler:(id /* block */)arg8 rightBarStyle:(unsigned long long)arg9 rightBarHandler:(id /* block */)arg10 title:(id)arg11 subTitle:(id)arg12 titleAlignment:(long long)arg13 complete:(id /* block */)arg14 lightMode:(BOOL)arg15;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateTitles;
- (void)updateTitleMain;
- (void)updateTitleDesc;
- (void)adjustTitle;
- (void)updateBarButton;
- (void)updateLeftBarButton;
- (void)updateRightBarButton;
- (void)updateHeaderView;
- (void)updateCustomContainerView;
- (void)updateFooterView;
- (void)updateLeftButton;
- (void)updateBottomButtonInternal;
- (void)updaterightButton;
- (void)onClickLeftButton;
- (void)onClickRightButton;
- (void)onClickRightBarButton;
- (void)onSpaceTap;
- (void)onClickLeftBarButton;
- (void)clearAllHandler;
- (void)hide:(id /* block */)arg1;
- (id)leftBarButton;
- (void)setLeftBarButton:(id)arg1;
- (id)rightBarButton;
- (void)setRightBarButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)customContainerView;
- (void)setCustomContainerView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)bottomButtonInternalView;
- (void)setBottomButtonInternalView:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (double)customViewHeight;
- (void)setCustomViewHeight:(double)arg1;
- (id)leftTitle;
- (void)setLeftTitle:(id)arg1;
- (id)rightTitle;
- (void)setRightTitle:(id)arg1;
- (id /* block */)leftHandler;
- (void)setLeftHandler:(id /* block */)arg1;
- (id /* block */)rightHandler;
- (void)setRightHandler:(id /* block */)arg1;
- (id /* block */)leftBarHandler;
- (void)setLeftBarHandler:(id /* block */)arg1;
- (id /* block */)rightBarHandler;
- (void)setRightBarHandler:(id /* block */)arg1;
- (unsigned long long)leftBarStyle;
- (void)setLeftBarStyle:(unsigned long long)arg1;
- (unsigned long long)rightBarStyle;
- (void)setRightBarStyle:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (long long)titleAlignment;
- (void)setTitleAlignment:(long long)arg1;
- (id)titleMainLabel;
- (void)setTitleMainLabel:(id)arg1;
- (id)titleDescLabel;
- (void)setTitleDescLabel:(id)arg1;
- (double)navigationY;
- (void)setNavigationY:(double)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (void).cxx_destruct;
@end

