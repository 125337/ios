@interface EcsFinderFeedSingleProductHeaderView : EcsFinderFeedSingleProductBaseView <MMWebImageViewDelegate>
{
    id /* block */ _onClickFeedbackButton; // +0x8
    id /* block */ _onClickProductImage; // +0x10
    EcsFinderFeedSingleProductNavBar * _navBar; // +0x18
    MMWebImageView * _productImageView; // +0x20
    MMUIButton * _feedbackButton; // +0x28
    EcsFinderFeedPopupView * _popupView; // +0x30
}
- (void)setDataVM:(id)arg1;
- (void)setupUI;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)themeColorForImage:(id)arg1 inRect:(CGRect)arg2;
- (id /* block */)onClickFeedbackButton;
- (void)setOnClickFeedbackButton:(id /* block */)arg1;
- (id /* block */)onClickProductImage;
- (void)setOnClickProductImage:(id /* block */)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (id)feedbackButton;
- (void)setFeedbackButton:(id)arg1;
- (id)popupView;
- (void)setPopupView:(id)arg1;
- (void).cxx_destruct;
@end
