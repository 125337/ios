@interface FinderFavListCellContentContainer : UIView
{
    id /* block */ _clickNicknameBlock; // +0x8
    UILabel * _nickNameLabel; // +0x10
    UIImageView * _finderLogoView; // +0x18
    UIImageView * _authIconImageView; // +0x20
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x28
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x30
    unsigned long long _displayStyle; // +0x38
    NSString * _favID; // +0x40
    CGSize _layoutSize; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithFavInfo:(id)arg1 displayStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)clickNickNameAction;
- (id /* block */)clickNicknameBlock;
- (void)setClickNicknameBlock:(id /* block */)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)authIconImageView;
- (void)setAuthIconImageView:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (id)favID;
- (void)setFavID:(id)arg1;
- (void).cxx_destruct;
@end
