@interface WCPayFetchIdentifyTipsViewController : MMWindowViewController
{
    WCPayLargeAccountTipsDialog * m_data; // +0x80
    id <WCPayFetchIdentifyTipsViewControllerDelegate> _delegate; // +0x88
    UIView * _backgroundView; // +0x90
    UIView * _contentView; // +0x98
    UIButton * _closeButton; // +0xa0
    UIButton * _confirmButton; // +0xa8
    UIImageView * _icon; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _subTitleLabel; // +0xc0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)refreshView:(id)arg1;
- (void)close;
- (void)confirm;
- (id)backgroundView;
- (id)closeButton;
- (id)icon;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)confirmButton;
- (void)layoutContentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
