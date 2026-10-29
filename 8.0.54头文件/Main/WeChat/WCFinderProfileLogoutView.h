@interface WCFinderProfileLogoutView : UIView
{
    BOOL _isLogoutDone; // +0x8
    id <WCFinderProfileLogoutViewDelegate> _delegate; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIButton * _IKnowButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsLogoutDone:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onCloseIKnowButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLogoutDone;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)IKnowButton;
- (void)setIKnowButton:(id)arg1;
- (void).cxx_destruct;
@end

