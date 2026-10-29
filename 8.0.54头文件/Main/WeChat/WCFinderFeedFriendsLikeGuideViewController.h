@interface WCFinderFeedFriendsLikeGuideViewController : MMWindowViewController
{
    id <WCFinderFeedFriendsLikeGuideViewControllerDelegate> _delegate; // +0x78
    NSString * _tipsTitle; // +0x80
    NSString * _tipsSubtitle; // +0x88
    NSString * _cancelButtonTitle; // +0x90
    NSString * _confirmButtonTitle; // +0x98
    UIView * _backgroundView; // +0xa0
    UIView * _contentView; // +0xa8
    UILabel * _titleLabel; // +0xb0
    UILabel * _subtitleLabel; // +0xb8
    UIImageView * _iconImageView; // +0xc0
    UIButton * _confirmButton; // +0xc8
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

