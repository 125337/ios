@interface FaceRecogPayContractViewController : MMUIViewController <FaceRecogPayContractConfirmViewDelegate>
{
    BOOL _hasContract; // +0x68
    id <FaceRecogPayContractViewControllerDelegate> _delegate; // +0x70
    NSString * _hintText; // +0x78
    NSString * _contractUrl; // +0x80
    NSString * _contractTitle; // +0x88
    NSString * _contractDesc; // +0x90
    NSString * _otherVerifyTitle; // +0x98
    UIImageView * _topIconView; // +0xa0
    MMUILabel * _titleLabel; // +0xa8
    MMUILabel * _descLabel; // +0xb0
    UIButton * _confirmButton; // +0xb8
    MMUIButton * _otherVerifyWayBtn; // +0xc0
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)setupUI;
- (BOOL)needSignContract;
- (void)onBack;
- (void)onStartVerify;
- (void)onClickOtherVerifyButton;
- (void)didConfirmContract;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasContract;
- (void)setHasContract:(BOOL)arg1;
- (id)hintText;
- (void)setHintText:(id)arg1;
- (id)contractUrl;
- (void)setContractUrl:(id)arg1;
- (id)contractTitle;
- (void)setContractTitle:(id)arg1;
- (id)contractDesc;
- (void)setContractDesc:(id)arg1;
- (id)otherVerifyTitle;
- (void)setOtherVerifyTitle:(id)arg1;
- (id)topIconView;
- (void)setTopIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)otherVerifyWayBtn;
- (void)setOtherVerifyWayBtn:(id)arg1;
- (void).cxx_destruct;
@end

