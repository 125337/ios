@interface BrandFansInviteBannerView : UIView
{
    BOOL _hasInvited; // +0x8
    id /* block */ _onInviteClicked; // +0x10
    UILabel * _bannerLabel; // +0x18
    UIButton * _inviteButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)renderWithGenderText:(id)arg1 hasInvited:(BOOL)arg2;
- (void)renderWithBannerText:(id)arg1 hasInvited:(BOOL)arg2;
- (void)didClickInvite;
- (id /* block */)onInviteClicked;
- (void)setOnInviteClicked:(id /* block */)arg1;
- (id)bannerLabel;
- (void)setBannerLabel:(id)arg1;
- (id)inviteButton;
- (void)setInviteButton:(id)arg1;
- (BOOL)hasInvited;
- (void)setHasInvited:(BOOL)arg1;
- (void).cxx_destruct;
@end
