@interface WCPayNavigationView : UIView
{
    BOOL m_showing; // +0x8
    double m_navigationOffsetY; // +0x10
    unsigned long long _m_pushedDirection; // +0x18
    UIView * _my_cancelButton; // +0x20
    UILabel * _my_titleLabel; // +0x28
    UILabel * _my_subtitleLabel; // +0x30
    NSString * _my_title; // +0x38
    NSString * _my_subtitle; // +0x40
    UIFont * _titleFont; // +0x48
}
+ (void)baseView:(id)arg1 pushView:(id)arg2 animated:(BOOL)arg3 direction:(unsigned long long)arg4 completeHandler:(id /* block */)arg5;
+ (void)baseView:(id)arg1 popView:(id)arg2 animated:(BOOL)arg3 direction:(unsigned long long)arg4 completeHandler:(id /* block */)arg5;
+ (void)baseView:(id)arg1 pushView:(id)arg2;
+ (void)baseView:(id)arg1 presentView:(id)arg2;
- (id)init;
- (void)updateShowing:(BOOL)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateTitleFont:(id)arg1;
- (void)updateSubtitle:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)layoutSubviews;
- (void)updateSubView;
- (void)updateCancelButton;
- (id)cancelButtonViewWithPushDirection:(unsigned long long)arg1;
- (void)updateTitleLabel;
- (void)updateSubtitleLabel;
- (void)adjustTitleLabel;
- (void)pushView:(id)arg1 animated:(BOOL)arg2 direction:(unsigned long long)arg3 completeHandler:(id /* block */)arg4;
- (void)popView:(id)arg1 animated:(BOOL)arg2 direction:(unsigned long long)arg3 completeHandler:(id /* block */)arg4;
- (void)presentView:(id)arg1;
- (void)presentView:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)pushView:(id)arg1;
- (void)pushView:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)popView:(id)arg1;
- (void)popView:(id)arg1 CompleteHandler:(id /* block */)arg2;
- (void)dismissMyself;
- (void)dismissMyselfWithCompleteHandler:(id /* block */)arg1;
- (void)popAll;
- (void)popAllWithCompleteHandler:(id /* block */)arg1;
- (void)popToRoot;
- (void)popToRootWithCompleteHandler:(id /* block */)arg1;
- (BOOL)m_showing;
- (double)m_navigationOffsetY;
- (unsigned long long)m_pushedDirection;
- (void)setM_pushedDirection:(unsigned long long)arg1;
- (id)my_cancelButton;
- (void)setMy_cancelButton:(id)arg1;
- (id)my_titleLabel;
- (void)setMy_titleLabel:(id)arg1;
- (id)my_subtitleLabel;
- (void)setMy_subtitleLabel:(id)arg1;
- (id)my_title;
- (void)setMy_title:(id)arg1;
- (id)my_subtitle;
- (void)setMy_subtitle:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (void).cxx_destruct;
@end

