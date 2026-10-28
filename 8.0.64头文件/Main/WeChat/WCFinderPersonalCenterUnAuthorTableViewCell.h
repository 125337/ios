@interface WCFinderPersonalCenterUnAuthorTableViewCell : UICollectionViewCell
{
    WCFinderHeadImageView * _headerView; // +0x8
    UILabel * _nicknameLabel; // +0x10
    UILabel * _fansLabel; // +0x18
    UIImageView * _arrowIconView; // +0x20
    UIView * _redDot; // +0x28
    UnAuthFinder * _authInfo; // +0x30
}
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubViews;
- (void)updateUnAuthFinder:(id)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)fansLabel;
- (void)setFansLabel:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)redDot;
- (void)setRedDot:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (void).cxx_destruct;
@end
