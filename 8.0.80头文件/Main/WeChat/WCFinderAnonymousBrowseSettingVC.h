@interface WCFinderAnonymousBrowseSettingVC : MMUIViewController
{
    BOOL _isEnableAnonymous; // +0x70
    id /* block */ _updateBlock; // +0x78
    UIScrollView * _scrollView; // +0x80
    UIView * _contentView; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _descLabel; // +0x98
    UIImageView * _realHeadImageView; // +0xa0
    UIImageView * _arrowImageView; // +0xa8
    UIImageView * _maskedHeadImageView; // +0xb0
    UILabel * _realNicknameLabel; // +0xb8
    UILabel * _maskedNicknameLabel; // +0xc0
    UIButton * _enableButton; // +0xc8
}
- (void)viewDidLoad;
- (void)setupSubviews;
- (void)updateUIForAnonymousMode;
- (void)viewDidLayoutSubviews;
- (void)layoutAllSubviews;
- (void)enableButtonTapped;
- (id)navigationBarBackgroundColor;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)realHeadImageView;
- (void)setRealHeadImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)maskedHeadImageView;
- (void)setMaskedHeadImageView:(id)arg1;
- (id)realNicknameLabel;
- (void)setRealNicknameLabel:(id)arg1;
- (id)maskedNicknameLabel;
- (void)setMaskedNicknameLabel:(id)arg1;
- (id)enableButton;
- (void)setEnableButton:(id)arg1;
- (BOOL)isEnableAnonymous;
- (void)setIsEnableAnonymous:(BOOL)arg1;
- (void).cxx_destruct;
@end
