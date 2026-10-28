@interface FinderFavListCellContentContainer : UIView
{
    id /* block */ _clickNicknameBlock; // +0x8
    UILabel * _nickNameLabel; // +0x10
    UIImageView * _finderLogoView; // +0x18
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x20
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x28
    CGSize _layoutSize; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithFavInfo:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)clickNickNameAction;
- (id /* block */)clickNicknameBlock;
- (void)setClickNicknameBlock:(id /* block */)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
