@interface MMFinderHeaderInfoView : UIView <WCFinderHeadImageViewDelegate>
{
    WCFinderContact * _finderContact; // +0x8
    WCFinderHeadImageView * _headerImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    WCFinderAuthInfoIconView * _authorizedIconView; // +0x20
    UILabel * _secondaryLabel; // +0x28
    id /* block */ _headerImageDidUpdateBlock; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFinderContact:(id)arg1;
- (void)updateFinderContact:(id)arg1;
- (void)layoutSubviews;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authorizedIconView;
- (void)setAuthorizedIconView:(id)arg1;
- (id)secondaryLabel;
- (void)setSecondaryLabel:(id)arg1;
- (id /* block */)headerImageDidUpdateBlock;
- (void)setHeaderImageDidUpdateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
