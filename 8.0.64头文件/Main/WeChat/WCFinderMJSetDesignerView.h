@interface WCFinderMJSetDesignerView : MMUIButton
{
    UILabel * _topTitleLabel; // +0x8
    WCFinderHeadImageView * _headImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    WCFinderAuthInfoIconView * _authIconView; // +0x20
    UILabel * _songDescLabel; // +0x28
    WCFinderFollowButton * _followBtn; // +0x30
}
+ (id)genTitleLabelWithWidth:(double)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubView;
- (void)setupLayout;
- (id)followBtn;
- (id)songDescLabel;
- (id)topTitleLabel;
- (id)headImageView;
- (id)nicknameLabel;
- (id)authIconView;
- (void)updateWithContactInfo:(id)arg1 originCount:(long long)arg2;
- (void)setTopTitleLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setSongDescLabel:(id)arg1;
- (void)setFollowBtn:(id)arg1;
- (void).cxx_destruct;
@end
