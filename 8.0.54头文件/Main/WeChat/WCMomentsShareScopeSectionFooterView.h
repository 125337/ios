@interface WCMomentsShareScopeSectionFooterView : UICollectionReusableView
{
    id <WCMomentsShareScopeSectionFooterDelegate> _delegate; // +0x8
    UIButton * _modifyScopeButton; // +0x10
}
+ (double)footerHeightForIsBlank:(BOOL)arg1;
+ (double)footerMarginTopForIsBlank:(BOOL)arg1;
- (void)updateViewWithIsBlank:(BOOL)arg1;
- (void)_onClickModifyScopeButton:(id)arg1;
- (void)_initView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)modifyScopeButton;
- (void)setModifyScopeButton:(id)arg1;
- (void).cxx_destruct;
@end

