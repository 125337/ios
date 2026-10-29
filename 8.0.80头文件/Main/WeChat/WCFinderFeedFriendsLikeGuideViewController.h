@interface WCFinderFeedFriendsLikeGuideViewController : MMWindowViewController
{
    id <WCFinderFeedFriendsLikeGuideViewControllerDelegate> _delegate; // +0x80
    NSString * _tipsTitle; // +0x88
    NSString * _tipsSubtitle; // +0x90
    NSString * _cancelButtonTitle; // +0x98
    NSString * _confirmButtonTitle; // +0xa0
    UIView * _backgroundView; // +0xa8
    UIView * _contentView; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _subtitleLabel; // +0xc0
    UIImageView * _iconImageView; // +0xc8
    UIButton * _confirmButton; // +0xd0
}
- (void)viewDidLoad;
- (id)backgroundView;
- (id)contentView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)iconImageView;
- (id)confirmButton;
- (void)showTips;
- (void)setupSubviews;
- (void)onCancel;
- (void)onConfirm;
- (void)hideMyself;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsTitle;
- (void)setTipsTitle:(id)arg1;
- (id)tipsSubtitle;
- (void)setTipsSubtitle:(id)arg1;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
