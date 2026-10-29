@interface WCPayFetchIdentifyTipsViewController : MMWindowViewController
{
    WCPayLargeAccountTipsDialog * m_data; // +0x78
    id <WCPayFetchIdentifyTipsViewControllerDelegate> _delegate; // +0x80
    UIView * _backgroundView; // +0x88
    UIView * _contentView; // +0x90
    UIButton * _closeButton; // +0x98
    UIButton * _confirmButton; // +0xa0
    UIImageView * _icon; // +0xa8
    UILabel * _titleLabel; // +0xb0
    UILabel * _subTitleLabel; // +0xb8
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

