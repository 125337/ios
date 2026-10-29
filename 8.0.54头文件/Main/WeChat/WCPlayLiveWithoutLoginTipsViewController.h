@interface WCPlayLiveWithoutLoginTipsViewController : MMCPUIViewController
{
    UIImageView * _tipsImageView; // +0x68
    MMUILabel * _tipsLabel; // +0x70
    MMUIButton * _confirmButton; // +0x78
    MMUIButton * _closeButton; // +0x80
    UIImageView * _indicateImageView; // +0x88
}
- (void)viewDidLoad;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)onClickConfirmButton:(id)arg1;
- (BOOL)useTransparentNavibar;
- (double)heightForLabel;
- (id)tipsImageView;
- (id)indicateImageView;
- (id)tipsLabel;
- (id)confirmButton;
- (id)closeButton;
- (void)setTipsImageView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setIndicateImageView:(id)arg1;
- (void).cxx_destruct;
@end

