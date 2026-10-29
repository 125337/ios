@interface XiaoWeiSyncConsentViewController : MMUIViewController
{
    NSString * _deviceName; // +0x70
    id /* block */ _completion; // +0x78
    WCSheetView * _sheetView; // +0x80
    UIView * _cardView; // +0x88
    UIImageView * _illustrationImageView; // +0x90
    UILabel * _contentLabel; // +0x98
    UIButton * _confirmButton; // +0xa0
}
- (id)initWithDeviceName:(id)arg1 completion:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateLayouts;
- (BOOL)useCustomNavibar;
- (BOOL)shouldHideNavigationBar;
- (void)onTapClose;
- (void)onTapConfirm;
- (void)completeWithConsented:(BOOL)arg1;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)illustrationImageView;
- (void)setIllustrationImageView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
